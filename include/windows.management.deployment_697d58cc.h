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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2;
typedef interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation;
typedef struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl;
interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation;
typedef struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl;
interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume **first);
    END_INTERFACE
} __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                       __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *asyncInfo, struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;
typedef struct __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;
interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;
typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;
interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;
typedef struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;
interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;
typedef interface __FIIterator_1_Windows__CApplicationModel__CPackage __FIIterator_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackage;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CPackage __FIIterable_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackage;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackage __FIVectorView_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackage;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                       __x_ABI_CWindows_CApplicationModel_CIPackage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CPackage __FIVector_1_Windows__CApplicationModel__CPackage;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackage;
typedef struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackage * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageVtbl;
interface __FIVector_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT64 __FIAsyncOperationCompletedHandler_1_UINT64;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT64;
typedef interface __FIAsyncOperation_1_UINT64 __FIAsyncOperation_1_UINT64;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This, __RPC__in_opt __FIAsyncOperation_1_UINT64 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT64Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT64 __FIAsyncOperation_1_UINT64;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT64;
typedef struct __FIAsyncOperation_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT64 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT64 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT64 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT64 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT64 * This, __RPC__out unsigned __int64 *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT64Vtbl;
interface __FIAsyncOperation_1_UINT64
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT64Vtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageState __x_ABI_CWindows_CManagement_CDeployment_CPackageState;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes;
typedef enum __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions;
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress;
enum __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions
{
    AddPackageByAppInstallerOptions_None = 0,
    AddPackageByAppInstallerOptions_InstallAllResources = 0x20,
    AddPackageByAppInstallerOptions_ForceTargetAppShutdown = 0x40,
    AddPackageByAppInstallerOptions_RequiredContentGroupOnly = 0x100,
    AddPackageByAppInstallerOptions_LimitToExistingPackages = 0x200,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions
{
    DeploymentOptions_None = 0,
    DeploymentOptions_ForceApplicationShutdown = 0x1,
    DeploymentOptions_DevelopmentMode = 0x2,
    DeploymentOptions_InstallAllResources = 0x20,
    DeploymentOptions_ForceTargetApplicationShutdown = 0x40,
    DeploymentOptions_RequiredContentGroupOnly = 0x100,
    DeploymentOptions_ForceUpdateFromAnyVersion = 0x40000,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState
{
    DeploymentProgressState_Queued = 0,
    DeploymentProgressState_Processing = 1,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState
{
    PackageInstallState_NotInstalled = 0,
    PackageInstallState_Staged = 1,
    PackageInstallState_Installed = 2,
    PackageInstallState_Paused = 6,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageState
{
    PackageState_Normal = 0,
    PackageState_LicenseInvalid = 1,
    PackageState_Modified = 2,
    PackageState_Tampered = 3,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus
{
    PackageStatus_OK = 0,
    PackageStatus_LicenseIssue = 0x1,
    PackageStatus_Modified = 0x2,
    PackageStatus_Tampered = 0x4,
    PackageStatus_Disabled = 0x8,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes
{
    PackageTypes_None = 0,
    PackageTypes_Main = 0x1,
    PackageTypes_Framework = 0x2,
    PackageTypes_Resource = 0x4,
    PackageTypes_Bundle = 0x8,
    PackageTypes_Xap = 0x10,
    PackageTypes_Optional = 0x20,
};
enum __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions
{
    RemovalOptions_None = 0,
    RemovalOptions_PreserveApplicationData = 0x1000,
    RemovalOptions_RemoveForAllUsers = 0x80000,
};
struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress
{
    __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState state;
    UINT32 percentage;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult[] = L"Windows.Management.Deployment.IDeploymentResult";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedErrorCode )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorText(This,value) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_ExtendedErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult2[] = L"Windows.Management.Deployment.IDeploymentResult2";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsRegistered )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsRegistered(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager[] = L"Windows.Management.Deployment.IPackageManager";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *AddPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdatePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemovePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *StagePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * manifestUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackages )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING userSecurityId,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    HRESULT ( STDMETHODCALLTYPE *FindUsers )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * * users
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageState )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageState packageState
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackageByPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * packageInformation
        );
    HRESULT ( STDMETHODCALLTYPE *CleanupPackageForUserAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING userSecurityId,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackageByUserSecurityIdPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * packageInformation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )
    ( (This)->lpVtbl->UpdatePackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )
    ( (This)->lpVtbl->RemovePackageAsync(This,packageFullName,deploymentOperation) )
    ( (This)->lpVtbl->StagePackageAsync(This,packageUri,dependencyPackageUris,deploymentOperation) )
    ( (This)->lpVtbl->RegisterPackageAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )
    ( (This)->lpVtbl->FindPackages(This,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindUsers(This,packageFullName,users) )
    ( (This)->lpVtbl->SetPackageState(This,packageFullName,packageState) )
    ( (This)->lpVtbl->FindPackageByPackageFullName(This,packageFullName,packageInformation) )
    ( (This)->lpVtbl->CleanupPackageForUserAsync(This,packageName,userSecurityId,deploymentOperation) )
    ( (This)->lpVtbl->FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageInformation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager2[] = L"Windows.Management.Deployment.IPackageManager2";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RemovePackageWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions removalOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *StagePackageWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterPackageByFullNameAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING mainPackageFullName,
                  __RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFullNames,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING userSecurityId,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING packageFamilyName,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageFamilyName,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *StageUserDataAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RemovePackageWithOptionsAsync(This,packageFullName,removalOptions,deploymentOperation) )
    ( (This)->lpVtbl->StagePackageWithOptionsAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )
    ( (This)->lpVtbl->RegisterPackageByFullNameAsync(This,mainPackageFullName,dependencyPackageFullNames,deploymentOptions,deploymentOperation) )
    ( (This)->lpVtbl->FindPackagesWithPackageTypes(This,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByNamePublisherWithPackageTypes(This,packageName,packagePublisher,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageName,packagePublisher,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByPackageFamilyNameWithPackageTypes(This,packageFamilyName,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(This,userSecurityId,packageFamilyName,packageTypes,packageCollection) )
    ( (This)->lpVtbl->StageUserDataAsync(This,packageFullName,deploymentOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager3[] = L"Windows.Management.Deployment.IPackageManager3";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddPackageVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING packageStorePath,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * * packageVolume
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPackageStatus )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus status
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterPackageWithAppDataVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * manifestUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * appDataVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackageVolumeByName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING volumeName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * * volume
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackageVolumes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * * volumeCollection
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultPackageVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * * volume
        );
    HRESULT ( STDMETHODCALLTYPE *MovePackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemovePackageVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * volume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultPackageVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * volume
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageStatus )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus status
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageVolumeOfflineAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * packageVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageVolumeOnlineAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * packageVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *StageUserDataWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
                  __RPC__in HSTRING packageFullName,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddPackageVolumeAsync(This,packageStorePath,packageVolume) )
    ( (This)->lpVtbl->AddPackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) )
    ( (This)->lpVtbl->ClearPackageStatus(This,packageFullName,status) )
    ( (This)->lpVtbl->RegisterPackageWithAppDataVolumeAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,appDataVolume,deploymentOperation) )
    ( (This)->lpVtbl->FindPackageVolumeByName(This,volumeName,volume) )
    ( (This)->lpVtbl->FindPackageVolumes(This,volumeCollection) )
    ( (This)->lpVtbl->GetDefaultPackageVolume(This,volume) )
    ( (This)->lpVtbl->MovePackageToVolumeAsync(This,packageFullName,deploymentOptions,targetVolume,deploymentOperation) )
    ( (This)->lpVtbl->RemovePackageVolumeAsync(This,volume,deploymentOperation) )
    ( (This)->lpVtbl->SetDefaultPackageVolume(This,volume) )
    ( (This)->lpVtbl->SetPackageStatus(This,packageFullName,status) )
    ( (This)->lpVtbl->SetPackageVolumeOfflineAsync(This,packageVolume,deploymentOperation) )
    ( (This)->lpVtbl->SetPackageVolumeOnlineAsync(This,packageVolume,deploymentOperation) )
    ( (This)->lpVtbl->StagePackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) )
    ( (This)->lpVtbl->StageUserDataWithOptionsAsync(This,packageFullName,deploymentOptions,deploymentOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager4[] = L"Windows.Management.Deployment.IPackageManager4";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPackageVolumesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPackageVolumesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager5[] = L"Windows.Management.Deployment.IPackageManager5";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                                      HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterPackageByFamilyNameAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                  __RPC__in HSTRING mainPackageFamilyName,
                  __RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFamilyNames,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * appDataVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DebugSettings )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddPackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) )
    ( (This)->lpVtbl->StagePackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) )
    ( (This)->lpVtbl->RegisterPackageByFamilyNameAndOptionalPackagesAsync(This,mainPackageFamilyName,dependencyPackageFamilyNames,deploymentOptions,appDataVolume,optionalPackageFamilyNames,deploymentOperation) )
    ( (This)->lpVtbl->get_DebugSettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager6[] = L"Windows.Management.Deployment.IPackageManager6";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProvisionPackageForAllUsersAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddPackageByAppInstallerFileAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * appInstallerFileUri,
                  __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddPackageByAppInstallerFileAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * appInstallerFileUri,
                  __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAndRelatedSetAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAndRelatedSetAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions options,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProvisionPackageForAllUsersAsync(This,packageFamilyName,operation) )
    ( (This)->lpVtbl->AddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) )
    ( (This)->lpVtbl->RequestAddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) )
    ( (This)->lpVtbl->AddPackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) )
    ( (This)->lpVtbl->StagePackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) )
    ( (This)->lpVtbl->RequestAddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,relatedPackageUris,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager7[] = L"Windows.Management.Deployment.IPackageManager7";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestAddPackageAndRelatedSetAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                  __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
                  __RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
                  __RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAddPackageAndRelatedSetAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,relatedPackageUris,packageUrisToInstall,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager8[] = L"Windows.Management.Deployment.IPackageManager8";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeprovisionPackageForAllUsersAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8 * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DeprovisionPackageForAllUsersAsync(This,packageFamilyName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManagerDebugSettings[] = L"Windows.Management.Deployment.IPackageManagerDebugSettings";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SetContentGroupStateAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
                  __RPC__in HSTRING contentGroupName,
                  __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState state,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
                    HRESULT ( STDMETHODCALLTYPE *SetContentGroupStateWithPercentageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
                  __RPC__in HSTRING contentGroupName,
                  __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState state,
                  DOUBLE completionPercentage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetContentGroupStateAsync(This,package,contentGroupName,state,action) )
    ( (This)->lpVtbl->SetContentGroupStateWithPercentageAsync(This,package,contentGroupName,state,completionPercentage,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageUserInformation[] = L"Windows.Management.Deployment.IPackageUserInformation";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallState )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
                           __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserSecurityId(This,value) )
    ( (This)->lpVtbl->get_InstallState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume[] = L"Windows.Management.Deployment.IPackageVolume";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsOffline )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSystemVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MountPoint )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PackageStorePath )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsHardLinks )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackages )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisherWithPackagesTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackageByPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                  __RPC__in HSTRING packageName,
                  __RPC__in HSTRING packagePublisher,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
                    HRESULT ( STDMETHODCALLTYPE *FindPackageByUserSecurityIdPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
                  __RPC__in HSTRING userSecurityId,
                  __RPC__in HSTRING packageFullName,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsOffline(This,value) )
    ( (This)->lpVtbl->get_IsSystemVolume(This,value) )
    ( (This)->lpVtbl->get_MountPoint(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_PackageStorePath(This,value) )
    ( (This)->lpVtbl->get_SupportsHardLinks(This,value) )
    ( (This)->lpVtbl->FindPackages(This,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackagesWithPackageTypes(This,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByNamePublisherWithPackagesTypes(This,packageTypes,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByPackageFamilyNameWithPackageTypes(This,packageTypes,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackageByPackageFullName(This,packageFullName,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageTypes,packageName,packagePublisher,packageCollection) )
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(This,userSecurityId,packageTypes,packageFamilyName,packageCollection) )
    ( (This)->lpVtbl->FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageCollection) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume2[] = L"Windows.Management.Deployment.IPackageVolume2";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFullTrustPackageSupported )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAppxInstallSupported )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAvailableSpaceAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT64 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFullTrustPackageSupported(This,value) )
    ( (This)->lpVtbl->get_IsAppxInstallSupported(This,value) )
    ( (This)->lpVtbl->GetAvailableSpaceAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_DeploymentResult[] = L"Windows.Management.Deployment.DeploymentResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManager[] = L"Windows.Management.Deployment.PackageManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManagerDebugSettings[] = L"Windows.Management.Deployment.PackageManagerDebugSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageUserInformation[] = L"Windows.Management.Deployment.PackageUserInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageVolume[] = L"Windows.Management.Deployment.PackageVolume";
       
       
#pragma clang diagnostic pop

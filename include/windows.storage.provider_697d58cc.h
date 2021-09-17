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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource;
typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;
typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl;
interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;
typedef struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl;
interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;
interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
typedef struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;
interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;
interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
typedef struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;
interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                       __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;
interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;
typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                       __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;
interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;
typedef struct __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;
interface __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, __RPC__out enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * sender, __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CUIStatus __x_ABI_CWindows_CStorage_CProvider_CUIStatus;
typedef enum __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode;
enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions
{
    CachedFileOptions_None = 0,
    CachedFileOptions_RequireUpdateOnAccess = 0x1,
    CachedFileOptions_UseCachedFileWhenOffline = 0x2,
    CachedFileOptions_DenyAccessWhenOffline = 0x4,
};
enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget
{
    CachedFileTarget_Local = 0,
    CachedFileTarget_Remote = 1,
};
enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus
{
    FileUpdateStatus_Incomplete = 0,
    FileUpdateStatus_Complete = 1,
    FileUpdateStatus_UserInputNeeded = 2,
    FileUpdateStatus_CurrentlyUnavailable = 3,
    FileUpdateStatus_Failed = 4,
    FileUpdateStatus_CompleteAndRenamed = 5,
};
enum __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode
{
    ReadActivationMode_NotNeeded = 0,
    ReadActivationMode_BeforeAccess = 1,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy
{
    StorageProviderHardlinkPolicy_None = 0,
    StorageProviderHardlinkPolicy_Allowed = 0x1,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy
{
    StorageProviderHydrationPolicy_Partial = 0,
    StorageProviderHydrationPolicy_Progressive = 1,
    StorageProviderHydrationPolicy_Full = 2,
    StorageProviderHydrationPolicy_AlwaysFull = 3,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier
{
    StorageProviderHydrationPolicyModifier_None = 0,
    StorageProviderHydrationPolicyModifier_ValidationRequired = 0x1,
    StorageProviderHydrationPolicyModifier_StreamingAllowed = 0x2,
    StorageProviderHydrationPolicyModifier_AutoDehydrationAllowed = 0x4,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy
{
    StorageProviderInSyncPolicy_Default = 0,
    StorageProviderInSyncPolicy_FileCreationTime = 0x1,
    StorageProviderInSyncPolicy_FileReadOnlyAttribute = 0x2,
    StorageProviderInSyncPolicy_FileHiddenAttribute = 0x4,
    StorageProviderInSyncPolicy_FileSystemAttribute = 0x8,
    StorageProviderInSyncPolicy_DirectoryCreationTime = 0x10,
    StorageProviderInSyncPolicy_DirectoryReadOnlyAttribute = 0x20,
    StorageProviderInSyncPolicy_DirectoryHiddenAttribute = 0x40,
    StorageProviderInSyncPolicy_DirectorySystemAttribute = 0x80,
    StorageProviderInSyncPolicy_FileLastWriteTime = 0x100,
    StorageProviderInSyncPolicy_DirectoryLastWriteTime = 0x200,
    StorageProviderInSyncPolicy_PreserveInsyncForSyncEngine = 0x80000000,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy
{
    StorageProviderPopulationPolicy_Full = 1,
    StorageProviderPopulationPolicy_AlwaysFull = 2,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode
{
    StorageProviderProtectionMode_Unknown = 0,
    StorageProviderProtectionMode_Personal = 1,
};
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus
{
    StorageProviderUriSourceStatus_Success = 0,
    StorageProviderUriSourceStatus_NoSyncRoot = 1,
    StorageProviderUriSourceStatus_FileNotFound = 2,
};
enum __x_ABI_CWindows_CStorage_CProvider_CUIStatus
{
    UIStatus_Unavailable = 0,
    UIStatus_Hidden = 1,
    UIStatus_Visible = 2,
    UIStatus_Complete = 3,
};
enum __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode
{
    WriteActivationMode_ReadOnly = 0,
    WriteActivationMode_NotNeeded = 1,
    WriteActivationMode_AfterWrite = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterStatics[] = L"Windows.Storage.Provider.ICachedFileUpdaterStatics";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetUpdateInformation )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING contentId,
                  __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode readMode,
                  __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode writeMode,
                  __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions options
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetUpdateInformation(This,file,contentId,readMode,writeMode,options) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateTarget )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FileUpdateRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FileUpdateRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UIRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UIRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UIStatus )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CUIStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_UpdateTarget(This,value) )
    ( (This)->lpVtbl->add_FileUpdateRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_FileUpdateRequested(This,token) )
    ( (This)->lpVtbl->add_UIRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UIRequested(This,token) )
    ( (This)->lpVtbl->get_UIStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI2[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI2";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UpdateRequest )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UpdateRequest(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest[] = L"Windows.Storage.Provider.IFileUpdateRequest";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentId )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                  __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocalFile )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentId(This,value) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->UpdateLocalFile(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest2[] = L"Windows.Storage.Provider.IFileUpdateRequest2";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserInputNeededMessage )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserInputNeededMessage )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserInputNeededMessage(This,value) )
    ( (This)->lpVtbl->put_UserInputNeededMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestDeferral[] = L"Windows.Storage.Provider.IFileUpdateRequestDeferral";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult[] = L"Windows.Storage.Provider.IStorageProviderGetContentInfoForPathResult";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResultVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->get_ContentUri(This,value) )
    ( (This)->lpVtbl->put_ContentUri(This,value) )
    ( (This)->lpVtbl->get_ContentId(This,value) )
    ( (This)->lpVtbl->put_ContentId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult[] = L"Windows.Storage.Provider.IStorageProviderGetPathForContentUriResult";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderUriSourceStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResultVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics[] = L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAsync )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * item,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * itemProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetAsync(This,item,itemProperties,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemProperty[] = L"Windows.Storage.Provider.IStorageProviderItemProperty";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_IconResource(This,value) )
    ( (This)->lpVtbl->get_IconResource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayNameResource(This,value) )
    ( (This)->lpVtbl->put_DisplayNameResource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertySource[] = L"Windows.Storage.Provider.IStorageProviderItemPropertySource";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemProperties )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
                  __RPC__in HSTRING itemPath,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetItemProperties(This,itemPath,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderPropertyCapabilities[] = L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsPropertySupported )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
                  __RPC__in HSTRING propertyCanonicalName,
                           __RPC__out boolean * isSupported
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsPropertySupported(This,propertyCanonicalName,isSupported) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.IStorageProviderSyncRootInfo";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Context )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HydrationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HydrationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HydrationPolicyModifier )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HydrationPolicyModifier )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PopulationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PopulationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InSyncPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InSyncPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardlinkPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HardlinkPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowSiblingsAsGroup )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowSiblingsAsGroup )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionMode )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectionMode )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowPinning )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowPinning )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorageProviderItemPropertyDefinitions )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecycleBinUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RecycleBinUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Context(This,value) )
    ( (This)->lpVtbl->put_Context(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->put_Path(This,value) )
    ( (This)->lpVtbl->get_DisplayNameResource(This,value) )
    ( (This)->lpVtbl->put_DisplayNameResource(This,value) )
    ( (This)->lpVtbl->get_IconResource(This,value) )
    ( (This)->lpVtbl->put_IconResource(This,value) )
    ( (This)->lpVtbl->get_HydrationPolicy(This,value) )
    ( (This)->lpVtbl->put_HydrationPolicy(This,value) )
    ( (This)->lpVtbl->get_HydrationPolicyModifier(This,value) )
    ( (This)->lpVtbl->put_HydrationPolicyModifier(This,value) )
    ( (This)->lpVtbl->get_PopulationPolicy(This,value) )
    ( (This)->lpVtbl->put_PopulationPolicy(This,value) )
    ( (This)->lpVtbl->get_InSyncPolicy(This,value) )
    ( (This)->lpVtbl->put_InSyncPolicy(This,value) )
    ( (This)->lpVtbl->get_HardlinkPolicy(This,value) )
    ( (This)->lpVtbl->put_HardlinkPolicy(This,value) )
    ( (This)->lpVtbl->get_ShowSiblingsAsGroup(This,value) )
    ( (This)->lpVtbl->put_ShowSiblingsAsGroup(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->put_Version(This,value) )
    ( (This)->lpVtbl->get_ProtectionMode(This,value) )
    ( (This)->lpVtbl->put_ProtectionMode(This,value) )
    ( (This)->lpVtbl->get_AllowPinning(This,value) )
    ( (This)->lpVtbl->put_AllowPinning(This,value) )
    ( (This)->lpVtbl->get_StorageProviderItemPropertyDefinitions(This,value) )
    ( (This)->lpVtbl->get_RecycleBinUri(This,value) )
    ( (This)->lpVtbl->put_RecycleBinUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootInfo2[] = L"Windows.Storage.Provider.IStorageProviderSyncRootInfo2";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProviderId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2 * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2Vtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->put_ProviderId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics[] = L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * syncRootInformation
        );
    HRESULT ( STDMETHODCALLTYPE *Unregister )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                  __RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncRootInformationForFolder )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncRootInformationForId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentSyncRoots )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Register(This,syncRootInformation) )
    ( (This)->lpVtbl->Unregister(This,id) )
    ( (This)->lpVtbl->GetSyncRootInformationForFolder(This,folder,result) )
    ( (This)->lpVtbl->GetSyncRootInformationForId(This,id,result) )
    ( (This)->lpVtbl->GetCurrentSyncRoots(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderUriSource[] = L"Windows.Storage.Provider.IStorageProviderUriSource";
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPathForContentUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
                  __RPC__in HSTRING contentUri,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetPathForContentUriResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentInfoForPath )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource * This,
                  __RPC__in HSTRING path,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderGetContentInfoForPathResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSourceVtbl;
interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPathForContentUri(This,contentUri,result) )
    ( (This)->lpVtbl->GetContentInfoForPath(This,path,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderUriSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdater[] = L"Windows.Storage.Provider.CachedFileUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdaterUI[] = L"Windows.Storage.Provider.CachedFileUpdaterUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequest[] = L"Windows.Storage.Provider.FileUpdateRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestDeferral[] = L"Windows.Storage.Provider.FileUpdateRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.FileUpdateRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderGetContentInfoForPathResult[] = L"Windows.Storage.Provider.StorageProviderGetContentInfoForPathResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderGetPathForContentUriResult[] = L"Windows.Storage.Provider.StorageProviderGetPathForContentUriResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperties[] = L"Windows.Storage.Provider.StorageProviderItemProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperty[] = L"Windows.Storage.Provider.StorageProviderItemProperty";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.StorageProviderSyncRootInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootManager[] = L"Windows.Storage.Provider.StorageProviderSyncRootManager";
       
       
#pragma clang diagnostic pop

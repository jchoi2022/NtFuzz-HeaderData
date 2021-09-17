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
#include "Windows.Gaming.XboxLive.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult;
typedef interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics;
typedef interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
typedef struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;
interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
typedef struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;
interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
typedef struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;
interface __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
typedef struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;
interface __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo;
typedef struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                       __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl;
interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo;
typedef struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                       __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl;
interface __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * This, __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___z__zint64 __FIAsyncOperationCompletedHandler_1___z__zint64;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___z__zint64;
typedef interface __FIAsyncOperation_1___z__zint64 __FIAsyncOperation_1___z__zint64;
typedef struct __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___z__zint64 * This, __RPC__in_opt __FIAsyncOperation_1___z__zint64 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl;
interface __FIAsyncOperationCompletedHandler_1___z__zint64
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___z__zint64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___z__zint64 __FIAsyncOperation_1___z__zint64;
EXTERN_C const IID IID___FIAsyncOperation_1___z__zint64;
typedef struct __FIAsyncOperation_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___z__zint64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___z__zint64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___z__zint64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___z__zint64 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___z__zint64 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___z__zint64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___z__zint64 * This, __RPC__out __int64 *results);
    END_INTERFACE
} __FIAsyncOperation_1___z__zint64Vtbl;
interface __FIAsyncOperation_1___z__zint64
{
    CONST_VTBL struct __FIAsyncOperation_1___z__zint64Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus;
enum __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus
{
    GameSaveErrorStatus_Ok = 0,
    GameSaveErrorStatus_Abort = -2147467260,
    GameSaveErrorStatus_InvalidContainerName = -2138898431,
    GameSaveErrorStatus_NoAccess = -2138898430,
    GameSaveErrorStatus_OutOfLocalStorage = -2138898429,
    GameSaveErrorStatus_UserCanceled = -2138898428,
    GameSaveErrorStatus_UpdateTooBig = -2138898427,
    GameSaveErrorStatus_QuotaExceeded = -2138898426,
    GameSaveErrorStatus_ProvidedBufferTooSmall = -2138898425,
    GameSaveErrorStatus_BlobNotFound = -2138898424,
    GameSaveErrorStatus_NoXboxLiveInfo = -2138898423,
    GameSaveErrorStatus_ContainerNotInSync = -2138898422,
    GameSaveErrorStatus_ContainerSyncFailed = -2138898421,
    GameSaveErrorStatus_UserHasNoXboxLiveInfo = -2138898420,
    GameSaveErrorStatus_ObjectExpired = -2138898419,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobGetResult";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobGetResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfo";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoGetResult";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoGetResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveBlobInfoQuery";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *GetBlobInfoAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetBlobInfoWithIndexAndMaxAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                  UINT32 startIndex,
                  UINT32 maxNumberOfItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobInfoGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetBlobInfoAsync(This,operation) )
    ( (This)->lpVtbl->GetBlobInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) )
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainer";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Provider )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SubmitUpdatesAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                  __RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToWrite,
                  __RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReadAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                  __RPC__in_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CIBuffer * blobsToRead,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * blobsToRead,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveBlobGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SubmitPropertySetUpdatesAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * blobsToWrite,
                  __RPC__in_opt __FIIterable_1_HSTRING * blobsToDelete,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBlobInfoQuery )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * This,
                  __RPC__in HSTRING blobNamePrefix,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveBlobInfoQuery * * query
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Provider(This,value) )
    ( (This)->lpVtbl->SubmitUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) )
    ( (This)->lpVtbl->ReadAsync(This,blobsToRead,action) )
    ( (This)->lpVtbl->GetAsync(This,blobsToRead,operation) )
    ( (This)->lpVtbl->SubmitPropertySetUpdatesAsync(This,blobsToWrite,blobsToDelete,displayName,operation) )
    ( (This)->lpVtbl->CreateBlobInfoQuery(This,blobNamePrefix,query) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfo";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalSize )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastModifiedTime )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeedsSync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_TotalSize(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_LastModifiedTime(This,value) )
    ( (This)->lpVtbl->get_NeedsSync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoGetResult";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoGetResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveContainerInfoQuery";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *GetContainerInfoAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetContainerInfoWithIndexAndMaxAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                  UINT32 startIndex,
                  UINT32 maxNumberOfItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveContainerInfoGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetContainerInfoAsync(This,operation) )
    ( (This)->lpVtbl->GetContainerInfoWithIndexAndMaxAsync(This,startIndex,maxNumberOfItems,operation) )
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveOperationResult";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveOperationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProvider";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateContainer )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainer * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteContainerAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveOperationResult * * action
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateContainerInfoQuery )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * * query
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateContainerInfoQueryWithName )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                  __RPC__in HSTRING containerNamePrefix,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveContainerInfoQuery * * query
        );
    HRESULT ( STDMETHODCALLTYPE *GetRemainingBytesInQuotaAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___z__zint64 * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainersChangedSinceLastSync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->CreateContainer(This,name,result) )
    ( (This)->lpVtbl->DeleteContainerAsync(This,name,action) )
    ( (This)->lpVtbl->CreateContainerInfoQuery(This,query) )
    ( (This)->lpVtbl->CreateContainerInfoQueryWithName(This,containerNamePrefix,query) )
    ( (This)->lpVtbl->GetRemainingBytesInQuotaAsync(This,operation) )
    ( (This)->lpVtbl->get_ContainersChangedSinceLastSync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderGetResult";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CGameSaveErrorStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderGetResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_XboxLive_Storage_IGameSaveProviderStatics[] = L"Windows.Gaming.XboxLive.Storage.IGameSaveProviderStatics";
typedef struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUserAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING serviceConfigId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncOnDemandForUserAsync )(
        __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING serviceConfigId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CXboxLive__CStorage__CGameSaveProviderGetResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUserAsync(This,user,serviceConfigId,operation) )
    ( (This)->lpVtbl->GetSyncOnDemandForUserAsync(This,user,serviceConfigId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CXboxLive_CStorage_CIGameSaveProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobGetResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoGetResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveBlobInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveBlobInfoQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainer[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfo[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoGetResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveContainerInfoQuery[] = L"Windows.Gaming.XboxLive.Storage.GameSaveContainerInfoQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveOperationResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveOperationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProvider[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_XboxLive_Storage_GameSaveProviderGetResult[] = L"Windows.Gaming.XboxLive.Storage.GameSaveProviderGetResult";
       
       
#pragma clang diagnostic pop

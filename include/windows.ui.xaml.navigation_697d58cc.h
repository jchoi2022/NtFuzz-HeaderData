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
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Interop.h"
#include "Windows.UI.Xaml.Media.Animation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                       __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry;
typedef struct __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntry
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CNavigation__CPageStackEntryVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo;
typedef enum __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationCacheMode __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationCacheMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationMode __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationMode;
enum __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationCacheMode
{
    NavigationCacheMode_Disabled = 0,
    NavigationCacheMode_Required = 1,
    NavigationCacheMode_Enabled = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationMode
{
    NavigationMode_New = 0,
    NavigationMode_Back = 1,
    NavigationMode_Forward = 2,
    NavigationMode_Refresh = 3,
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CILoadCompletedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationStoppedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_IFrameNavigationOptions[] = L"Windows.UI.Xaml.Navigation.IFrameNavigationOptions";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsNavigationStackEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsNavigationStackEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransitionInfoOverride )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransitionInfoOverride )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsNavigationStackEnabled(This,value) )
    ( (This)->lpVtbl->put_IsNavigationStackEnabled(This,value) )
    ( (This)->lpVtbl->get_TransitionInfoOverride(This,value) )
    ( (This)->lpVtbl->put_TransitionInfoOverride(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_IFrameNavigationOptionsFactory[] = L"Windows.UI.Xaml.Navigation.IFrameNavigationOptionsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptions * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CIFrameNavigationOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs[] = L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NavigationMode )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourcePageType )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->get_NavigationMode(This,value) )
    ( (This)->lpVtbl->get_SourcePageType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2[] = L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameter )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NavigationTransitionInfo )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameter(This,value) )
    ( (This)->lpVtbl->get_NavigationTransitionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigatingCancelEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_INavigationEventArgs[] = L"Windows.UI.Xaml.Navigation.INavigationEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameter )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourcePageType )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NavigationMode )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CNavigation_CNavigationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->get_Parameter(This,value) )
    ( (This)->lpVtbl->get_SourcePageType(This,value) )
    ( (This)->lpVtbl->get_NavigationMode(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_INavigationEventArgs2[] = L"Windows.UI.Xaml.Navigation.INavigationEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NavigationTransitionInfo )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NavigationTransitionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs[] = L"Windows.UI.Xaml.Navigation.INavigationFailedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Exception )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourcePageType )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Exception(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_SourcePageType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CINavigationFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_IPageStackEntry[] = L"Windows.UI.Xaml.Navigation.IPageStackEntry";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourcePageType )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameter )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NavigationTransitionInfo )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourcePageType(This,value) )
    ( (This)->lpVtbl->get_Parameter(This,value) )
    ( (This)->lpVtbl->get_NavigationTransitionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_IPageStackEntryFactory[] = L"Windows.UI.Xaml.Navigation.IPageStackEntryFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName sourcePageType,
                  __RPC__in_opt IInspectable * parameter,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CAnimation_CINavigationTransitionInfo * navigationTransitionInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntry * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,sourcePageType,parameter,navigationTransitionInfo,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Navigation_IPageStackEntryStatics[] = L"Windows.UI.Xaml.Navigation.IPageStackEntryStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourcePageTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourcePageTypeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CNavigation_CIPageStackEntryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Navigation_FrameNavigationOptions[] = L"Windows.UI.Xaml.Navigation.FrameNavigationOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Navigation_NavigatingCancelEventArgs[] = L"Windows.UI.Xaml.Navigation.NavigatingCancelEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Navigation_NavigationEventArgs[] = L"Windows.UI.Xaml.Navigation.NavigationEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Navigation_NavigationFailedEventArgs[] = L"Windows.UI.Xaml.Navigation.NavigationFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Navigation_PageStackEntry[] = L"Windows.UI.Xaml.Navigation.PageStackEntry";
       
       
#pragma clang diagnostic pop

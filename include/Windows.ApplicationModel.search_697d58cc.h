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
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __FIIterator_1_Windows__CStorage__CStorageFolder __FIIterator_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFolder __FIIterable_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFolder **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFolder __FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       __x_ABI_CWindows_CStorage_CIStorageFolder * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CStorageFolder __FIVector_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStorageFolder;
typedef struct __FIVector_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStorageFolder **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This, __RPC__in __x_ABI_CWindows_CStorage_CIStorageFolder * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CIStorageFolder * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIVector_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ILocalContentSuggestionSettings[] = L"Windows.ApplicationModel.Search.ILocalContentSuggestionSettings";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Locations )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AqsFilter )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AqsFilter )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PropertiesToMatch )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettingsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->get_Locations(This,value) )
    ( (This)->lpVtbl->put_AqsFilter(This,value) )
    ( (This)->lpVtbl->get_AqsFilter(This,value) )
    ( (This)->lpVtbl->get_PropertiesToMatch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPane[] = L"Windows.ApplicationModel.Search.ISearchPane";
typedef struct
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_SearchHistoryEnabled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  boolean value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SearchHistoryEnabled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_SearchHistoryContext )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SearchHistoryContext )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_PlaceholderText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_PlaceholderText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_QueryText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneVisibilityChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  EventRegistrationToken token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_QueryChanged )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQueryChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_QueryChanged )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  EventRegistrationToken token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_SuggestionsRequested )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneSuggestionsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SuggestionsRequested )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  EventRegistrationToken token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_QuerySubmitted )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneQuerySubmittedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_QuerySubmitted )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  EventRegistrationToken token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *add_ResultSuggestionChosen )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CSearch__CSearchPane_Windows__CApplicationModel__CSearch__CSearchPaneResultSuggestionChosenEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ResultSuggestionChosen )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  EventRegistrationToken token
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *SetLocalContentSuggestionSettings )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSearch_CILocalContentSuggestionSettings * settings
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *ShowOverloadDefault )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                                HRESULT ( STDMETHODCALLTYPE *ShowOverloadWithQuery )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in HSTRING query
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *put_ShowOnKeyboardInput )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  boolean value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_ShowOnKeyboardInput )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *TrySetQueryText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * This,
                  __RPC__in HSTRING query,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->put_SearchHistoryEnabled(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SearchHistoryEnabled(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->put_SearchHistoryContext(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SearchHistoryContext(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->put_PlaceholderText(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_PlaceholderText(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_QueryText(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Language(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Visible(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_VisibilityChanged(This,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_QueryChanged(This,handler,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_QueryChanged(This,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_SuggestionsRequested(This,handler,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_SuggestionsRequested(This,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_QuerySubmitted(This,handler,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_QuerySubmitted(This,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->add_ResultSuggestionChosen(This,handler,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->remove_ResultSuggestionChosen(This,token) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->SetLocalContentSuggestionSettings(This,settings) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->ShowOverloadDefault(This) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->ShowOverloadWithQuery(This,query) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->put_ShowOnKeyboardInput(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_ShowOnKeyboardInput(This,value) )
DEPRECATED("ISearchPane may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->TrySetQueryText(This,query,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneQueryChangedEventArgs[] = L"Windows.ApplicationModel.Search.ISearchPaneQueryChangedEventArgs";
typedef struct
DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_QueryText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_LinguisticDetails )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_QueryText(This,value) )
DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Language(This,value) )
DEPRECATED("ISearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_LinguisticDetails(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneQueryLinguisticDetails[] = L"Windows.ApplicationModel.Search.ISearchPaneQueryLinguisticDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_QueryTextAlternatives )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueryTextCompositionStart )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueryTextCompositionLength )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_QueryTextAlternatives(This,value) )
    ( (This)->lpVtbl->get_QueryTextCompositionStart(This,value) )
    ( (This)->lpVtbl->get_QueryTextCompositionLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgs[] = L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgs";
typedef struct
DEPRECATED("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_QueryText )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_QueryText(This,value) )
DEPRECATED("ISearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Language(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails[] = L"Windows.ApplicationModel.Search.ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails";
typedef struct
DEPRECATED("ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_LinguisticDetails )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQueryLinguisticDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneQuerySubmittedEventArgsWithLinguisticDetails may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_LinguisticDetails(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneQuerySubmittedEventArgsWithLinguisticDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneResultSuggestionChosenEventArgs[] = L"Windows.ApplicationModel.Search.ISearchPaneResultSuggestionChosenEventArgs";
typedef struct
DEPRECATED("ISearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Tag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneResultSuggestionChosenEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneStatics[] = L"Windows.ApplicationModel.Search.ISearchPaneStatics";
typedef struct
DEPRECATED("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPane * * searchPane
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneStatics may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetForCurrentView(This,searchPane) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneStaticsWithHideThisApplication[] = L"Windows.ApplicationModel.Search.ISearchPaneStaticsWithHideThisApplication";
typedef struct
DEPRECATED("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplicationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *HideThisApplication )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplicationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplicationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneStaticsWithHideThisApplication may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->HideThisApplication(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneStaticsWithHideThisApplication;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequest[] = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequest";
typedef struct
DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_SearchSuggestionCollection )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * * collection
        );
    DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_SearchSuggestionCollection(This,collection) )
DEPRECATED("ISearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestDeferral[] = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestDeferral";
typedef struct
DEPRECATED("ISearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")
                      HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneSuggestionsRequestedEventArgs[] = L"Windows.ApplicationModel.Search.ISearchPaneSuggestionsRequestedEventArgs";
typedef struct
DEPRECATED("ISearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneSuggestionsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchPaneVisibilityChangedEventArgs[] = L"Windows.ApplicationModel.Search.ISearchPaneVisibilityChangedEventArgs";
typedef struct
DEPRECATED("ISearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")
__x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")
                               HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")
    ( (This)->lpVtbl->get_Visible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchPaneVisibilityChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetails[] = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_QueryTextAlternatives )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueryTextCompositionStart )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueryTextCompositionLength )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_QueryTextAlternatives(This,value) )
    ( (This)->lpVtbl->get_QueryTextCompositionStart(This,value) )
    ( (This)->lpVtbl->get_QueryTextCompositionLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchQueryLinguisticDetailsFactory[] = L"Windows.ApplicationModel.Search.ISearchQueryLinguisticDetailsFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * queryTextAlternatives,
                  UINT32 queryTextCompositionStart,
                  UINT32 queryTextCompositionLength,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,queryTextAlternatives,queryTextCompositionStart,queryTextCompositionLength,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchQueryLinguisticDetailsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchSuggestionCollection[] = L"Windows.ApplicationModel.Search.ISearchSuggestionCollection";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *AppendQuerySuggestion )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                  __RPC__in HSTRING text
        );
    HRESULT ( STDMETHODCALLTYPE *AppendQuerySuggestions )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * suggestions
        );
    HRESULT ( STDMETHODCALLTYPE *AppendResultSuggestion )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                  __RPC__in HSTRING text,
                  __RPC__in HSTRING detailText,
                  __RPC__in HSTRING tag,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * image,
                  __RPC__in HSTRING imageAlternateText
        );
    HRESULT ( STDMETHODCALLTYPE *AppendSearchSeparator )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * This,
                  __RPC__in HSTRING label
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollectionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->AppendQuerySuggestion(This,text) )
    ( (This)->lpVtbl->AppendQuerySuggestions(This,suggestions) )
    ( (This)->lpVtbl->AppendResultSuggestion(This,text,detailText,tag,image,imageAlternateText) )
    ( (This)->lpVtbl->AppendSearchSeparator(This,label) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchSuggestionsRequest[] = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SearchSuggestionCollection )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionCollection * * collection
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->get_SearchSuggestionCollection(This,collection) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Search_ISearchSuggestionsRequestDeferral[] = L"Windows.ApplicationModel.Search.ISearchSuggestionsRequestDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSearch_CISearchSuggestionsRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_LocalContentSuggestionSettings[] = L"Windows.ApplicationModel.Search.LocalContentSuggestionSettings";
DEPRECATED("SearchPane may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPane[] = L"Windows.ApplicationModel.Search.SearchPane";
DEPRECATED("SearchPaneQueryChangedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneQueryChangedEventArgs[] = L"Windows.ApplicationModel.Search.SearchPaneQueryChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneQueryLinguisticDetails[] = L"Windows.ApplicationModel.Search.SearchPaneQueryLinguisticDetails";
DEPRECATED("SearchPaneQuerySubmittedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneQuerySubmittedEventArgs[] = L"Windows.ApplicationModel.Search.SearchPaneQuerySubmittedEventArgs";
DEPRECATED("SearchPaneResultSuggestionChosenEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneResultSuggestionChosenEventArgs[] = L"Windows.ApplicationModel.Search.SearchPaneResultSuggestionChosenEventArgs";
DEPRECATED("SearchPaneSuggestionsRequest may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneSuggestionsRequest[] = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequest";
DEPRECATED("SearchPaneSuggestionsRequestDeferral may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneSuggestionsRequestDeferral[] = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestDeferral";
DEPRECATED("SearchPaneSuggestionsRequestedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneSuggestionsRequestedEventArgs[] = L"Windows.ApplicationModel.Search.SearchPaneSuggestionsRequestedEventArgs";
DEPRECATED("SearchPaneVisibilityChangedEventArgs may be altered or unavailable for releases after Windows 10.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchPaneVisibilityChangedEventArgs[] = L"Windows.ApplicationModel.Search.SearchPaneVisibilityChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchQueryLinguisticDetails[] = L"Windows.ApplicationModel.Search.SearchQueryLinguisticDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchSuggestionCollection[] = L"Windows.ApplicationModel.Search.SearchSuggestionCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchSuggestionsRequest[] = L"Windows.ApplicationModel.Search.SearchSuggestionsRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Search_SearchSuggestionsRequestDeferral[] = L"Windows.ApplicationModel.Search.SearchSuggestionsRequestDeferral";
       
       
#pragma clang diagnostic pop

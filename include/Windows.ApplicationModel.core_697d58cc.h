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
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs;
typedef interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
typedef struct __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
typedef struct __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CCore__CCoreApplicationView **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationView
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                       __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                       __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationViewVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReasonVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs;
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIBackgroundActivatedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
typedef interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;
typedef struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl;
interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIGetActivationFactory __x_ABI_CWindows_CFoundation_CIGetActivationFactory;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;
typedef enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason;
enum __x_ABI_CWindows_CApplicationModel_CCore_CAppRestartFailureReason
{
    AppRestartFailureReason_RestartPending = 0,
    AppRestartFailureReason_NotInForeground = 1,
    AppRestartFailureReason_InvalidUser = 2,
    AppRestartFailureReason_Other = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IAppListEntry[] = L"Windows.ApplicationModel.Core.IAppListEntry";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayInfo )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchAsync )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayInfo(This,value) )
    ( (This)->lpVtbl->LaunchAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IAppListEntry2[] = L"Windows.ApplicationModel.Core.IAppListEntry2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IAppListEntry3[] = L"Windows.ApplicationModel.Core.IAppListEntry3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LaunchForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchForUserAsync(This,user,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplication[] = L"Windows.ApplicationModel.Core.ICoreApplication";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Suspending )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Suspending )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Resuming )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Resuming )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Run )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * viewSource
        );
    HRESULT ( STDMETHODCALLTYPE *RunWithActivationFactories )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIGetActivationFactory * activationFactoryCallback
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->add_Suspending(This,handler,token) )
    ( (This)->lpVtbl->remove_Suspending(This,token) )
    ( (This)->lpVtbl->add_Resuming(This,handler,token) )
    ( (This)->lpVtbl->remove_Resuming(This,token) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->GetCurrentView(This,value) )
    ( (This)->lpVtbl->Run(This,viewSource) )
    ( (This)->lpVtbl->RunWithActivationFactories(This,activationFactoryCallback) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplication2[] = L"Windows.ApplicationModel.Core.ICoreApplication2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BackgroundActivated )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CApplicationModel__CActivation__CBackgroundActivatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BackgroundActivated )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LeavingBackground )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LeavingBackground )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnteredBackground )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnteredBackground )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *EnablePrelaunch )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BackgroundActivated(This,handler,token) )
    ( (This)->lpVtbl->remove_BackgroundActivated(This,token) )
    ( (This)->lpVtbl->add_LeavingBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_LeavingBackground(This,token) )
    ( (This)->lpVtbl->add_EnteredBackground(This,handler,token) )
    ( (This)->lpVtbl->remove_EnteredBackground(This,token) )
    ( (This)->lpVtbl->EnablePrelaunch(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplication3[] = L"Windows.ApplicationModel.Core.ICoreApplication3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestRestartAsync )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
                  __RPC__in HSTRING launchArguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRestartForUserAsync )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING launchArguments,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CCore__CAppRestartFailureReason * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestRestartAsync(This,launchArguments,operation) )
    ( (This)->lpVtbl->RequestRestartForUserAsync(This,user,launchArguments,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplication3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationExit[] = L"Windows.ApplicationModel.Core.ICoreApplicationExit";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Exit )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Exiting )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Exiting )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExitVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExitVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Exit(This) )
    ( (This)->lpVtbl->add_Exiting(This,handler,token) )
    ( (This)->lpVtbl->remove_Exiting(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationExit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError[] = L"Windows.ApplicationModel.Core.ICoreApplicationUnhandledError";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_UnhandledErrorDetected )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CApplicationModel__CCore__CUnhandledErrorDetectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnhandledErrorDetected )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledErrorVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_UnhandledErrorDetected(This,handler,token) )
    ( (This)->lpVtbl->remove_UnhandledErrorDetected(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUnhandledError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationUseCount[] = L"Windows.ApplicationModel.Core.ICoreApplicationUseCount";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IncrementApplicationUseCount )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This
        );
    HRESULT ( STDMETHODCALLTYPE *DecrementApplicationUseCount )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCountVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IncrementApplicationUseCount(This) )
    ( (This)->lpVtbl->DecrementApplicationUseCount(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationUseCount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationView[] = L"Windows.ApplicationModel.Core.ICoreApplicationView";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoreWindow )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CActivation__CIActivatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMain )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHosted )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoreWindow(This,value) )
    ( (This)->lpVtbl->add_Activated(This,handler,token) )
    ( (This)->lpVtbl->remove_Activated(This,token) )
    ( (This)->lpVtbl->get_IsMain(This,value) )
    ( (This)->lpVtbl->get_IsHosted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationView2[] = L"Windows.ApplicationModel.Core.ICoreApplicationView2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationView3[] = L"Windows.ApplicationModel.Core.ICoreApplicationView3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsComponent )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleBar )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HostedViewClosing )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationView_Windows__CApplicationModel__CCore__CHostedViewClosingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HostedViewClosing )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsComponent(This,value) )
    ( (This)->lpVtbl->get_TitleBar(This,value) )
    ( (This)->lpVtbl->add_HostedViewClosing(This,handler,token) )
    ( (This)->lpVtbl->remove_HostedViewClosing(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationView5[] = L"Windows.ApplicationModel.Core.ICoreApplicationView5";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationView6[] = L"Windows.ApplicationModel.Core.ICoreApplicationView6";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar[] = L"Windows.ApplicationModel.Core.ICoreApplicationViewTitleBar";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ExtendViewIntoTitleBar )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendViewIntoTitleBar )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemOverlayLeftInset )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemOverlayRightInset )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                           __RPC__out DOUBLE * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LayoutMetricsChanged )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LayoutMetricsChanged )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsVisibleChanged )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CCore__CCoreApplicationViewTitleBar_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsVisibleChanged )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBarVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ExtendViewIntoTitleBar(This,value) )
    ( (This)->lpVtbl->get_ExtendViewIntoTitleBar(This,value) )
    ( (This)->lpVtbl->get_SystemOverlayLeftInset(This,value) )
    ( (This)->lpVtbl->get_SystemOverlayRightInset(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->add_LayoutMetricsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_LayoutMetricsChanged(This,token) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->add_IsVisibleChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsVisibleChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationViewTitleBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreImmersiveApplication[] = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplicationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Views )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CCore__CCoreApplicationView * * value
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateNewView )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                  __RPC__in HSTRING runtimeType,
                  __RPC__in HSTRING entryPoint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * * view
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MainView )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplicationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplicationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Views(This,value) )
    ( (This)->lpVtbl->CreateNewView(This,runtimeType,entryPoint,view) )
    ( (This)->lpVtbl->get_MainView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreImmersiveApplication2[] = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication2";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateNewViewFromMainView )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * * view
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateNewViewFromMainView(This,view) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_ICoreImmersiveApplication3[] = L"Windows.ApplicationModel.Core.ICoreImmersiveApplication3";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateNewViewWithViewSource )(
        __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * viewSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * * view
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateNewViewWithViewSource(This,viewSource,view) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CICoreImmersiveApplication3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IFrameworkView[] = L"Windows.ApplicationModel.Core.IFrameworkView";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Initialize )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * applicationView
        );
    HRESULT ( STDMETHODCALLTYPE *SetWindow )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window
        );
    HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This,
                  __RPC__in HSTRING entryPoint
        );
    HRESULT ( STDMETHODCALLTYPE *Run )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This
        );
    HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Initialize(This,applicationView) )
    ( (This)->lpVtbl->SetWindow(This,window) )
    ( (This)->lpVtbl->Load(This,entryPoint) )
    ( (This)->lpVtbl->Run(This) )
    ( (This)->lpVtbl->Uninitialize(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IFrameworkViewSource[] = L"Windows.ApplicationModel.Core.IFrameworkViewSource";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateView )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkView * * viewProvider
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSourceVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateView(This,viewProvider) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIFrameworkViewSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs[] = L"Windows.ApplicationModel.Core.IHostedViewClosingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIHostedViewClosingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IUnhandledError[] = L"Windows.ApplicationModel.Core.IUnhandledError";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Propagate )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->Propagate(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs[] = L"Windows.ApplicationModel.Core.IUnhandledErrorDetectedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnhandledError )(
        __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledError * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnhandledError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCore_CIUnhandledErrorDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_AppListEntry[] = L"Windows.ApplicationModel.Core.AppListEntry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_CoreApplication[] = L"Windows.ApplicationModel.Core.CoreApplication";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_CoreApplicationView[] = L"Windows.ApplicationModel.Core.CoreApplicationView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_CoreApplicationViewTitleBar[] = L"Windows.ApplicationModel.Core.CoreApplicationViewTitleBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_HostedViewClosingEventArgs[] = L"Windows.ApplicationModel.Core.HostedViewClosingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_UnhandledError[] = L"Windows.ApplicationModel.Core.UnhandledError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Core_UnhandledErrorDetectedEventArgs[] = L"Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs";
       
       
#pragma clang diagnostic pop

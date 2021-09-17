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
#include "Windows.Globalization.h"
#include "Windows.UI.Text.h"
#include "Windows.UI.ViewManagement.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
typedef struct __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;
interface __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
typedef struct __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;
interface __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;
typedef struct __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                       __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;
interface __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
typedef interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType __FIReference_1_Windows__CUI__CViewManagement__CUIElementType;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CViewManagement__CUIElementType;
typedef struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__out enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl;
interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CUI_CText_CUnderlineType;
typedef interface __FIReference_1_Windows__CUI__CText__CUnderlineType __FIReference_1_Windows__CUI__CText__CUnderlineType;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CText__CUnderlineType;
typedef struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, __RPC__out enum __x_ABI_CWindows_CUI_CText_CUnderlineType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl;
interface __FIReference_1_Windows__CUI__CText__CUnderlineType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef enum __x_ABI_CWindows_CUI_CText_CUnderlineType __x_ABI_CWindows_CUI_CText_CUnderlineType;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult;
typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult;
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange;
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason
{
    CoreTextFormatUpdatingReason_None = 0,
    CoreTextFormatUpdatingReason_CompositionUnconverted = 1,
    CoreTextFormatUpdatingReason_CompositionConverted = 2,
    CoreTextFormatUpdatingReason_CompositionTargetUnconverted = 3,
    CoreTextFormatUpdatingReason_CompositionTargetConverted = 4,
};
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult
{
    CoreTextFormatUpdatingResult_Succeeded = 0,
    CoreTextFormatUpdatingResult_Failed = 1,
};
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy
{
    CoreTextInputPaneDisplayPolicy_Automatic = 0,
    CoreTextInputPaneDisplayPolicy_Manual = 1,
};
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope
{
    CoreTextInputScope_Default = 0,
    CoreTextInputScope_Url = 1,
    CoreTextInputScope_FilePath = 2,
    CoreTextInputScope_FileName = 3,
    CoreTextInputScope_EmailUserName = 4,
    CoreTextInputScope_EmailAddress = 5,
    CoreTextInputScope_UserName = 6,
    CoreTextInputScope_PersonalFullName = 7,
    CoreTextInputScope_PersonalNamePrefix = 8,
    CoreTextInputScope_PersonalGivenName = 9,
    CoreTextInputScope_PersonalMiddleName = 10,
    CoreTextInputScope_PersonalSurname = 11,
    CoreTextInputScope_PersonalNameSuffix = 12,
    CoreTextInputScope_Address = 13,
    CoreTextInputScope_AddressPostalCode = 14,
    CoreTextInputScope_AddressStreet = 15,
    CoreTextInputScope_AddressStateOrProvince = 16,
    CoreTextInputScope_AddressCity = 17,
    CoreTextInputScope_AddressCountryName = 18,
    CoreTextInputScope_AddressCountryShortName = 19,
    CoreTextInputScope_CurrencyAmountAndSymbol = 20,
    CoreTextInputScope_CurrencyAmount = 21,
    CoreTextInputScope_Date = 22,
    CoreTextInputScope_DateMonth = 23,
    CoreTextInputScope_DateDay = 24,
    CoreTextInputScope_DateYear = 25,
    CoreTextInputScope_DateMonthName = 26,
    CoreTextInputScope_DateDayName = 27,
    CoreTextInputScope_Number = 29,
    CoreTextInputScope_SingleCharacter = 30,
    CoreTextInputScope_Password = 31,
    CoreTextInputScope_TelephoneNumber = 32,
    CoreTextInputScope_TelephoneCountryCode = 33,
    CoreTextInputScope_TelephoneAreaCode = 34,
    CoreTextInputScope_TelephoneLocalNumber = 35,
    CoreTextInputScope_Time = 36,
    CoreTextInputScope_TimeHour = 37,
    CoreTextInputScope_TimeMinuteOrSecond = 38,
    CoreTextInputScope_NumberFullWidth = 39,
    CoreTextInputScope_AlphanumericHalfWidth = 40,
    CoreTextInputScope_AlphanumericFullWidth = 41,
    CoreTextInputScope_CurrencyChinese = 42,
    CoreTextInputScope_Bopomofo = 43,
    CoreTextInputScope_Hiragana = 44,
    CoreTextInputScope_KatakanaHalfWidth = 45,
    CoreTextInputScope_KatakanaFullWidth = 46,
    CoreTextInputScope_Hanja = 47,
    CoreTextInputScope_HangulHalfWidth = 48,
    CoreTextInputScope_HangulFullWidth = 49,
    CoreTextInputScope_Search = 50,
    CoreTextInputScope_Formula = 51,
    CoreTextInputScope_SearchIncremental = 52,
    CoreTextInputScope_ChineseHalfWidth = 53,
    CoreTextInputScope_ChineseFullWidth = 54,
    CoreTextInputScope_NativeScript = 55,
    CoreTextInputScope_Text = 57,
    CoreTextInputScope_Chat = 58,
    CoreTextInputScope_NameOrPhoneNumber = 59,
    CoreTextInputScope_EmailUserNameOrAddress = 60,
    CoreTextInputScope_Private = 61,
    CoreTextInputScope_Maps = 62,
    CoreTextInputScope_PasswordNumeric = 63,
    CoreTextInputScope_FormulaNumber = 67,
    CoreTextInputScope_ChatWithoutEmoji = 68,
    CoreTextInputScope_Digits = 28,
    CoreTextInputScope_PinNumeric = 64,
    CoreTextInputScope_PinAlphanumeric = 65,
};
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult
{
    CoreTextSelectionUpdatingResult_Succeeded = 0,
    CoreTextSelectionUpdatingResult_Failed = 1,
};
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult
{
    CoreTextTextUpdatingResult_Succeeded = 0,
    CoreTextTextUpdatingResult_Failed = 1,
};
struct __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange
{
    INT32 StartCaretPosition;
    INT32 EndCaretPosition;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompositionSegments )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->get_CompositionSegments(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionSegment[] = L"Windows.UI.Text.Core.ICoreTextCompositionSegment";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreconversionString )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreconversionString(This,value) )
    ( (This)->lpVtbl->get_Range(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext[] = L"Windows.UI.Text.Core.ICoreTextEditContext";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputScope )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputScope )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsReadOnly )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputPaneDisplayPolicy )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputPaneDisplayPolicy )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TextRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TextRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LayoutRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LayoutRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TextUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TextUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FormatUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FormatUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CompositionStarted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CompositionStarted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CompositionCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CompositionCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FocusRemoved )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FocusRemoved )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyFocusEnter )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyFocusLeave )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyTextChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange modifiedRange,
                  INT32 newLength,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange newSelection
        );
    HRESULT ( STDMETHODCALLTYPE *NotifySelectionChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange selection
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyLayoutChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_InputScope(This,value) )
    ( (This)->lpVtbl->put_InputScope(This,value) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->put_IsReadOnly(This,value) )
    ( (This)->lpVtbl->get_InputPaneDisplayPolicy(This,value) )
    ( (This)->lpVtbl->put_InputPaneDisplayPolicy(This,value) )
    ( (This)->lpVtbl->add_TextRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TextRequested(This,cookie) )
    ( (This)->lpVtbl->add_SelectionRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_SelectionRequested(This,cookie) )
    ( (This)->lpVtbl->add_LayoutRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_LayoutRequested(This,cookie) )
    ( (This)->lpVtbl->add_TextUpdating(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TextUpdating(This,cookie) )
    ( (This)->lpVtbl->add_SelectionUpdating(This,handler,cookie) )
    ( (This)->lpVtbl->remove_SelectionUpdating(This,cookie) )
    ( (This)->lpVtbl->add_FormatUpdating(This,handler,cookie) )
    ( (This)->lpVtbl->remove_FormatUpdating(This,cookie) )
    ( (This)->lpVtbl->add_CompositionStarted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_CompositionStarted(This,cookie) )
    ( (This)->lpVtbl->add_CompositionCompleted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_CompositionCompleted(This,cookie) )
    ( (This)->lpVtbl->add_FocusRemoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_FocusRemoved(This,cookie) )
    ( (This)->lpVtbl->NotifyFocusEnter(This) )
    ( (This)->lpVtbl->NotifyFocusLeave(This) )
    ( (This)->lpVtbl->NotifyTextChanged(This,modifiedRange,newLength,newSelection) )
    ( (This)->lpVtbl->NotifySelectionChanged(This,selection) )
    ( (This)->lpVtbl->NotifyLayoutChanged(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext2[] = L"Windows.UI.Text.Core.ICoreTextEditContext2";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_NotifyFocusLeaveCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NotifyFocusLeaveCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_NotifyFocusLeaveCompleted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_NotifyFocusLeaveCompleted(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnderlineColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnderlineType )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CText__CUnderlineType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Range(This,value) )
    ( (This)->lpVtbl->get_TextColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_UnderlineColor(This,value) )
    ( (This)->lpVtbl->get_UnderlineType(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->put_Result(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutBounds[] = L"Windows.UI.Text.Core.ICoreTextLayoutBounds";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ControlBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextBounds(This,value) )
    ( (This)->lpVtbl->put_TextBounds(This,value) )
    ( (This)->lpVtbl->get_ControlBounds(This,value) )
    ( (This)->lpVtbl->put_ControlBounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequest[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequest";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LayoutBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Range(This,value) )
    ( (This)->lpVtbl->get_LayoutBounds(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequest2[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequest2";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LayoutBoundsVisualPixels )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2Vtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LayoutBoundsVisualPixels(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequest[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequest";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Selection(This,value) )
    ( (This)->lpVtbl->put_Selection(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Selection(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->put_Result(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManager[] = L"Windows.UI.Text.Core.ICoreTextServicesManager";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputLanguage )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InputLanguageChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InputLanguageChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEditContext )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputLanguage(This,value) )
    ( (This)->lpVtbl->add_InputLanguageChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_InputLanguageChanged(This,cookie) )
    ( (This)->lpVtbl->CreateEditContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManagerStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesStatics";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HiddenCharacter )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
                           __RPC__out WCHAR * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HiddenCharacter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequest[] = L"Windows.UI.Text.Core.ICoreTextTextRequest";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Range(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewSelection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputLanguage )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                  __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Range(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->get_NewSelection(This,value) )
    ( (This)->lpVtbl->get_InputLanguage(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
    ( (This)->lpVtbl->put_Result(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionSegment[] = L"Windows.UI.Text.Core.CoreTextCompositionSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextEditContext[] = L"Windows.UI.Text.Core.CoreTextEditContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutBounds[] = L"Windows.UI.Text.Core.CoreTextLayoutBounds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequest[] = L"Windows.UI.Text.Core.CoreTextLayoutRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequest[] = L"Windows.UI.Text.Core.CoreTextSelectionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesConstants[] = L"Windows.UI.Text.Core.CoreTextServicesConstants";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesManager[] = L"Windows.UI.Text.Core.CoreTextServicesManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequest[] = L"Windows.UI.Text.Core.CoreTextTextRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs";
       
       
#pragma clang diagnostic pop

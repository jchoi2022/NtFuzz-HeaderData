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
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
typedef struct __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;
interface __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
typedef struct __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;
interface __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;
typedef struct __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                       __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;
interface __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewKind __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewKind;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewXYFocusTransferDirection __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewXYFocusTransferDirection;
enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewKind
{
    CoreInputViewKind_Default = 0,
    CoreInputViewKind_Keyboard = 1,
    CoreInputViewKind_Handwriting = 2,
    CoreInputViewKind_Emoji = 3,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind
{
    CoreInputViewOcclusionKind_Docked = 0,
    CoreInputViewOcclusionKind_Floating = 1,
    CoreInputViewOcclusionKind_Overlay = 2,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewXYFocusTransferDirection
{
    CoreInputViewXYFocusTransferDirection_Up = 0,
    CoreInputViewXYFocusTransferDirection_Right = 1,
    CoreInputViewXYFocusTransferDirection_Down = 2,
    CoreInputViewXYFocusTransferDirection_Left = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputView[] = L"Windows.UI.ViewManagement.Core.ICoreInputView";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_OcclusionsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OcclusionsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetCoreInputViewOcclusions )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryShowPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryHidePrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_OcclusionsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_OcclusionsChanged(This,token) )
    ( (This)->lpVtbl->GetCoreInputViewOcclusions(This,result) )
    ( (This)->lpVtbl->TryShowPrimaryView(This,result) )
    ( (This)->lpVtbl->TryHidePrimaryView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputView2[] = L"Windows.UI.ViewManagement.Core.ICoreInputView2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_XYFocusTransferringFromPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewTransferringXYFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_XYFocusTransferringFromPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_XYFocusTransferredToPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_XYFocusTransferredToPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryTransferXYFocusToPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2 * This,
                  __x_ABI_CWindows_CFoundation_CRect origin,
                  __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewXYFocusTransferDirection direction,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_XYFocusTransferringFromPrimaryView(This,handler,token) )
    ( (This)->lpVtbl->remove_XYFocusTransferringFromPrimaryView(This,token) )
    ( (This)->lpVtbl->add_XYFocusTransferredToPrimaryView(This,handler,token) )
    ( (This)->lpVtbl->remove_XYFocusTransferredToPrimaryView(This,token) )
    ( (This)->lpVtbl->TryTransferXYFocusToPrimaryView(This,origin,direction,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputView3[] = L"Windows.UI.ViewManagement.Core.ICoreInputView3";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryShow )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryShowWithKind )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewKind type,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryHide )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryShow(This,result) )
    ( (This)->lpVtbl->TryShowWithKind(This,type,result) )
    ( (This)->lpVtbl->TryHide(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OccludingRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OcclusionKind )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OccludingRect(This,value) )
    ( (This)->lpVtbl->get_OcclusionKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Occlusions )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Occlusions(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewStatics[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUIContext )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CIUIContext * context,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUIContext(This,context,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewTransferringXYFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Origin )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewXYFocusTransferDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransferHandled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransferHandled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeepPrimaryViewVisible )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepPrimaryViewVisible )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Origin(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_TransferHandled(This,value) )
    ( (This)->lpVtbl->get_TransferHandled(This,value) )
    ( (This)->lpVtbl->put_KeepPrimaryViewVisible(This,value) )
    ( (This)->lpVtbl->get_KeepPrimaryViewVisible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewTransferringXYFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputView[] = L"Windows.UI.ViewManagement.Core.CoreInputView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewTransferringXYFocusEventArgs[] = L"Windows.UI.ViewManagement.Core.CoreInputViewTransferringXYFocusEventArgs";
       
       
#pragma clang diagnostic pop

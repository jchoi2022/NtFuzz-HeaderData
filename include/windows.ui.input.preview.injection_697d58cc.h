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
#include "Windows.Gaming.Input.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2;
typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;
typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;
typedef struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;
typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;
typedef struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;
typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;
typedef struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons __x_ABI_CWindows_CGaming_CInput_CGamepadButtons;
typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading __x_ABI_CWindows_CGaming_CInput_CGamepadReading;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters;
typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode;
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint;
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo;
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle;
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind
{
    InjectedInputButtonChangeKind_None = 0,
    InjectedInputButtonChangeKind_FirstButtonDown = 1,
    InjectedInputButtonChangeKind_FirstButtonUp = 2,
    InjectedInputButtonChangeKind_SecondButtonDown = 3,
    InjectedInputButtonChangeKind_SecondButtonUp = 4,
    InjectedInputButtonChangeKind_ThirdButtonDown = 5,
    InjectedInputButtonChangeKind_ThirdButtonUp = 6,
    InjectedInputButtonChangeKind_FourthButtonDown = 7,
    InjectedInputButtonChangeKind_FourthButtonUp = 8,
    InjectedInputButtonChangeKind_FifthButtonDown = 9,
    InjectedInputButtonChangeKind_FifthButtonUp = 10,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions
{
    InjectedInputKeyOptions_None = 0,
    InjectedInputKeyOptions_ExtendedKey = 0x1,
    InjectedInputKeyOptions_KeyUp = 0x2,
    InjectedInputKeyOptions_ScanCode = 0x8,
    InjectedInputKeyOptions_Unicode = 0x4,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions
{
    InjectedInputMouseOptions_None = 0,
    InjectedInputMouseOptions_Move = 0x1,
    InjectedInputMouseOptions_LeftDown = 0x2,
    InjectedInputMouseOptions_LeftUp = 0x4,
    InjectedInputMouseOptions_RightDown = 0x8,
    InjectedInputMouseOptions_RightUp = 0x10,
    InjectedInputMouseOptions_MiddleDown = 0x20,
    InjectedInputMouseOptions_MiddleUp = 0x40,
    InjectedInputMouseOptions_XDown = 0x80,
    InjectedInputMouseOptions_XUp = 0x100,
    InjectedInputMouseOptions_Wheel = 0x800,
    InjectedInputMouseOptions_HWheel = 0x1000,
    InjectedInputMouseOptions_MoveNoCoalesce = 0x2000,
    InjectedInputMouseOptions_VirtualDesk = 0x4000,
    InjectedInputMouseOptions_Absolute = 0x8000,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons
{
    InjectedInputPenButtons_None = 0,
    InjectedInputPenButtons_Barrel = 0x1,
    InjectedInputPenButtons_Inverted = 0x2,
    InjectedInputPenButtons_Eraser = 0x4,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters
{
    InjectedInputPenParameters_None = 0,
    InjectedInputPenParameters_Pressure = 0x1,
    InjectedInputPenParameters_Rotation = 0x2,
    InjectedInputPenParameters_TiltX = 0x4,
    InjectedInputPenParameters_TiltY = 0x8,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions
{
    InjectedInputPointerOptions_None = 0,
    InjectedInputPointerOptions_New = 0x1,
    InjectedInputPointerOptions_InRange = 0x2,
    InjectedInputPointerOptions_InContact = 0x4,
    InjectedInputPointerOptions_FirstButton = 0x10,
    InjectedInputPointerOptions_SecondButton = 0x20,
    InjectedInputPointerOptions_Primary = 0x2000,
    InjectedInputPointerOptions_Confidence = 0x4000,
    InjectedInputPointerOptions_Canceled = 0x8000,
    InjectedInputPointerOptions_PointerDown = 0x10000,
    InjectedInputPointerOptions_Update = 0x20000,
    InjectedInputPointerOptions_PointerUp = 0x40000,
    InjectedInputPointerOptions_CaptureChanged = 0x200000,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut
{
    InjectedInputShortcut_Back = 0,
    InjectedInputShortcut_Start = 1,
    InjectedInputShortcut_Search = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters
{
    InjectedInputTouchParameters_None = 0,
    InjectedInputTouchParameters_Contact = 0x1,
    InjectedInputTouchParameters_Orientation = 0x2,
    InjectedInputTouchParameters_Pressure = 0x4,
};
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode
{
    InjectedInputVisualizationMode_None = 0,
    InjectedInputVisualizationMode_Default = 1,
    InjectedInputVisualizationMode_Indirect = 2,
};
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint
{
    INT32 PositionX;
    INT32 PositionY;
};
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo
{
    UINT32 PointerId;
    __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions PointerOptions;
    __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint PixelLocation;
    UINT32 TimeOffsetInMilliseconds;
    UINT64 PerformanceCount;
};
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle
{
    INT32 Left;
    INT32 Top;
    INT32 Bottom;
    INT32 Right;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Buttons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadButtons * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Buttons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  __x_ABI_CWindows_CGaming_CInput_CGamepadButtons value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeftTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LeftTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Buttons(This,value) )
    ( (This)->lpVtbl->put_Buttons(This,value) )
    ( (This)->lpVtbl->get_LeftThumbstickX(This,value) )
    ( (This)->lpVtbl->put_LeftThumbstickX(This,value) )
    ( (This)->lpVtbl->get_LeftThumbstickY(This,value) )
    ( (This)->lpVtbl->put_LeftThumbstickY(This,value) )
    ( (This)->lpVtbl->get_LeftTrigger(This,value) )
    ( (This)->lpVtbl->put_LeftTrigger(This,value) )
    ( (This)->lpVtbl->get_RightThumbstickX(This,value) )
    ( (This)->lpVtbl->put_RightThumbstickX(This,value) )
    ( (This)->lpVtbl->get_RightThumbstickY(This,value) )
    ( (This)->lpVtbl->put_RightThumbstickY(This,value) )
    ( (This)->lpVtbl->get_RightTrigger(This,value) )
    ( (This)->lpVtbl->put_RightTrigger(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromGamepadReading )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
                  __x_ABI_CWindows_CGaming_CInput_CGamepadReading reading,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceFromGamepadReading(This,reading,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScanCode )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScanCode )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                  UINT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VirtualKey )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
                  UINT16 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyOptions(This,value) )
    ( (This)->lpVtbl->put_KeyOptions(This,value) )
    ( (This)->lpVtbl->get_ScanCode(This,value) )
    ( (This)->lpVtbl->put_ScanCode(This,value) )
    ( (This)->lpVtbl->get_VirtualKey(This,value) )
    ( (This)->lpVtbl->put_VirtualKey(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MouseOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MouseOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MouseData )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MouseData )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeltaY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeltaY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeltaX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeltaX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeOffsetInMilliseconds )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimeOffsetInMilliseconds )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MouseOptions(This,value) )
    ( (This)->lpVtbl->put_MouseOptions(This,value) )
    ( (This)->lpVtbl->get_MouseData(This,value) )
    ( (This)->lpVtbl->put_MouseData(This,value) )
    ( (This)->lpVtbl->get_DeltaY(This,value) )
    ( (This)->lpVtbl->put_DeltaY(This,value) )
    ( (This)->lpVtbl->get_DeltaX(This,value) )
    ( (This)->lpVtbl->put_DeltaX(This,value) )
    ( (This)->lpVtbl->get_TimeOffsetInMilliseconds(This,value) )
    ( (This)->lpVtbl->put_TimeOffsetInMilliseconds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PenButtons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PenButtons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PenParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PenParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerInfo(This,value) )
    ( (This)->lpVtbl->put_PointerInfo(This,value) )
    ( (This)->lpVtbl->get_PenButtons(This,value) )
    ( (This)->lpVtbl->put_PenButtons(This,value) )
    ( (This)->lpVtbl->get_PenParameters(This,value) )
    ( (This)->lpVtbl->put_PenParameters(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
    ( (This)->lpVtbl->put_Pressure(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->put_Rotation(This,value) )
    ( (This)->lpVtbl->get_TiltX(This,value) )
    ( (This)->lpVtbl->put_TiltX(This,value) )
    ( (This)->lpVtbl->get_TiltY(This,value) )
    ( (This)->lpVtbl->put_TiltY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Contact )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TouchParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TouchParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->put_Contact(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_PointerInfo(This,value) )
    ( (This)->lpVtbl->put_PointerInfo(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
    ( (This)->lpVtbl->put_Pressure(This,value) )
    ( (This)->lpVtbl->get_TouchParameters(This,value) )
    ( (This)->lpVtbl->put_TouchParameters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector[] = L"Windows.UI.Input.Preview.Injection.IInputInjector";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InjectKeyboardInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *InjectMouseInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *InitializeTouchInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode visualMode
        );
    HRESULT ( STDMETHODCALLTYPE *InjectTouchInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializeTouchInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
        );
    HRESULT ( STDMETHODCALLTYPE *InitializePenInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode visualMode
        );
    HRESULT ( STDMETHODCALLTYPE *InjectPenInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializePenInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
        );
    HRESULT ( STDMETHODCALLTYPE *InjectShortcut )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
                  __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut shortcut
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InjectKeyboardInput(This,input) )
    ( (This)->lpVtbl->InjectMouseInput(This,input) )
    ( (This)->lpVtbl->InitializeTouchInjection(This,visualMode) )
    ( (This)->lpVtbl->InjectTouchInput(This,input) )
    ( (This)->lpVtbl->UninitializeTouchInjection(This) )
    ( (This)->lpVtbl->InitializePenInjection(This,visualMode) )
    ( (This)->lpVtbl->InjectPenInput(This,input) )
    ( (This)->lpVtbl->UninitializePenInjection(This) )
    ( (This)->lpVtbl->InjectShortcut(This,shortcut) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector2[] = L"Windows.UI.Input.Preview.Injection.IInputInjector2";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InitializeGamepadInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *InjectGamepadInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializeGamepadInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InitializeGamepadInjection(This) )
    ( (This)->lpVtbl->InjectGamepadInput(This,input) )
    ( (This)->lpVtbl->UninitializeGamepadInjection(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreate )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreate(This,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateForAppBroadcastOnly )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateForAppBroadcastOnly(This,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InputInjector[] = L"Windows.UI.Input.Preview.Injection.InputInjector";
       
       
#pragma clang diagnostic pop

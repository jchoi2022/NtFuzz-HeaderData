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
#include "Windows.UI.Composition.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController;
typedef interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Core_ICompositorController[] = L"Windows.UI.Composition.Core.ICompositorController";
typedef struct __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Commit )(
        __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This
        );
    HRESULT ( STDMETHODCALLTYPE *EnsurePreviousCommitCompletedAsync )(
        __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CommitNeeded )(
        __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CComposition__CCore__CCompositorController_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CommitNeeded )(
        __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorControllerVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CCore_CICompositorControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Compositor(This,value) )
    ( (This)->lpVtbl->Commit(This) )
    ( (This)->lpVtbl->EnsurePreviousCommitCompletedAsync(This,action) )
    ( (This)->lpVtbl->add_CommitNeeded(This,handler,token) )
    ( (This)->lpVtbl->remove_CommitNeeded(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CCore_CICompositorController;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Core_CompositorController[] = L"Windows.UI.Composition.Core.CompositorController";
       
       
#pragma clang diagnostic pop

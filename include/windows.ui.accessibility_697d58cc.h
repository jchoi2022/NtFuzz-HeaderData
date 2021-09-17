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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService;
typedef interface __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Accessibility_IScreenReaderPositionChangedEventArgs[] = L"Windows.UI.Accessibility.IScreenReaderPositionChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScreenPositionInRawPixels )(
        __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadingText )(
        __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScreenPositionInRawPixels(This,value) )
    ( (This)->lpVtbl->get_IsReadingText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Accessibility_IScreenReaderService[] = L"Windows.UI.Accessibility.IScreenReaderService";
typedef struct __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentScreenReaderPosition )(
        __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderPositionChangedEventArgs * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ScreenReaderPositionChanged )(
        __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CAccessibility__CScreenReaderService_Windows__CUI__CAccessibility__CScreenReaderPositionChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScreenReaderPositionChanged )(
        __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderServiceVtbl;
interface __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentScreenReaderPosition(This,value) )
    ( (This)->lpVtbl->add_ScreenReaderPositionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ScreenReaderPositionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CAccessibility_CIScreenReaderService;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Accessibility_ScreenReaderPositionChangedEventArgs[] = L"Windows.UI.Accessibility.ScreenReaderPositionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Accessibility_ScreenReaderService[] = L"Windows.UI.Accessibility.ScreenReaderService";
       
       
#pragma clang diagnostic pop

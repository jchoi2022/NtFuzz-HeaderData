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
#include "Windows.Phone.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput;
typedef interface __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer;
typedef interface __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef enum __x_ABI_CWindows_CPhone_CUI_CCore_CCoreInputScope __x_ABI_CWindows_CPhone_CUI_CCore_CCoreInputScope;
enum __x_ABI_CWindows_CPhone_CUI_CCore_CCoreInputScope
{
    CoreInputScope_Default = 0,
    CoreInputScope_Url = 1,
    CoreInputScope_EmailSmtpAddress = 5,
    CoreInputScope_Number = 29,
    CoreInputScope_TelephoneNumber = 32,
    CoreInputScope_Text = 49,
    CoreInputScope_Search = 51,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_UI_Core_ICoreSelectionChangedEventArgs[] = L"Windows.Phone.UI.Core.ICoreSelectionChangedEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Start )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Start(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CUI_CCore_CICoreSelectionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_UI_Core_ICoreTextChangedEventArgs[] = L"Windows.Phone.UI.Core.ICoreTextChangedEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Start )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldLength )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewText )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Start(This,value) )
    ( (This)->lpVtbl->get_OldLength(This,value) )
    ( (This)->lpVtbl->get_NewText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CUI_CCore_CICoreTextChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_UI_Core_ICoreWindowKeyboardInput[] = L"Windows.Phone.UI.Core.ICoreWindowKeyboardInput";
typedef struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsKeyboardInputEnabled )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsKeyboardInputEnabled )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardInputBuffer )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyboardInputBuffer )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput * This,
                  __RPC__in_opt __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInputVtbl;
interface __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsKeyboardInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsKeyboardInputEnabled(This,value) )
    ( (This)->lpVtbl->get_KeyboardInputBuffer(This,value) )
    ( (This)->lpVtbl->put_KeyboardInputBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CUI_CCore_CICoreWindowKeyboardInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_UI_Core_IKeyboardInputBuffer[] = L"Windows.Phone.UI.Core.IKeyboardInputBuffer";
typedef struct __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionStart )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionLength )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Select )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  UINT32 start,
                  UINT32 length
        );
    HRESULT ( STDMETHODCALLTYPE *SelectFromTap )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  UINT32 characterIndex
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputScope )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CUI_CCore_CCoreInputScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputScope )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  __x_ABI_CWindows_CPhone_CUI_CCore_CCoreInputScope value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TextChanged )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreTextChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TextChanged )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionChanged )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CUI__CCore__CKeyboardInputBuffer_Windows__CPhone__CUI__CCore__CCoreSelectionChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionChanged )(
        __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBufferVtbl;
interface __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_SelectionStart(This,value) )
    ( (This)->lpVtbl->get_SelectionLength(This,value) )
    ( (This)->lpVtbl->Select(This,start,length) )
    ( (This)->lpVtbl->SelectFromTap(This,characterIndex) )
    ( (This)->lpVtbl->get_InputScope(This,value) )
    ( (This)->lpVtbl->put_InputScope(This,value) )
    ( (This)->lpVtbl->add_TextChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TextChanged(This,cookie) )
    ( (This)->lpVtbl->add_SelectionChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_SelectionChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CUI_CCore_CIKeyboardInputBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_UI_Core_CoreSelectionChangedEventArgs[] = L"Windows.Phone.UI.Core.CoreSelectionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_UI_Core_CoreTextChangedEventArgs[] = L"Windows.Phone.UI.Core.CoreTextChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_UI_Core_KeyboardInputBuffer[] = L"Windows.Phone.UI.Core.KeyboardInputBuffer";
       
       
#pragma clang diagnostic pop

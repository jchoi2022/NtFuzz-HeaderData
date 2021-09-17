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
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;
enum __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction
{
    NotifyCollectionChangedAction_Add = 0,
    NotifyCollectionChangedAction_Remove = 1,
    NotifyCollectionChangedAction_Replace = 2,
    NotifyCollectionChangedAction_Move = 3,
    NotifyCollectionChangedAction_Reset = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind
{
    TypeKind_Primitive = 0,
    TypeKind_Metadata = 1,
    TypeKind_Custom = 2,
};
struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName
{
    HSTRING Name;
    __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind Kind;
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * vector,
                  __RPC__in_opt IInspectable * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,vector,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterable[] = L"Windows.UI.Xaml.Interop.IBindableIterable";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *First )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->First(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterator[] = L"Windows.UI.Xaml.Interop.IBindableIterator";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
    ( (This)->lpVtbl->get_HasCurrent(This,value) )
    ( (This)->lpVtbl->MoveNext(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableObservableVector[] = L"Windows.UI.Xaml.Interop.IBindableObservableVector";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VectorChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVector[] = L"Windows.UI.Xaml.Interop.IBindableVector";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  UINT32 index,
                           __RPC__deref_out_opt IInspectable * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetView )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  __RPC__in_opt IInspectable * value,
                   __RPC__out UINT32 * index,
                           __RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  UINT32 index,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  UINT32 index,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  UINT32 index
        );
    HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
                  __RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAt(This,index,result) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->GetView(This,result) )
    ( (This)->lpVtbl->IndexOf(This,value,index,returnValue) )
    ( (This)->lpVtbl->SetAt(This,index,value) )
    ( (This)->lpVtbl->InsertAt(This,index,value) )
    ( (This)->lpVtbl->RemoveAt(This,index) )
    ( (This)->lpVtbl->Append(This,value) )
    ( (This)->lpVtbl->RemoveAtEnd(This) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVectorView[] = L"Windows.UI.Xaml.Interop.IBindableVectorView";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                  UINT32 index,
                           __RPC__deref_out_opt IInspectable * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
                  __RPC__in_opt IInspectable * value,
                   __RPC__out UINT32 * index,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAt(This,index,result) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->IndexOf(This,value,index,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChanged[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChanged";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CollectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CollectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CollectionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CollectionChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewItems )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldItems )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewStartingIndex )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldStartingIndex )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Action(This,value) )
    ( (This)->lpVtbl->get_NewItems(This,value) )
    ( (This)->lpVtbl->get_OldItems(This,value) )
    ( (This)->lpVtbl->get_NewStartingIndex(This,value) )
    ( (This)->lpVtbl->get_OldStartingIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithAllParameters )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction action,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * newItems,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * oldItems,
                  INT32 newIndex,
                  INT32 oldIndex,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithAllParameters(This,action,newItems,oldItems,newIndex,oldIndex,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs";
       
       
#pragma clang diagnostic pop

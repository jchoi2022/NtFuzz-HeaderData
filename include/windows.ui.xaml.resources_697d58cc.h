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
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader;
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides;
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoader";
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides";
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetResource )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
                  __RPC__in HSTRING resourceId,
                  __RPC__in HSTRING objectType,
                  __RPC__in HSTRING propertyName,
                  __RPC__in HSTRING propertyType,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetResource(This,resourceId,objectType,propertyName,propertyType,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Current )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
    ( (This)->lpVtbl->put_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Resources_CustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.CustomXamlResourceLoader";
       
       
#pragma clang diagnostic pop

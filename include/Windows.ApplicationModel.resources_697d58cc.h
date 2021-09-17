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
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader[] = L"Windows.ApplicationModel.Resources.IResourceLoader";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
                  __RPC__in HSTRING resource,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetString(This,resource,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader2[] = L"Windows.ApplicationModel.Resources.IResourceLoader2";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStringForUri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStringForUri(This,uri,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderFactory[] = L"Windows.ApplicationModel.Resources.IResourceLoaderFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateResourceLoaderByName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateResourceLoaderByName(This,name,loader) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStringForReference )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStringForReference(This,uri,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics2[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
                    HRESULT ( STDMETHODCALLTYPE *GetForCurrentViewWithName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
                    HRESULT ( STDMETHODCALLTYPE *GetForViewIndependentUse )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
                    HRESULT ( STDMETHODCALLTYPE *GetForViewIndependentUseWithName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,loader) )
    ( (This)->lpVtbl->GetForCurrentViewWithName(This,name,loader) )
    ( (This)->lpVtbl->GetForViewIndependentUse(This,loader) )
    ( (This)->lpVtbl->GetForViewIndependentUseWithName(This,name,loader) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics3[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUIContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CIUIContext * context,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUIContext(This,context,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_ResourceLoader[] = L"Windows.ApplicationModel.Resources.ResourceLoader";
       
       
#pragma clang diagnostic pop

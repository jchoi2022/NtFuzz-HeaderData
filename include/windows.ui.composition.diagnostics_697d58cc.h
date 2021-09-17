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
typedef interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;
typedef interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;
typedef interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
typedef enum __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds;
enum __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds
{
    CompositionDebugOverdrawContentKinds_None = 0,
    CompositionDebugOverdrawContentKinds_OffscreenRendered = 0x1,
    CompositionDebugOverdrawContentKinds_Colors = 0x2,
    CompositionDebugOverdrawContentKinds_Effects = 0x4,
    CompositionDebugOverdrawContentKinds_Shadows = 0x8,
    CompositionDebugOverdrawContentKinds_Lights = 0x10,
    CompositionDebugOverdrawContentKinds_Surfaces = 0x20,
    CompositionDebugOverdrawContentKinds_SwapChains = 0x40,
    CompositionDebugOverdrawContentKinds_All = 0xffffffff,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Diagnostics_ICompositionDebugHeatMaps[] = L"Windows.UI.Composition.Diagnostics.ICompositionDebugHeatMaps";
typedef struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * subtree
        );
    HRESULT ( STDMETHODCALLTYPE *ShowMemoryUsage )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * subtree
        );
    HRESULT ( STDMETHODCALLTYPE *ShowOverdraw )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * subtree,
                  __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CCompositionDebugOverdrawContentKinds contentKinds
        );
    HRESULT ( STDMETHODCALLTYPE *ShowRedraw )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * subtree
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMapsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Hide(This,subtree) )
    ( (This)->lpVtbl->ShowMemoryUsage(This,subtree) )
    ( (This)->lpVtbl->ShowOverdraw(This,subtree,contentKinds) )
    ( (This)->lpVtbl->ShowRedraw(This,subtree) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Diagnostics_ICompositionDebugSettings[] = L"Windows.UI.Composition.Diagnostics.ICompositionDebugSettings";
typedef struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeatMaps )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugHeatMaps * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeatMaps(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Diagnostics_ICompositionDebugSettingsStatics[] = L"Windows.UI.Composition.Diagnostics.ICompositionDebugSettingsStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetSettings )(
        __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetSettings(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CDiagnostics_CICompositionDebugSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Diagnostics_CompositionDebugHeatMaps[] = L"Windows.UI.Composition.Diagnostics.CompositionDebugHeatMaps";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Diagnostics_CompositionDebugSettings[] = L"Windows.UI.Composition.Diagnostics.CompositionDebugSettings";
       
       
#pragma clang diagnostic pop

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
#include "Windows.Graphics.Effects.h"
typedef interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;
typedef interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2;
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;
typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;
typedef enum __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel;
enum __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel
{
    SceneLightingEffectReflectanceModel_BlinnPhong = 0,
    SceneLightingEffectReflectanceModel_PhysicallyBasedBlinnPhong = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect";
typedef struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AmbientAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AmbientAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiffuseAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DiffuseAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalMapSource )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalMapSource )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpecularAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpecularAmount )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpecularShine )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpecularShine )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AmbientAmount(This,value) )
    ( (This)->lpVtbl->put_AmbientAmount(This,value) )
    ( (This)->lpVtbl->get_DiffuseAmount(This,value) )
    ( (This)->lpVtbl->put_DiffuseAmount(This,value) )
    ( (This)->lpVtbl->get_NormalMapSource(This,value) )
    ( (This)->lpVtbl->put_NormalMapSource(This,value) )
    ( (This)->lpVtbl->get_SpecularAmount(This,value) )
    ( (This)->lpVtbl->put_SpecularAmount(This,value) )
    ( (This)->lpVtbl->get_SpecularShine(This,value) )
    ( (This)->lpVtbl->put_SpecularShine(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Effects_ISceneLightingEffect2[] = L"Windows.UI.Composition.Effects.ISceneLightingEffect2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReflectanceModel )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReflectanceModel )(
        __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2 * This,
                  __x_ABI_CWindows_CUI_CComposition_CEffects_CSceneLightingEffectReflectanceModel value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReflectanceModel(This,value) )
    ( (This)->lpVtbl->put_ReflectanceModel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CEffects_CISceneLightingEffect2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Effects_SceneLightingEffect[] = L"Windows.UI.Composition.Effects.SceneLightingEffect";
       
       
#pragma clang diagnostic pop

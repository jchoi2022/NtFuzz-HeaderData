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
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.Spatial.h"
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview;
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics[] = L"Windows.ApplicationModel.Preview.Holographic.IHolographicApplicationPreviewStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsCurrentViewPresentedOnHolographicDisplay )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsHolographicActivation )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs * activatedEventArgs,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsCurrentViewPresentedOnHolographicDisplay(This,result) )
    ( (This)->lpVtbl->IsHolographicActivation(This,activatedEventArgs,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreview[] = L"Windows.ApplicationModel.Preview.Holographic.IHolographicKeyboardPlacementOverridePreview";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SetPlacementOverride )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 topCenterPosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal
        );
                    HRESULT ( STDMETHODCALLTYPE *SetPlacementOverrideWithMaxSize )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 topCenterPosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 maxSize
        );
    HRESULT ( STDMETHODCALLTYPE *ResetPlacementOverride )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetPlacementOverride(This,coordinateSystem,topCenterPosition,normal) )
    ( (This)->lpVtbl->SetPlacementOverrideWithMaxSize(This,coordinateSystem,topCenterPosition,normal,maxSize) )
    ( (This)->lpVtbl->ResetPlacementOverride(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Holographic_IHolographicKeyboardPlacementOverridePreviewStatics[] = L"Windows.ApplicationModel.Preview.Holographic.IHolographicKeyboardPlacementOverridePreviewStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Holographic_HolographicApplicationPreview[] = L"Windows.ApplicationModel.Preview.Holographic.HolographicApplicationPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Holographic_HolographicKeyboardPlacementOverridePreview[] = L"Windows.ApplicationModel.Preview.Holographic.HolographicKeyboardPlacementOverridePreview";
       
       
#pragma clang diagnostic pop

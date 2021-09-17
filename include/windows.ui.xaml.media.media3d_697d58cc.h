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
#include "Windows.UI.Xaml.h"
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D;
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D;
struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D
{
    DOUBLE M11;
    DOUBLE M12;
    DOUBLE M13;
    DOUBLE M14;
    DOUBLE M21;
    DOUBLE M22;
    DOUBLE M23;
    DOUBLE M24;
    DOUBLE M31;
    DOUBLE M32;
    DOUBLE M33;
    DOUBLE M34;
    DOUBLE OffsetX;
    DOUBLE OffsetY;
    DOUBLE OffsetZ;
    DOUBLE M44;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D[] = L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3D";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CenterZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslateX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslateY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslateZ )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterX(This,value) )
    ( (This)->lpVtbl->put_CenterX(This,value) )
    ( (This)->lpVtbl->get_CenterY(This,value) )
    ( (This)->lpVtbl->put_CenterY(This,value) )
    ( (This)->lpVtbl->get_CenterZ(This,value) )
    ( (This)->lpVtbl->put_CenterZ(This,value) )
    ( (This)->lpVtbl->get_RotationX(This,value) )
    ( (This)->lpVtbl->put_RotationX(This,value) )
    ( (This)->lpVtbl->get_RotationY(This,value) )
    ( (This)->lpVtbl->put_RotationY(This,value) )
    ( (This)->lpVtbl->get_RotationZ(This,value) )
    ( (This)->lpVtbl->put_RotationZ(This,value) )
    ( (This)->lpVtbl->get_ScaleX(This,value) )
    ( (This)->lpVtbl->put_ScaleX(This,value) )
    ( (This)->lpVtbl->get_ScaleY(This,value) )
    ( (This)->lpVtbl->put_ScaleY(This,value) )
    ( (This)->lpVtbl->get_ScaleZ(This,value) )
    ( (This)->lpVtbl->put_ScaleZ(This,value) )
    ( (This)->lpVtbl->get_TranslateX(This,value) )
    ( (This)->lpVtbl->put_TranslateX(This,value) )
    ( (This)->lpVtbl->get_TranslateY(This,value) )
    ( (This)->lpVtbl->put_TranslateY(This,value) )
    ( (This)->lpVtbl->get_TranslateZ(This,value) )
    ( (This)->lpVtbl->put_TranslateZ(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3D;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics[] = L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3DStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CenterXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CenterZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslateZProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CenterXProperty(This,value) )
    ( (This)->lpVtbl->get_CenterYProperty(This,value) )
    ( (This)->lpVtbl->get_CenterZProperty(This,value) )
    ( (This)->lpVtbl->get_RotationXProperty(This,value) )
    ( (This)->lpVtbl->get_RotationYProperty(This,value) )
    ( (This)->lpVtbl->get_RotationZProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleXProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleYProperty(This,value) )
    ( (This)->lpVtbl->get_ScaleZProperty(This,value) )
    ( (This)->lpVtbl->get_TranslateXProperty(This,value) )
    ( (This)->lpVtbl->get_TranslateYProperty(This,value) )
    ( (This)->lpVtbl->get_TranslateZProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CICompositeTransform3DStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper[] = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelper";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics[] = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * value
        );
    HRESULT ( STDMETHODCALLTYPE *Multiply )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D matrix1,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D matrix2,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromElements )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                  DOUBLE m11,
                  DOUBLE m12,
                  DOUBLE m13,
                  DOUBLE m14,
                  DOUBLE m21,
                  DOUBLE m22,
                  DOUBLE m23,
                  DOUBLE m24,
                  DOUBLE m31,
                  DOUBLE m32,
                  DOUBLE m33,
                  DOUBLE m34,
                  DOUBLE offsetX,
                  DOUBLE offsetY,
                  DOUBLE offsetZ,
                  DOUBLE m44,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHasInverse )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsIdentity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Invert )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
                  __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identity(This,value) )
    ( (This)->lpVtbl->Multiply(This,matrix1,matrix2,result) )
    ( (This)->lpVtbl->FromElements(This,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,offsetX,offsetY,offsetZ,m44,result) )
    ( (This)->lpVtbl->GetHasInverse(This,target,result) )
    ( (This)->lpVtbl->GetIsIdentity(This,target,result) )
    ( (This)->lpVtbl->Invert(This,target,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D[] = L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3D";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Depth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Depth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OffsetX )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OffsetY )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Depth(This,value) )
    ( (This)->lpVtbl->put_Depth(This,value) )
    ( (This)->lpVtbl->get_OffsetX(This,value) )
    ( (This)->lpVtbl->put_OffsetX(This,value) )
    ( (This)->lpVtbl->get_OffsetY(This,value) )
    ( (This)->lpVtbl->put_OffsetY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3D;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics[] = L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3DStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DepthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OffsetXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OffsetYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DepthProperty(This,value) )
    ( (This)->lpVtbl->get_OffsetXProperty(This,value) )
    ( (This)->lpVtbl->get_OffsetYProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIPerspectiveTransform3DStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_ITransform3D[] = L"Windows.UI.Xaml.Media.Media3D.ITransform3D";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory[] = L"Windows.UI.Xaml.Media.Media3D.ITransform3DFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3D * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CITransform3DFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Media3D_CompositeTransform3D[] = L"Windows.UI.Xaml.Media.Media3D.CompositeTransform3D";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Media3D_Matrix3DHelper[] = L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Media3D_PerspectiveTransform3D[] = L"Windows.UI.Xaml.Media.Media3D.PerspectiveTransform3D";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Media3D_Transform3D[] = L"Windows.UI.Xaml.Media.Media3D.Transform3D";
       
       
#pragma clang diagnostic pop

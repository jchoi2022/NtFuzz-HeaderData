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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.Spatial.h"
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Preview_ISpatialGraphInteropFrameOfReferencePreview[] = L"Windows.Perception.Spatial.Preview.ISpatialGraphInteropFrameOfReferencePreview";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NodeId )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystemToNodeTransform )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreviewVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
    ( (This)->lpVtbl->get_NodeId(This,value) )
    ( (This)->lpVtbl->get_CoordinateSystemToNodeTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics[] = L"Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateCoordinateSystemForNode )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                  GUID nodeId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCoordinateSystemForNodeWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                  GUID nodeId,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCoordinateSystemForNodeWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                  GUID nodeId,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLocatorForNode )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics * This,
                  GUID nodeId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCoordinateSystemForNode(This,nodeId,result) )
    ( (This)->lpVtbl->CreateCoordinateSystemForNodeWithPosition(This,nodeId,relativePosition,result) )
    ( (This)->lpVtbl->CreateCoordinateSystemForNodeWithPositionAndOrientation(This,nodeId,relativePosition,relativeOrientation,result) )
    ( (This)->lpVtbl->CreateLocatorForNode(This,nodeId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics2[] = L"Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryCreateFrameOfReference )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryCreateFrameOfReferenceWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryCreateFrameOfReferenceWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropFrameOfReferencePreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2Vtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateFrameOfReference(This,coordinateSystem,result) )
    ( (This)->lpVtbl->TryCreateFrameOfReferenceWithPosition(This,coordinateSystem,relativePosition,result) )
    ( (This)->lpVtbl->TryCreateFrameOfReferenceWithPositionAndOrientation(This,coordinateSystem,relativePosition,relativeOrientation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CPreview_CISpatialGraphInteropPreviewStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Preview_SpatialGraphInteropFrameOfReferencePreview[] = L"Windows.Perception.Spatial.Preview.SpatialGraphInteropFrameOfReferencePreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Preview_SpatialGraphInteropPreview[] = L"Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview";
       
       
#pragma clang diagnostic pop

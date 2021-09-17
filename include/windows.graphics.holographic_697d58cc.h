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
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Perception.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.UI.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3;
typedef interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration;
typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera;
typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;
interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera;
typedef struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCamera **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;
interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;
interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
typedef struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicCameraPose **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;
interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl;
interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
typedef struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl;
interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
typedef struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;
interface __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
typedef struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;
interface __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera;
typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                       __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl;
interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose;
typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                       __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl;
interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPoseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport;
typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                       __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl;
interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
typedef struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                       __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;
interface __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
EXTERN_C const IID IID___FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer;
typedef struct __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This, __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl;
interface __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer
{
    CONST_VTBL struct __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform;
typedef interface __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform;
EXTERN_C const IID IID___FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform;
typedef struct __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * This, __RPC__out struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform *value);
    END_INTERFACE
} __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl;
interface __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform
{
    CONST_VTBL struct __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransformVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * sender, __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                       enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;
typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult;
typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior;
typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode;
typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicSpaceUserPresence __x_ABI_CWindows_CGraphics_CHolographic_CHolographicSpaceUserPresence;
typedef enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicViewConfigurationKind __x_ABI_CWindows_CGraphics_CHolographic_CHolographicViewConfigurationKind;
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId;
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform;
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult
{
    HolographicFramePresentResult_Success = 0,
    HolographicFramePresentResult_DeviceRemoved = 1,
};
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior
{
    HolographicFramePresentWaitBehavior_WaitForFrameToFinish = 0,
    HolographicFramePresentWaitBehavior_DoNotWaitForFrameToFinish = 1,
};
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode
{
    HolographicReprojectionMode_PositionAndOrientation = 0,
    HolographicReprojectionMode_OrientationOnly = 1,
    HolographicReprojectionMode_Disabled = 2,
};
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicSpaceUserPresence
{
    HolographicSpaceUserPresence_Absent = 0,
    HolographicSpaceUserPresence_PresentPassive = 1,
    HolographicSpaceUserPresence_PresentActive = 2,
};
enum __x_ABI_CWindows_CGraphics_CHolographic_CHolographicViewConfigurationKind
{
    HolographicViewConfigurationKind_Display = 0,
    HolographicViewConfigurationKind_PhotoVideoCamera = 1,
};
struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId
{
    UINT32 LowPart;
    INT32 HighPart;
};
struct __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform
{
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 Left;
    __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 Right;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera[] = L"Windows.Graphics.Holographic.IHolographicCamera";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RenderTargetSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewportScaleFactor )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewportScaleFactor )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStereo )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNearPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                  DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFarPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RenderTargetSize(This,value) )
    ( (This)->lpVtbl->get_ViewportScaleFactor(This,value) )
    ( (This)->lpVtbl->put_ViewportScaleFactor(This,value) )
    ( (This)->lpVtbl->get_IsStereo(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->SetNearPlaneDistance(This,value) )
    ( (This)->lpVtbl->SetFarPlaneDistance(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera2[] = L"Windows.Graphics.Holographic.IHolographicCamera2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LeftViewportParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightViewportParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Display )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LeftViewportParameters(This,result) )
    ( (This)->lpVtbl->get_RightViewportParameters(This,result) )
    ( (This)->lpVtbl->get_Display(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera3[] = L"Windows.Graphics.Holographic.IHolographicCamera3";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryLayerEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPrimaryLayerEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxQuadLayerCount )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QuadLayers )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CGraphics__CHolographic__CHolographicQuadLayer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPrimaryLayerEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPrimaryLayerEnabled(This,value) )
    ( (This)->lpVtbl->get_MaxQuadLayerCount(This,value) )
    ( (This)->lpVtbl->get_QuadLayers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera4[] = L"Windows.Graphics.Holographic.IHolographicCamera4";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanOverrideViewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanOverrideViewport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera5[] = L"Windows.Graphics.Holographic.IHolographicCamera5";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsHardwareContentProtectionSupported )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHardwareContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHardwareContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsHardwareContentProtectionSupported(This,value) )
    ( (This)->lpVtbl->get_IsHardwareContentProtectionEnabled(This,value) )
    ( (This)->lpVtbl->put_IsHardwareContentProtectionEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCamera6[] = L"Windows.Graphics.Holographic.IHolographicCamera6";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewConfiguration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewConfiguration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraPose[] = L"Windows.Graphics.Holographic.IHolographicCameraPose";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HolographicCamera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Viewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetViewTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __FIReference_1_Windows__CGraphics__CHolographic__CHolographicStereoTransform * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCullingFrustum )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetVisibleFrustum )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NearPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FarPlaneDistance )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HolographicCamera(This,value) )
    ( (This)->lpVtbl->get_Viewport(This,value) )
    ( (This)->lpVtbl->TryGetViewTransform(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_ProjectionTransform(This,value) )
    ( (This)->lpVtbl->TryGetCullingFrustum(This,coordinateSystem,value) )
    ( (This)->lpVtbl->TryGetVisibleFrustum(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_NearPlaneDistance(This,value) )
    ( (This)->lpVtbl->get_FarPlaneDistance(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraPose2[] = L"Windows.Graphics.Holographic.IHolographicCameraPose2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OverrideViewTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform coordinateSystemToViewTransform
        );
    HRESULT ( STDMETHODCALLTYPE *OverrideProjectionTransform )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                  __x_ABI_CWindows_CGraphics_CHolographic_CHolographicStereoTransform projectionTransform
        );
    HRESULT ( STDMETHODCALLTYPE *OverrideViewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2 * This,
                  __x_ABI_CWindows_CFoundation_CRect leftViewport,
                  __x_ABI_CWindows_CFoundation_CRect rightViewport
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OverrideViewTransform(This,coordinateSystem,coordinateSystemToViewTransform) )
    ( (This)->lpVtbl->OverrideProjectionTransform(This,projectionTransform) )
    ( (This)->lpVtbl->OverrideViewport(This,leftViewport,rightViewport) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SetFocusPoint )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position
        );
                    HRESULT ( STDMETHODCALLTYPE *SetFocusPointWithNormal )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal
        );
                    HRESULT ( STDMETHODCALLTYPE *SetFocusPointWithNormalLinearVelocity )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 linearVelocity
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direct3D11Device )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direct3D11BackBuffer )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetFocusPoint(This,coordinateSystem,position) )
    ( (This)->lpVtbl->SetFocusPointWithNormal(This,coordinateSystem,position,normal) )
    ( (This)->lpVtbl->SetFocusPointWithNormalLinearVelocity(This,coordinateSystem,position,normal,linearVelocity) )
    ( (This)->lpVtbl->get_Direct3D11Device(This,value) )
    ( (This)->lpVtbl->get_Direct3D11BackBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReprojectionMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReprojectionMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                  __x_ABI_CWindows_CGraphics_CHolographic_CHolographicReprojectionMode value
        );
    HRESULT ( STDMETHODCALLTYPE *CommitDirect3D11DepthBuffer )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReprojectionMode(This,value) )
    ( (This)->lpVtbl->put_ReprojectionMode(This,value) )
    ( (This)->lpVtbl->CommitDirect3D11DepthBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3[] = L"Windows.Graphics.Holographic.IHolographicCameraRenderingParameters3";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsContentProtectionEnabled(This,value) )
    ( (This)->lpVtbl->put_IsContentProtectionEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.IHolographicCameraViewportParameters";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HiddenAreaMesh )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibleAreaMesh )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector2 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HiddenAreaMesh(This,__valueSize,value) )
    ( (This)->lpVtbl->get_VisibleAreaMesh(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraViewportParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay[] = L"Windows.Graphics.Holographic.IHolographicDisplay";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxViewportSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStereo )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpaque )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdapterId )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpatialLocator )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_MaxViewportSize(This,value) )
    ( (This)->lpVtbl->get_IsStereo(This,value) )
    ( (This)->lpVtbl->get_IsOpaque(This,value) )
    ( (This)->lpVtbl->get_AdapterId(This,value) )
    ( (This)->lpVtbl->get_SpatialLocator(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay2[] = L"Windows.Graphics.Holographic.IHolographicDisplay2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RefreshRate )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RefreshRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplay3[] = L"Windows.Graphics.Holographic.IHolographicDisplay3";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetViewConfiguration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3 * This,
                  __x_ABI_CWindows_CGraphics_CHolographic_CHolographicViewConfigurationKind kind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetViewConfiguration(This,kind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicDisplayStatics[] = L"Windows.Graphics.Holographic.IHolographicDisplayStatics";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame[] = L"Windows.Graphics.Holographic.IHolographicFrame";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AddedCameras )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemovedCameras )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRenderingParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraPose * cameraPose,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCameraRenderingParameters * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateCurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
        );
                    HRESULT ( STDMETHODCALLTYPE *PresentUsingCurrentPrediction )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *PresentUsingCurrentPredictionWithBehavior )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This,
                  __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentWaitBehavior waitBehavior,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicFramePresentResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForFrameToFinish )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AddedCameras(This,value) )
    ( (This)->lpVtbl->get_RemovedCameras(This,value) )
    ( (This)->lpVtbl->GetRenderingParameters(This,cameraPose,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_CurrentPrediction(This,value) )
    ( (This)->lpVtbl->UpdateCurrentPrediction(This) )
    ( (This)->lpVtbl->PresentUsingCurrentPrediction(This,result) )
    ( (This)->lpVtbl->PresentUsingCurrentPredictionWithBehavior(This,waitBehavior,result) )
    ( (This)->lpVtbl->WaitForFrameToFinish(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFrame2[] = L"Windows.Graphics.Holographic.IHolographicFrame2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetQuadLayerUpdateParameters )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * layer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetQuadLayerUpdateParameters(This,layer,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFramePrediction[] = L"Windows.Graphics.Holographic.IHolographicFramePrediction";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CameraPoses )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicCameraPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePredictionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CameraPoses(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePrediction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor[] = L"Windows.Graphics.Holographic.IHolographicFramePresentationMonitor";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CHolographic__CHolographicFramePresentationReport * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitorVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadReports(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicFramePresentationReport[] = L"Windows.Graphics.Holographic.IHolographicFramePresentationReport";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositorGpuDuration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppGpuDuration )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppGpuOverrun )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MissedPresentationOpportunityCount )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationCount )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReportVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositorGpuDuration(This,value) )
    ( (This)->lpVtbl->get_AppGpuDuration(This,value) )
    ( (This)->lpVtbl->get_AppGpuOverrun(This,value) )
    ( (This)->lpVtbl->get_MissedPresentationOpportunityCount(This,value) )
    ( (This)->lpVtbl->get_PresentationCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayer[] = L"Windows.Graphics.Holographic.IHolographicQuadLayer";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PixelFormat(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerFactory[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerFactory";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
                  __x_ABI_CWindows_CFoundation_CSize size,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory * This,
                  __x_ABI_CWindows_CFoundation_CSize size,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat pixelFormat,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,size,value) )
    ( (This)->lpVtbl->CreateWithPixelFormat(This,size,pixelFormat,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcquireBufferToUpdateContent )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateViewport )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateContentProtectionEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateExtents )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector2 value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocationWithStationaryMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocationWithDisplayRelativeMode )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AcquireBufferToUpdateContent(This,value) )
    ( (This)->lpVtbl->UpdateViewport(This,value) )
    ( (This)->lpVtbl->UpdateContentProtectionEnabled(This,value) )
    ( (This)->lpVtbl->UpdateExtents(This,value) )
    ( (This)->lpVtbl->UpdateLocationWithStationaryMode(This,coordinateSystem,position,orientation) )
    ( (This)->lpVtbl->UpdateLocationWithDisplayRelativeMode(This,position,orientation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters2[] = L"Windows.Graphics.Holographic.IHolographicQuadLayerUpdateParameters2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanAcquireWithHardwareProtection )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *AcquireBufferToUpdateContentWithHardwareProtection )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanAcquireWithHardwareProtection(This,value) )
    ( (This)->lpVtbl->AcquireBufferToUpdateContentWithHardwareProtection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicQuadLayerUpdateParameters2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpace[] = L"Windows.Graphics.Holographic.IHolographicSpace";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrimaryAdapterId )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicAdapterId * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDirect3D11Device )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CameraAdded )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CameraAdded )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CameraRemoved )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_Windows__CGraphics__CHolographic__CHolographicSpaceCameraRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CameraRemoved )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNextFrame )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrimaryAdapterId(This,value) )
    ( (This)->lpVtbl->SetDirect3D11Device(This,value) )
    ( (This)->lpVtbl->add_CameraAdded(This,handler,cookie) )
    ( (This)->lpVtbl->remove_CameraAdded(This,cookie) )
    ( (This)->lpVtbl->add_CameraRemoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_CameraRemoved(This,cookie) )
    ( (This)->lpVtbl->CreateNextFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpace2[] = L"Windows.Graphics.Holographic.IHolographicSpace2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserPresence )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicSpaceUserPresence * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UserPresenceChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CHolographic__CHolographicSpace_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserPresenceChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForNextFrameReady )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForNextFrameReadyWithHeadStart )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan requestedHeadStartDuration
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFramePresentationMonitor )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2 * This,
                  UINT32 maxQueuedReports,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicFramePresentationMonitor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserPresence(This,value) )
    ( (This)->lpVtbl->add_UserPresenceChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_UserPresenceChanged(This,token) )
    ( (This)->lpVtbl->WaitForNextFrameReady(This) )
    ( (This)->lpVtbl->WaitForNextFrameReadyWithHeadStart(This,requestedHeadStartDuration) )
    ( (This)->lpVtbl->CreateFramePresentationMonitor(This,maxQueuedReports,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraAddedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Camera(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.IHolographicSpaceCameraRemovedEventArgs";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Camera )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicCamera * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Camera(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceCameraRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForCoreWindow )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpace * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForCoreWindow(This,window,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics2[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics2";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsAvailableChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsAvailableChanged )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSupported(This,value) )
    ( (This)->lpVtbl->get_IsAvailable(This,value) )
    ( (This)->lpVtbl->add_IsAvailableChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsAvailableChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicSpaceStatics3[] = L"Windows.Graphics.Holographic.IHolographicSpaceStatics3";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsConfigured )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsConfigured(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicSpaceStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Holographic_IHolographicViewConfiguration[] = L"Windows.Graphics.Holographic.IHolographicViewConfiguration";
typedef struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NativeRenderTargetSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderTargetSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestRenderTargetSize )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                  __x_ABI_CWindows_CFoundation_CSize size,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedPixelFormats )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PixelFormat )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStereo )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RefreshRate )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CHolographic_CHolographicViewConfigurationKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Display )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicDisplay * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfigurationVtbl;
interface __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NativeRenderTargetSize(This,value) )
    ( (This)->lpVtbl->get_RenderTargetSize(This,value) )
    ( (This)->lpVtbl->RequestRenderTargetSize(This,size,result) )
    ( (This)->lpVtbl->get_SupportedPixelFormats(This,value) )
    ( (This)->lpVtbl->get_PixelFormat(This,value) )
    ( (This)->lpVtbl->put_PixelFormat(This,value) )
    ( (This)->lpVtbl->get_IsStereo(This,value) )
    ( (This)->lpVtbl->get_RefreshRate(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Display(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CHolographic_CIHolographicViewConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCamera[] = L"Windows.Graphics.Holographic.HolographicCamera";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraPose[] = L"Windows.Graphics.Holographic.HolographicCameraPose";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraRenderingParameters[] = L"Windows.Graphics.Holographic.HolographicCameraRenderingParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicCameraViewportParameters[] = L"Windows.Graphics.Holographic.HolographicCameraViewportParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicDisplay[] = L"Windows.Graphics.Holographic.HolographicDisplay";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFrame[] = L"Windows.Graphics.Holographic.HolographicFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFramePrediction[] = L"Windows.Graphics.Holographic.HolographicFramePrediction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFramePresentationMonitor[] = L"Windows.Graphics.Holographic.HolographicFramePresentationMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicFramePresentationReport[] = L"Windows.Graphics.Holographic.HolographicFramePresentationReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayer[] = L"Windows.Graphics.Holographic.HolographicQuadLayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicQuadLayerUpdateParameters[] = L"Windows.Graphics.Holographic.HolographicQuadLayerUpdateParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpace[] = L"Windows.Graphics.Holographic.HolographicSpace";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraAddedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicSpaceCameraRemovedEventArgs[] = L"Windows.Graphics.Holographic.HolographicSpaceCameraRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Holographic_HolographicViewConfiguration[] = L"Windows.Graphics.Holographic.HolographicViewConfiguration";
       
       
#pragma clang diagnostic pop

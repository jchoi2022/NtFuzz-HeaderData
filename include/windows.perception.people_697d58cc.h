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
#include "Windows.Perception.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Input.Spatial.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPose __x_ABI_CWindows_CPerception_CPeople_CIEyesPose;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandPose __x_ABI_CWindows_CPerception_CPeople_CIHandPose;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__out __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialRay;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay;
typedef enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;
typedef enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind __x_ABI_CWindows_CPerception_CPeople_CHandJointKind;
typedef enum __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy;
typedef struct __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex;
typedef struct __x_ABI_CWindows_CPerception_CPeople_CJointPose __x_ABI_CWindows_CPerception_CPeople_CJointPose;
enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind
{
    HandJointKind_Palm = 0,
    HandJointKind_Wrist = 1,
    HandJointKind_ThumbMetacarpal = 2,
    HandJointKind_ThumbProximal = 3,
    HandJointKind_ThumbDistal = 4,
    HandJointKind_ThumbTip = 5,
    HandJointKind_IndexMetacarpal = 6,
    HandJointKind_IndexProximal = 7,
    HandJointKind_IndexIntermediate = 8,
    HandJointKind_IndexDistal = 9,
    HandJointKind_IndexTip = 10,
    HandJointKind_MiddleMetacarpal = 11,
    HandJointKind_MiddleProximal = 12,
    HandJointKind_MiddleIntermediate = 13,
    HandJointKind_MiddleDistal = 14,
    HandJointKind_MiddleTip = 15,
    HandJointKind_RingMetacarpal = 16,
    HandJointKind_RingProximal = 17,
    HandJointKind_RingIntermediate = 18,
    HandJointKind_RingDistal = 19,
    HandJointKind_RingTip = 20,
    HandJointKind_LittleMetacarpal = 21,
    HandJointKind_LittleProximal = 22,
    HandJointKind_LittleIntermediate = 23,
    HandJointKind_LittleDistal = 24,
    HandJointKind_LittleTip = 25,
};
enum __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy
{
    JointPoseAccuracy_High = 0,
    JointPoseAccuracy_Approximate = 1,
};
struct __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Position;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Normal;
};
struct __x_ABI_CWindows_CPerception_CPeople_CJointPose
{
    __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion Orientation;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Position;
    FLOAT Radius;
    __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy Accuracy;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IEyesPose[] = L"Windows.Perception.People.IEyesPose";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCalibrationValid )(
        __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gaze )(
        __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateTimestamp )(
        __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPose
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCalibrationValid(This,value) )
    ( (This)->lpVtbl->get_Gaze(This,value) )
    ( (This)->lpVtbl->get_UpdateTimestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIEyesPose;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IEyesPoseStatics[] = L"Windows.Perception.People.IEyesPoseStatics";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHandMeshObserver[] = L"Windows.Perception.People.IHandMeshObserver";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriangleIndexCount )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexCount )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTriangleIndices )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                  UINT32 __indicesSize,
                                           __RPC__out_ecount_full(__indicesSize) UINT16 * indices
        );
    HRESULT ( STDMETHODCALLTYPE *GetVertexStateForPose )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CPeople_CIHandPose * handPose,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeutralPose )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHandPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeutralPoseVersion )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelId )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_TriangleIndexCount(This,value) )
    ( (This)->lpVtbl->get_VertexCount(This,value) )
    ( (This)->lpVtbl->GetTriangleIndices(This,__indicesSize,indices) )
    ( (This)->lpVtbl->GetVertexStateForPose(This,handPose,result) )
    ( (This)->lpVtbl->get_NeutralPose(This,value) )
    ( (This)->lpVtbl->get_NeutralPoseVersion(This,value) )
    ( (This)->lpVtbl->get_ModelId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHandMeshVertexState[] = L"Windows.Perception.People.IHandMeshVertexState";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVertices )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                  UINT32 __verticesSize,
                                            __RPC__out_ecount_full(__verticesSize) __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex * vertices
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateTimestamp )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
    ( (This)->lpVtbl->GetVertices(This,__verticesSize,vertices) )
    ( (This)->lpVtbl->get_UpdateTimestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHandPose[] = L"Windows.Perception.People.IHandPose";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetJoint )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CPerception_CPeople_CHandJointKind joint,
                   __RPC__out __x_ABI_CWindows_CPerception_CPeople_CJointPose * jointPose,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetJoints )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  UINT32 __jointsSize,
                                         __RPC__in_ecount_full(__jointsSize) __x_ABI_CWindows_CPerception_CPeople_CHandJointKind * joints,
                  UINT32 __jointPosesSize,
                                              __RPC__out_ecount_full(__jointPosesSize) __x_ABI_CWindows_CPerception_CPeople_CJointPose * jointPoses,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRelativeJoint )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                  __x_ABI_CWindows_CPerception_CPeople_CHandJointKind joint,
                  __x_ABI_CWindows_CPerception_CPeople_CHandJointKind referenceJoint,
                           __RPC__out __x_ABI_CWindows_CPerception_CPeople_CJointPose * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRelativeJoints )(
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose * This,
                  UINT32 __jointsSize,
                                         __RPC__in_ecount_full(__jointsSize) __x_ABI_CWindows_CPerception_CPeople_CHandJointKind * joints,
                  UINT32 __referenceJointsSize,
                                                  __RPC__in_ecount_full(__referenceJointsSize) __x_ABI_CWindows_CPerception_CPeople_CHandJointKind * referenceJoints,
                  UINT32 __jointPosesSize,
                                              __RPC__out_ecount_full(__jointPosesSize) __x_ABI_CWindows_CPerception_CPeople_CJointPose * jointPoses
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIHandPose
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetJoint(This,coordinateSystem,joint,jointPose,result) )
    ( (This)->lpVtbl->TryGetJoints(This,coordinateSystem,__jointsSize,joints,__jointPosesSize,jointPoses,result) )
    ( (This)->lpVtbl->GetRelativeJoint(This,joint,referenceJoint,result) )
    ( (This)->lpVtbl->GetRelativeJoints(This,__jointsSize,joints,__referenceJointsSize,referenceJoints,__jointPosesSize,jointPoses) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandPose;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHeadPose[] = L"Windows.Perception.People.IHeadPose";
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForwardDirection )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpDirection )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl;
interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_ForwardDirection(This,value) )
    ( (This)->lpVtbl->get_UpDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_EyesPose[] = L"Windows.Perception.People.EyesPose";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HandMeshObserver[] = L"Windows.Perception.People.HandMeshObserver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HandMeshVertexState[] = L"Windows.Perception.People.HandMeshVertexState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HandPose[] = L"Windows.Perception.People.HandPose";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HeadPose[] = L"Windows.Perception.People.HeadPose";
       
       
#pragma clang diagnostic pop

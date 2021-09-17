#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface _IManipulationEvents _IManipulationEvents;
typedef interface IInertiaProcessor IInertiaProcessor;
typedef interface IManipulationProcessor IManipulationProcessor;
typedef class InertiaProcessor InertiaProcessor;
typedef class ManipulationProcessor ManipulationProcessor;
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum MANIPULATION_PROCESSOR_MANIPULATIONS
    {
        MANIPULATION_NONE = 0,
        MANIPULATION_TRANSLATE_X = 0x1,
        MANIPULATION_TRANSLATE_Y = 0x2,
        MANIPULATION_SCALE = 0x4,
        MANIPULATION_ROTATE = 0x8,
        MANIPULATION_ALL = 0xf
    } MANIPULATION_PROCESSOR_MANIPULATIONS;
DEFINE_ENUM_FLAG_OPERATORS(MANIPULATION_PROCESSOR_MANIPULATIONS)
DECLSPEC_SELECTANY extern const float POSITIVE_INFINITY = ((float)(1e308 * 10));
DECLSPEC_SELECTANY extern const float NEGATIVE_INFINITY = ((float)(-1e308 * 10));
DECLSPEC_SELECTANY extern const float NaN = ((float)((1e308 * 10)*0.));
typedef unsigned long MANIPULATOR_ID;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_ManipulationsLib;
EXTERN_C const IID IID__IManipulationEvents;
    typedef struct _IManipulationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IManipulationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IManipulationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IManipulationEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *ManipulationStarted )(
            __RPC__in _IManipulationEvents * This,
                       FLOAT x,
                       FLOAT y);
                           HRESULT ( STDMETHODCALLTYPE *ManipulationDelta )(
            __RPC__in _IManipulationEvents * This,
                       FLOAT x,
                       FLOAT y,
                       FLOAT translationDeltaX,
                       FLOAT translationDeltaY,
                       FLOAT scaleDelta,
                       FLOAT expansionDelta,
                       FLOAT rotationDelta,
                       FLOAT cumulativeTranslationX,
                       FLOAT cumulativeTranslationY,
                       FLOAT cumulativeScale,
                       FLOAT cumulativeExpansion,
                       FLOAT cumulativeRotation);
                           HRESULT ( STDMETHODCALLTYPE *ManipulationCompleted )(
            __RPC__in _IManipulationEvents * This,
                       FLOAT x,
                       FLOAT y,
                       FLOAT cumulativeTranslationX,
                       FLOAT cumulativeTranslationY,
                       FLOAT cumulativeScale,
                       FLOAT cumulativeExpansion,
                       FLOAT cumulativeRotation);
        END_INTERFACE
    } _IManipulationEventsVtbl;
    interface _IManipulationEvents
    {
        CONST_VTBL struct _IManipulationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ManipulationStarted(This,x,y) )
    ( (This)->lpVtbl -> ManipulationDelta(This,x,y,translationDeltaX,translationDeltaY,scaleDelta,expansionDelta,rotationDelta,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) )
    ( (This)->lpVtbl -> ManipulationCompleted(This,x,y,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) )
EXTERN_C const IID IID_IInertiaProcessor;
    typedef struct IInertiaProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInertiaProcessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInertiaProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInertiaProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *get_InitialOriginX )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *x);
        HRESULT ( STDMETHODCALLTYPE *put_InitialOriginX )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT x);
        HRESULT ( STDMETHODCALLTYPE *get_InitialOriginY )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *y);
        HRESULT ( STDMETHODCALLTYPE *put_InitialOriginY )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT y);
        HRESULT ( STDMETHODCALLTYPE *get_InitialVelocityX )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *x);
        HRESULT ( STDMETHODCALLTYPE *put_InitialVelocityX )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT x);
        HRESULT ( STDMETHODCALLTYPE *get_InitialVelocityY )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *y);
        HRESULT ( STDMETHODCALLTYPE *put_InitialVelocityY )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT y);
        HRESULT ( STDMETHODCALLTYPE *get_InitialAngularVelocity )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *velocity);
        HRESULT ( STDMETHODCALLTYPE *put_InitialAngularVelocity )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT velocity);
        HRESULT ( STDMETHODCALLTYPE *get_InitialExpansionVelocity )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *velocity);
        HRESULT ( STDMETHODCALLTYPE *put_InitialExpansionVelocity )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT velocity);
        HRESULT ( STDMETHODCALLTYPE *get_InitialRadius )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *radius);
        HRESULT ( STDMETHODCALLTYPE *put_InitialRadius )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT radius);
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryLeft )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *left);
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryLeft )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT left);
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryTop )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *top);
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryTop )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT top);
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryRight )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *right);
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryRight )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT right);
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryBottom )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *bottom);
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryBottom )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT bottom);
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginLeft )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *left);
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginLeft )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT left);
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginTop )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *top);
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginTop )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT top);
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginRight )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *right);
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginRight )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT right);
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginBottom )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *bottom);
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginBottom )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT bottom);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredDisplacement )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *displacement);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredDisplacement )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT displacement);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredRotation )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *rotation);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredRotation )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT rotation);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansion )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *expansion);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansion )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT expansion);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *deceleration);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT deceleration);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredAngularDeceleration )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *deceleration);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredAngularDeceleration )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT deceleration);
        HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansionDeceleration )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out FLOAT *deceleration);
        HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansionDeceleration )(
            __RPC__in IInertiaProcessor * This,
                       FLOAT deceleration);
        HRESULT ( STDMETHODCALLTYPE *get_InitialTimestamp )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out DWORD *timestamp);
        HRESULT ( STDMETHODCALLTYPE *put_InitialTimestamp )(
            __RPC__in IInertiaProcessor * This,
                       DWORD timestamp);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IInertiaProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *Process )(
            __RPC__in IInertiaProcessor * This,
                        __RPC__out BOOL *completed);
        HRESULT ( STDMETHODCALLTYPE *ProcessTime )(
            __RPC__in IInertiaProcessor * This,
                       DWORD timestamp,
                        __RPC__out BOOL *completed);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IInertiaProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *CompleteTime )(
            __RPC__in IInertiaProcessor * This,
                       DWORD timestamp);
        END_INTERFACE
    } IInertiaProcessorVtbl;
    interface IInertiaProcessor
    {
        CONST_VTBL struct IInertiaProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_InitialOriginX(This,x) )
    ( (This)->lpVtbl -> put_InitialOriginX(This,x) )
    ( (This)->lpVtbl -> get_InitialOriginY(This,y) )
    ( (This)->lpVtbl -> put_InitialOriginY(This,y) )
    ( (This)->lpVtbl -> get_InitialVelocityX(This,x) )
    ( (This)->lpVtbl -> put_InitialVelocityX(This,x) )
    ( (This)->lpVtbl -> get_InitialVelocityY(This,y) )
    ( (This)->lpVtbl -> put_InitialVelocityY(This,y) )
    ( (This)->lpVtbl -> get_InitialAngularVelocity(This,velocity) )
    ( (This)->lpVtbl -> put_InitialAngularVelocity(This,velocity) )
    ( (This)->lpVtbl -> get_InitialExpansionVelocity(This,velocity) )
    ( (This)->lpVtbl -> put_InitialExpansionVelocity(This,velocity) )
    ( (This)->lpVtbl -> get_InitialRadius(This,radius) )
    ( (This)->lpVtbl -> put_InitialRadius(This,radius) )
    ( (This)->lpVtbl -> get_BoundaryLeft(This,left) )
    ( (This)->lpVtbl -> put_BoundaryLeft(This,left) )
    ( (This)->lpVtbl -> get_BoundaryTop(This,top) )
    ( (This)->lpVtbl -> put_BoundaryTop(This,top) )
    ( (This)->lpVtbl -> get_BoundaryRight(This,right) )
    ( (This)->lpVtbl -> put_BoundaryRight(This,right) )
    ( (This)->lpVtbl -> get_BoundaryBottom(This,bottom) )
    ( (This)->lpVtbl -> put_BoundaryBottom(This,bottom) )
    ( (This)->lpVtbl -> get_ElasticMarginLeft(This,left) )
    ( (This)->lpVtbl -> put_ElasticMarginLeft(This,left) )
    ( (This)->lpVtbl -> get_ElasticMarginTop(This,top) )
    ( (This)->lpVtbl -> put_ElasticMarginTop(This,top) )
    ( (This)->lpVtbl -> get_ElasticMarginRight(This,right) )
    ( (This)->lpVtbl -> put_ElasticMarginRight(This,right) )
    ( (This)->lpVtbl -> get_ElasticMarginBottom(This,bottom) )
    ( (This)->lpVtbl -> put_ElasticMarginBottom(This,bottom) )
    ( (This)->lpVtbl -> get_DesiredDisplacement(This,displacement) )
    ( (This)->lpVtbl -> put_DesiredDisplacement(This,displacement) )
    ( (This)->lpVtbl -> get_DesiredRotation(This,rotation) )
    ( (This)->lpVtbl -> put_DesiredRotation(This,rotation) )
    ( (This)->lpVtbl -> get_DesiredExpansion(This,expansion) )
    ( (This)->lpVtbl -> put_DesiredExpansion(This,expansion) )
    ( (This)->lpVtbl -> get_DesiredDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> put_DesiredDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> get_DesiredAngularDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> put_DesiredAngularDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> get_DesiredExpansionDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> put_DesiredExpansionDeceleration(This,deceleration) )
    ( (This)->lpVtbl -> get_InitialTimestamp(This,timestamp) )
    ( (This)->lpVtbl -> put_InitialTimestamp(This,timestamp) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Process(This,completed) )
    ( (This)->lpVtbl -> ProcessTime(This,timestamp,completed) )
    ( (This)->lpVtbl -> Complete(This) )
    ( (This)->lpVtbl -> CompleteTime(This,timestamp) )
EXTERN_C const IID IID_IManipulationProcessor;
    typedef struct IManipulationProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IManipulationProcessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IManipulationProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IManipulationProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *get_SupportedManipulations )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out MANIPULATION_PROCESSOR_MANIPULATIONS *manipulations);
        HRESULT ( STDMETHODCALLTYPE *put_SupportedManipulations )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATION_PROCESSOR_MANIPULATIONS manipulations);
        HRESULT ( STDMETHODCALLTYPE *get_PivotPointX )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *pivotPointX);
        HRESULT ( STDMETHODCALLTYPE *put_PivotPointX )(
            __RPC__in IManipulationProcessor * This,
                       FLOAT pivotPointX);
        HRESULT ( STDMETHODCALLTYPE *get_PivotPointY )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *pivotPointY);
        HRESULT ( STDMETHODCALLTYPE *put_PivotPointY )(
            __RPC__in IManipulationProcessor * This,
                       FLOAT pivotPointY);
        HRESULT ( STDMETHODCALLTYPE *get_PivotRadius )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *pivotRadius);
        HRESULT ( STDMETHODCALLTYPE *put_PivotRadius )(
            __RPC__in IManipulationProcessor * This,
                       FLOAT pivotRadius);
        HRESULT ( STDMETHODCALLTYPE *CompleteManipulation )(
            __RPC__in IManipulationProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *ProcessDown )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y);
        HRESULT ( STDMETHODCALLTYPE *ProcessMove )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y);
        HRESULT ( STDMETHODCALLTYPE *ProcessUp )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y);
        HRESULT ( STDMETHODCALLTYPE *ProcessDownWithTime )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y,
                       DWORD timestamp);
        HRESULT ( STDMETHODCALLTYPE *ProcessMoveWithTime )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y,
                       DWORD timestamp);
        HRESULT ( STDMETHODCALLTYPE *ProcessUpWithTime )(
            __RPC__in IManipulationProcessor * This,
                       MANIPULATOR_ID manipulatorId,
                       FLOAT x,
                       FLOAT y,
                       DWORD timestamp);
        HRESULT ( STDMETHODCALLTYPE *GetVelocityX )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *velocityX);
        HRESULT ( STDMETHODCALLTYPE *GetVelocityY )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *velocityY);
        HRESULT ( STDMETHODCALLTYPE *GetExpansionVelocity )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *expansionVelocity);
        HRESULT ( STDMETHODCALLTYPE *GetAngularVelocity )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *angularVelocity);
        HRESULT ( STDMETHODCALLTYPE *get_MinimumScaleRotateRadius )(
            __RPC__in IManipulationProcessor * This,
                        __RPC__out FLOAT *minRadius);
        HRESULT ( STDMETHODCALLTYPE *put_MinimumScaleRotateRadius )(
            __RPC__in IManipulationProcessor * This,
                       FLOAT minRadius);
        END_INTERFACE
    } IManipulationProcessorVtbl;
    interface IManipulationProcessor
    {
        CONST_VTBL struct IManipulationProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupportedManipulations(This,manipulations) )
    ( (This)->lpVtbl -> put_SupportedManipulations(This,manipulations) )
    ( (This)->lpVtbl -> get_PivotPointX(This,pivotPointX) )
    ( (This)->lpVtbl -> put_PivotPointX(This,pivotPointX) )
    ( (This)->lpVtbl -> get_PivotPointY(This,pivotPointY) )
    ( (This)->lpVtbl -> put_PivotPointY(This,pivotPointY) )
    ( (This)->lpVtbl -> get_PivotRadius(This,pivotRadius) )
    ( (This)->lpVtbl -> put_PivotRadius(This,pivotRadius) )
    ( (This)->lpVtbl -> CompleteManipulation(This) )
    ( (This)->lpVtbl -> ProcessDown(This,manipulatorId,x,y) )
    ( (This)->lpVtbl -> ProcessMove(This,manipulatorId,x,y) )
    ( (This)->lpVtbl -> ProcessUp(This,manipulatorId,x,y) )
    ( (This)->lpVtbl -> ProcessDownWithTime(This,manipulatorId,x,y,timestamp) )
    ( (This)->lpVtbl -> ProcessMoveWithTime(This,manipulatorId,x,y,timestamp) )
    ( (This)->lpVtbl -> ProcessUpWithTime(This,manipulatorId,x,y,timestamp) )
    ( (This)->lpVtbl -> GetVelocityX(This,velocityX) )
    ( (This)->lpVtbl -> GetVelocityY(This,velocityY) )
    ( (This)->lpVtbl -> GetExpansionVelocity(This,expansionVelocity) )
    ( (This)->lpVtbl -> GetAngularVelocity(This,angularVelocity) )
    ( (This)->lpVtbl -> get_MinimumScaleRotateRadius(This,minRadius) )
    ( (This)->lpVtbl -> put_MinimumScaleRotateRadius(This,minRadius) )
EXTERN_C const CLSID CLSID_InertiaProcessor;
class DECLSPEC_UUID("abb27087-4ce0-4e58-a0cb-e24df96814be")
InertiaProcessor;
EXTERN_C const CLSID CLSID_ManipulationProcessor;
class DECLSPEC_UUID("597D4FB0-47FD-4aff-89B9-C6CFAE8CF08E")
ManipulationProcessor;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0001_v0_0_s_ifspec;
}

#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUIAnimationManager IUIAnimationManager;
typedef interface IUIAnimationVariable IUIAnimationVariable;
typedef interface IUIAnimationStoryboard IUIAnimationStoryboard;
typedef interface IUIAnimationTransition IUIAnimationTransition;
typedef interface IUIAnimationManagerEventHandler IUIAnimationManagerEventHandler;
typedef interface IUIAnimationVariableChangeHandler IUIAnimationVariableChangeHandler;
typedef interface IUIAnimationVariableIntegerChangeHandler IUIAnimationVariableIntegerChangeHandler;
typedef interface IUIAnimationStoryboardEventHandler IUIAnimationStoryboardEventHandler;
typedef interface IUIAnimationPriorityComparison IUIAnimationPriorityComparison;
typedef interface IUIAnimationTransitionLibrary IUIAnimationTransitionLibrary;
typedef interface IUIAnimationInterpolator IUIAnimationInterpolator;
typedef interface IUIAnimationTransitionFactory IUIAnimationTransitionFactory;
typedef interface IUIAnimationTimer IUIAnimationTimer;
typedef interface IUIAnimationTimerUpdateHandler IUIAnimationTimerUpdateHandler;
typedef interface IUIAnimationTimerClientEventHandler IUIAnimationTimerClientEventHandler;
typedef interface IUIAnimationTimerEventHandler IUIAnimationTimerEventHandler;
typedef interface IUIAnimationManager2 IUIAnimationManager2;
typedef interface IUIAnimationVariable2 IUIAnimationVariable2;
typedef interface IUIAnimationTransition2 IUIAnimationTransition2;
typedef interface IUIAnimationManagerEventHandler2 IUIAnimationManagerEventHandler2;
typedef interface IUIAnimationVariableChangeHandler2 IUIAnimationVariableChangeHandler2;
typedef interface IUIAnimationVariableIntegerChangeHandler2 IUIAnimationVariableIntegerChangeHandler2;
typedef interface IUIAnimationVariableCurveChangeHandler2 IUIAnimationVariableCurveChangeHandler2;
typedef interface IUIAnimationStoryboardEventHandler2 IUIAnimationStoryboardEventHandler2;
typedef interface IUIAnimationLoopIterationChangeHandler2 IUIAnimationLoopIterationChangeHandler2;
typedef interface IUIAnimationPriorityComparison2 IUIAnimationPriorityComparison2;
typedef interface IUIAnimationTransitionLibrary2 IUIAnimationTransitionLibrary2;
typedef interface IUIAnimationPrimitiveInterpolation IUIAnimationPrimitiveInterpolation;
typedef interface IUIAnimationInterpolator2 IUIAnimationInterpolator2;
typedef interface IUIAnimationTransitionFactory2 IUIAnimationTransitionFactory2;
typedef interface IUIAnimationStoryboard2 IUIAnimationStoryboard2;
typedef class UIAnimationManager UIAnimationManager;
typedef class UIAnimationManager2 UIAnimationManager2;
typedef class UIAnimationTransitionLibrary UIAnimationTransitionLibrary;
typedef class UIAnimationTransitionLibrary2 UIAnimationTransitionLibrary2;
typedef class UIAnimationTransitionFactory UIAnimationTransitionFactory;
typedef class UIAnimationTransitionFactory2 UIAnimationTransitionFactory2;
typedef class UIAnimationTimer UIAnimationTimer;
#include "wtypes.h"
#include "unknwn.h"
#include "dcompanimation.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
typedef DOUBLE UI_ANIMATION_SECONDS;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0001
    {
        UI_ANIMATION_UPDATE_NO_CHANGE = 0,
        UI_ANIMATION_UPDATE_VARIABLES_CHANGED = 1
    } UI_ANIMATION_UPDATE_RESULT;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0002
    {
        UI_ANIMATION_MANAGER_IDLE = 0,
        UI_ANIMATION_MANAGER_BUSY = 1
    } UI_ANIMATION_MANAGER_STATUS;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0003
    {
        UI_ANIMATION_MODE_DISABLED = 0,
        UI_ANIMATION_MODE_SYSTEM_DEFAULT = 1,
        UI_ANIMATION_MODE_ENABLED = 2
    } UI_ANIMATION_MODE;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0004
    {
        UI_ANIMATION_REPEAT_MODE_NORMAL = 0,
        UI_ANIMATION_REPEAT_MODE_ALTERNATE = 1
    } UI_ANIMATION_REPEAT_MODE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationManager;
    typedef struct IUIAnimationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationManager * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateAnimationVariable )(
            IUIAnimationManager * This,
            _In_ DOUBLE initialValue,
            _Outptr_ IUIAnimationVariable **variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *ScheduleTransition )(
            IUIAnimationManager * This,
            _In_ IUIAnimationVariable *variable,
            _In_ IUIAnimationTransition *transition,
            _In_ UI_ANIMATION_SECONDS timeNow);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateStoryboard )(
            IUIAnimationManager * This,
            _Outptr_ IUIAnimationStoryboard **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *FinishAllStoryboards )(
            IUIAnimationManager * This,
            _In_ UI_ANIMATION_SECONDS completionDeadline);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AbandonAllStoryboards )(
            IUIAnimationManager * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IUIAnimationManager * This,
            _In_ UI_ANIMATION_SECONDS timeNow,
            _Out_opt_ UI_ANIMATION_UPDATE_RESULT *updateResult);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetVariableFromTag )(
            IUIAnimationManager * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id,
            _Outptr_ IUIAnimationVariable **variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStoryboardFromTag )(
            IUIAnimationManager * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id,
            _Outptr_ IUIAnimationStoryboard **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IUIAnimationManager * This,
            _Out_ UI_ANIMATION_MANAGER_STATUS *status);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetAnimationMode )(
            IUIAnimationManager * This,
            _In_ UI_ANIMATION_MODE mode);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IUIAnimationManager * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IUIAnimationManager * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetManagerEventHandler )(
            IUIAnimationManager * This,
            _In_opt_ IUIAnimationManagerEventHandler *handler);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetCancelPriorityComparison )(
            IUIAnimationManager * This,
            _In_opt_ IUIAnimationPriorityComparison *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTrimPriorityComparison )(
            IUIAnimationManager * This,
            _In_opt_ IUIAnimationPriorityComparison *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetCompressPriorityComparison )(
            IUIAnimationManager * This,
            _In_opt_ IUIAnimationPriorityComparison *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetConcludePriorityComparison )(
            IUIAnimationManager * This,
            _In_opt_ IUIAnimationPriorityComparison *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetDefaultLongestAcceptableDelay )(
            IUIAnimationManager * This,
            _In_ UI_ANIMATION_SECONDS delay);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IUIAnimationManager * This);
        END_INTERFACE
    } IUIAnimationManagerVtbl;
    interface IUIAnimationManager
    {
        CONST_VTBL struct IUIAnimationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateAnimationVariable(This,initialValue,variable) )
    ( (This)->lpVtbl -> ScheduleTransition(This,variable,transition,timeNow) )
    ( (This)->lpVtbl -> CreateStoryboard(This,storyboard) )
    ( (This)->lpVtbl -> FinishAllStoryboards(This,completionDeadline) )
    ( (This)->lpVtbl -> AbandonAllStoryboards(This) )
    ( (This)->lpVtbl -> Update(This,timeNow,updateResult) )
    ( (This)->lpVtbl -> GetVariableFromTag(This,object,id,variable) )
    ( (This)->lpVtbl -> GetStoryboardFromTag(This,object,id,storyboard) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> SetAnimationMode(This,mode) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> SetManagerEventHandler(This,handler) )
    ( (This)->lpVtbl -> SetCancelPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetTrimPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetCompressPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetConcludePriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetDefaultLongestAcceptableDelay(This,delay) )
    ( (This)->lpVtbl -> Shutdown(This) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0001_0001
    {
        UI_ANIMATION_ROUNDING_NEAREST = 0,
        UI_ANIMATION_ROUNDING_FLOOR = 1,
        UI_ANIMATION_ROUNDING_CEILING = 2
    } UI_ANIMATION_ROUNDING_MODE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationVariable;
    typedef struct IUIAnimationVariableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariable * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IUIAnimationVariable * This,
            _Out_ DOUBLE *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
            IUIAnimationVariable * This,
            _Out_ DOUBLE *finalValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousValue )(
            IUIAnimationVariable * This,
            _Out_ DOUBLE *previousValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetIntegerValue )(
            IUIAnimationVariable * This,
            _Out_ INT32 *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalIntegerValue )(
            IUIAnimationVariable * This,
            _Out_ INT32 *finalValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousIntegerValue )(
            IUIAnimationVariable * This,
            _Out_ INT32 *previousValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetCurrentStoryboard )(
            IUIAnimationVariable * This,
            _Outptr_ IUIAnimationStoryboard **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetLowerBound )(
            IUIAnimationVariable * This,
            _In_ DOUBLE bound);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetUpperBound )(
            IUIAnimationVariable * This,
            _In_ DOUBLE bound);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetRoundingMode )(
            IUIAnimationVariable * This,
            _In_ UI_ANIMATION_ROUNDING_MODE mode);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IUIAnimationVariable * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IUIAnimationVariable * This,
            _Outptr_opt_ IUnknown **object,
            _Out_opt_ UINT32 *id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetVariableChangeHandler )(
            IUIAnimationVariable * This,
            _In_opt_ IUIAnimationVariableChangeHandler *handler);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetVariableIntegerChangeHandler )(
            IUIAnimationVariable * This,
            _In_opt_ IUIAnimationVariableIntegerChangeHandler *handler);
        END_INTERFACE
    } IUIAnimationVariableVtbl;
    interface IUIAnimationVariable
    {
        CONST_VTBL struct IUIAnimationVariableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValue(This,value) )
    ( (This)->lpVtbl -> GetFinalValue(This,finalValue) )
    ( (This)->lpVtbl -> GetPreviousValue(This,previousValue) )
    ( (This)->lpVtbl -> GetIntegerValue(This,value) )
    ( (This)->lpVtbl -> GetFinalIntegerValue(This,finalValue) )
    ( (This)->lpVtbl -> GetPreviousIntegerValue(This,previousValue) )
    ( (This)->lpVtbl -> GetCurrentStoryboard(This,storyboard) )
    ( (This)->lpVtbl -> SetLowerBound(This,bound) )
    ( (This)->lpVtbl -> SetUpperBound(This,bound) )
    ( (This)->lpVtbl -> SetRoundingMode(This,mode) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetTag(This,object,id) )
    ( (This)->lpVtbl -> SetVariableChangeHandler(This,handler) )
    ( (This)->lpVtbl -> SetVariableIntegerChangeHandler(This,handler) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001
    {
        UI_ANIMATION_STORYBOARD_BUILDING = 0,
        UI_ANIMATION_STORYBOARD_SCHEDULED = 1,
        UI_ANIMATION_STORYBOARD_CANCELLED = 2,
        UI_ANIMATION_STORYBOARD_PLAYING = 3,
        UI_ANIMATION_STORYBOARD_TRUNCATED = 4,
        UI_ANIMATION_STORYBOARD_FINISHED = 5,
        UI_ANIMATION_STORYBOARD_READY = 6,
        UI_ANIMATION_STORYBOARD_INSUFFICIENT_PRIORITY = 7
    } UI_ANIMATION_STORYBOARD_STATUS;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0002
    {
        UI_ANIMATION_SCHEDULING_UNEXPECTED_FAILURE = 0,
        UI_ANIMATION_SCHEDULING_INSUFFICIENT_PRIORITY = 1,
        UI_ANIMATION_SCHEDULING_ALREADY_SCHEDULED = 2,
        UI_ANIMATION_SCHEDULING_SUCCEEDED = 3,
        UI_ANIMATION_SCHEDULING_DEFERRED = 4
    } UI_ANIMATION_SCHEDULING_RESULT;
typedef struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003
    {
    int _;
    } *UI_ANIMATION_KEYFRAME;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationStoryboard;
    typedef struct IUIAnimationStoryboardVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationStoryboard * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationStoryboard * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationStoryboard * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransition )(
            IUIAnimationStoryboard * This,
            _In_ IUIAnimationVariable *variable,
            _In_ IUIAnimationTransition *transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddKeyframeAtOffset )(
            IUIAnimationStoryboard * This,
            _In_ UI_ANIMATION_KEYFRAME existingKeyframe,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_ UI_ANIMATION_KEYFRAME *keyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddKeyframeAfterTransition )(
            IUIAnimationStoryboard * This,
            _In_ IUIAnimationTransition *transition,
            _Out_ UI_ANIMATION_KEYFRAME *keyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransitionAtKeyframe )(
            IUIAnimationStoryboard * This,
            _In_ IUIAnimationVariable *variable,
            _In_ IUIAnimationTransition *transition,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransitionBetweenKeyframes )(
            IUIAnimationStoryboard * This,
            _In_ IUIAnimationVariable *variable,
            _In_ IUIAnimationTransition *transition,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe,
            _In_ UI_ANIMATION_KEYFRAME endKeyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *RepeatBetweenKeyframes )(
            IUIAnimationStoryboard * This,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe,
            _In_ UI_ANIMATION_KEYFRAME endKeyframe,
            _In_ INT32 repetitionCount);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *HoldVariable )(
            IUIAnimationStoryboard * This,
            _In_ IUIAnimationVariable *variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetLongestAcceptableDelay )(
            IUIAnimationStoryboard * This,
            _In_ UI_ANIMATION_SECONDS delay);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Schedule )(
            IUIAnimationStoryboard * This,
            _In_ UI_ANIMATION_SECONDS timeNow,
            _Out_opt_ UI_ANIMATION_SCHEDULING_RESULT *schedulingResult);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Conclude )(
            IUIAnimationStoryboard * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Finish )(
            IUIAnimationStoryboard * This,
            _In_ UI_ANIMATION_SECONDS completionDeadline);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Abandon )(
            IUIAnimationStoryboard * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IUIAnimationStoryboard * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IUIAnimationStoryboard * This,
            _Outptr_opt_ IUnknown **object,
            _Out_opt_ UINT32 *id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IUIAnimationStoryboard * This,
            _Out_ UI_ANIMATION_STORYBOARD_STATUS *status);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetElapsedTime )(
            IUIAnimationStoryboard * This,
            _Out_ UI_ANIMATION_SECONDS *elapsedTime);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetStoryboardEventHandler )(
            IUIAnimationStoryboard * This,
            _In_opt_ IUIAnimationStoryboardEventHandler *handler);
        END_INTERFACE
    } IUIAnimationStoryboardVtbl;
    interface IUIAnimationStoryboard
    {
        CONST_VTBL struct IUIAnimationStoryboardVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddTransition(This,variable,transition) )
    ( (This)->lpVtbl -> AddKeyframeAtOffset(This,existingKeyframe,offset,keyframe) )
    ( (This)->lpVtbl -> AddKeyframeAfterTransition(This,transition,keyframe) )
    ( (This)->lpVtbl -> AddTransitionAtKeyframe(This,variable,transition,startKeyframe) )
    ( (This)->lpVtbl -> AddTransitionBetweenKeyframes(This,variable,transition,startKeyframe,endKeyframe) )
    ( (This)->lpVtbl -> RepeatBetweenKeyframes(This,startKeyframe,endKeyframe,repetitionCount) )
    ( (This)->lpVtbl -> HoldVariable(This,variable) )
    ( (This)->lpVtbl -> SetLongestAcceptableDelay(This,delay) )
    ( (This)->lpVtbl -> Schedule(This,timeNow,schedulingResult) )
    ( (This)->lpVtbl -> Conclude(This) )
    ( (This)->lpVtbl -> Finish(This,completionDeadline) )
    ( (This)->lpVtbl -> Abandon(This) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetTag(This,object,id) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> GetElapsedTime(This,elapsedTime) )
    ( (This)->lpVtbl -> SetStoryboardEventHandler(This,handler) )
EXTERN_C const IID IID_IUIAnimationTransition;
    typedef struct IUIAnimationTransitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransition * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransition * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialValue )(
            IUIAnimationTransition * This,
            _In_ DOUBLE value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialVelocity )(
            IUIAnimationTransition * This,
            _In_ DOUBLE velocity);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *IsDurationKnown )(
            IUIAnimationTransition * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IUIAnimationTransition * This,
            _Out_ UI_ANIMATION_SECONDS *duration);
        END_INTERFACE
    } IUIAnimationTransitionVtbl;
    interface IUIAnimationTransition
    {
        CONST_VTBL struct IUIAnimationTransitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInitialValue(This,value) )
    ( (This)->lpVtbl -> SetInitialVelocity(This,velocity) )
    ( (This)->lpVtbl -> IsDurationKnown(This) )
    ( (This)->lpVtbl -> GetDuration(This,duration) )
EXTERN_C const IID IID_IUIAnimationManagerEventHandler;
    typedef struct IUIAnimationManagerEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationManagerEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationManagerEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationManagerEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnManagerStatusChanged )(
            IUIAnimationManagerEventHandler * This,
            _In_ UI_ANIMATION_MANAGER_STATUS newStatus,
            _In_ UI_ANIMATION_MANAGER_STATUS previousStatus);
        END_INTERFACE
    } IUIAnimationManagerEventHandlerVtbl;
    interface IUIAnimationManagerEventHandler
    {
        CONST_VTBL struct IUIAnimationManagerEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnManagerStatusChanged(This,newStatus,previousStatus) )
EXTERN_C const IID IID_IUIAnimationVariableChangeHandler;
    typedef struct IUIAnimationVariableChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariableChangeHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariableChangeHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariableChangeHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnValueChanged )(
            IUIAnimationVariableChangeHandler * This,
            _In_ IUIAnimationStoryboard *storyboard,
            _In_ IUIAnimationVariable *variable,
            _In_ DOUBLE newValue,
            _In_ DOUBLE previousValue);
        END_INTERFACE
    } IUIAnimationVariableChangeHandlerVtbl;
    interface IUIAnimationVariableChangeHandler
    {
        CONST_VTBL struct IUIAnimationVariableChangeHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnValueChanged(This,storyboard,variable,newValue,previousValue) )
EXTERN_C const IID IID_IUIAnimationVariableIntegerChangeHandler;
    typedef struct IUIAnimationVariableIntegerChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariableIntegerChangeHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariableIntegerChangeHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariableIntegerChangeHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnIntegerValueChanged )(
            IUIAnimationVariableIntegerChangeHandler * This,
            _In_ IUIAnimationStoryboard *storyboard,
            _In_ IUIAnimationVariable *variable,
            _In_ INT32 newValue,
            _In_ INT32 previousValue);
        END_INTERFACE
    } IUIAnimationVariableIntegerChangeHandlerVtbl;
    interface IUIAnimationVariableIntegerChangeHandler
    {
        CONST_VTBL struct IUIAnimationVariableIntegerChangeHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnIntegerValueChanged(This,storyboard,variable,newValue,previousValue) )
EXTERN_C const IID IID_IUIAnimationStoryboardEventHandler;
    typedef struct IUIAnimationStoryboardEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationStoryboardEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationStoryboardEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationStoryboardEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnStoryboardStatusChanged )(
            IUIAnimationStoryboardEventHandler * This,
            _In_ IUIAnimationStoryboard *storyboard,
            _In_ UI_ANIMATION_STORYBOARD_STATUS newStatus,
            _In_ UI_ANIMATION_STORYBOARD_STATUS previousStatus);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnStoryboardUpdated )(
            IUIAnimationStoryboardEventHandler * This,
            _In_ IUIAnimationStoryboard *storyboard);
        END_INTERFACE
    } IUIAnimationStoryboardEventHandlerVtbl;
    interface IUIAnimationStoryboardEventHandler
    {
        CONST_VTBL struct IUIAnimationStoryboardEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStoryboardStatusChanged(This,storyboard,newStatus,previousStatus) )
    ( (This)->lpVtbl -> OnStoryboardUpdated(This,storyboard) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0008_0001
    {
        UI_ANIMATION_PRIORITY_EFFECT_FAILURE = 0,
        UI_ANIMATION_PRIORITY_EFFECT_DELAY = 1
    } UI_ANIMATION_PRIORITY_EFFECT;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationPriorityComparison;
    typedef struct IUIAnimationPriorityComparisonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationPriorityComparison * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationPriorityComparison * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationPriorityComparison * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *HasPriority )(
            IUIAnimationPriorityComparison * This,
            _In_ IUIAnimationStoryboard *scheduledStoryboard,
            _In_ IUIAnimationStoryboard *newStoryboard,
            _In_ UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
        END_INTERFACE
    } IUIAnimationPriorityComparisonVtbl;
    interface IUIAnimationPriorityComparison
    {
        CONST_VTBL struct IUIAnimationPriorityComparisonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HasPriority(This,scheduledStoryboard,newStoryboard,priorityEffect) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0009_0001
    {
        UI_ANIMATION_SLOPE_INCREASING = 0,
        UI_ANIMATION_SLOPE_DECREASING = 1
    } UI_ANIMATION_SLOPE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationTransitionLibrary;
    typedef struct IUIAnimationTransitionLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransitionLibrary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransitionLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransitionLibrary * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateInstantaneousTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateConstantTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateDiscreteTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS delay,
            _In_ DOUBLE finalValue,
            _In_ UI_ANIMATION_SECONDS hold,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearTransitionFromSpeed )(
            IUIAnimationTransitionLibrary * This,
            _In_ DOUBLE speed,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromVelocity )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ UI_ANIMATION_SECONDS period,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromRange )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE minimumValue,
            _In_ DOUBLE maximumValue,
            _In_ UI_ANIMATION_SECONDS period,
            _In_ UI_ANIMATION_SLOPE slope,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateAccelerateDecelerateTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE accelerationRatio,
            _In_ DOUBLE decelerationRatio,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateReversalTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateCubicTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE finalVelocity,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSmoothStopTransition )(
            IUIAnimationTransitionLibrary * This,
            _In_ UI_ANIMATION_SECONDS maximumDuration,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateParabolicTransitionFromAcceleration )(
            IUIAnimationTransitionLibrary * This,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE finalVelocity,
            _In_ DOUBLE acceleration,
            _Outptr_ IUIAnimationTransition **transition);
        END_INTERFACE
    } IUIAnimationTransitionLibraryVtbl;
    interface IUIAnimationTransitionLibrary
    {
        CONST_VTBL struct IUIAnimationTransitionLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstantaneousTransition(This,finalValue,transition) )
    ( (This)->lpVtbl -> CreateConstantTransition(This,duration,transition) )
    ( (This)->lpVtbl -> CreateDiscreteTransition(This,delay,finalValue,hold,transition) )
    ( (This)->lpVtbl -> CreateLinearTransition(This,duration,finalValue,transition) )
    ( (This)->lpVtbl -> CreateLinearTransitionFromSpeed(This,speed,finalValue,transition) )
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromVelocity(This,duration,period,transition) )
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromRange(This,duration,minimumValue,maximumValue,period,slope,transition) )
    ( (This)->lpVtbl -> CreateAccelerateDecelerateTransition(This,duration,finalValue,accelerationRatio,decelerationRatio,transition) )
    ( (This)->lpVtbl -> CreateReversalTransition(This,duration,transition) )
    ( (This)->lpVtbl -> CreateCubicTransition(This,duration,finalValue,finalVelocity,transition) )
    ( (This)->lpVtbl -> CreateSmoothStopTransition(This,maximumDuration,finalValue,transition) )
    ( (This)->lpVtbl -> CreateParabolicTransitionFromAcceleration(This,finalValue,finalVelocity,acceleration,transition) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0010_0001
    {
        UI_ANIMATION_DEPENDENCY_NONE = 0,
        UI_ANIMATION_DEPENDENCY_INTERMEDIATE_VALUES = 0x1,
        UI_ANIMATION_DEPENDENCY_FINAL_VALUE = 0x2,
        UI_ANIMATION_DEPENDENCY_FINAL_VELOCITY = 0x4,
        UI_ANIMATION_DEPENDENCY_DURATION = 0x8
    } UI_ANIMATION_DEPENDENCIES;
DEFINE_ENUM_FLAG_OPERATORS(UI_ANIMATION_DEPENDENCIES);
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationInterpolator;
    typedef struct IUIAnimationInterpolatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationInterpolator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationInterpolator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationInterpolator * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialValueAndVelocity )(
            IUIAnimationInterpolator * This,
            _In_ DOUBLE initialValue,
            _In_ DOUBLE initialVelocity);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetDuration )(
            IUIAnimationInterpolator * This,
            _In_ UI_ANIMATION_SECONDS duration);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IUIAnimationInterpolator * This,
            _Out_ UI_ANIMATION_SECONDS *duration);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
            IUIAnimationInterpolator * This,
            _Out_ DOUBLE *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *InterpolateValue )(
            IUIAnimationInterpolator * This,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_ DOUBLE *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *InterpolateVelocity )(
            IUIAnimationInterpolator * This,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_ DOUBLE *velocity);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDependencies )(
            IUIAnimationInterpolator * This,
            _Out_ UI_ANIMATION_DEPENDENCIES *initialValueDependencies,
            _Out_ UI_ANIMATION_DEPENDENCIES *initialVelocityDependencies,
            _Out_ UI_ANIMATION_DEPENDENCIES *durationDependencies);
        END_INTERFACE
    } IUIAnimationInterpolatorVtbl;
    interface IUIAnimationInterpolator
    {
        CONST_VTBL struct IUIAnimationInterpolatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInitialValueAndVelocity(This,initialValue,initialVelocity) )
    ( (This)->lpVtbl -> SetDuration(This,duration) )
    ( (This)->lpVtbl -> GetDuration(This,duration) )
    ( (This)->lpVtbl -> GetFinalValue(This,value) )
    ( (This)->lpVtbl -> InterpolateValue(This,offset,value) )
    ( (This)->lpVtbl -> InterpolateVelocity(This,offset,velocity) )
    ( (This)->lpVtbl -> GetDependencies(This,initialValueDependencies,initialVelocityDependencies,durationDependencies) )
EXTERN_C const IID IID_IUIAnimationTransitionFactory;
    typedef struct IUIAnimationTransitionFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransitionFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransitionFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransitionFactory * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateTransition )(
            IUIAnimationTransitionFactory * This,
            _In_ IUIAnimationInterpolator *interpolator,
            _Outptr_ IUIAnimationTransition **transition);
        END_INTERFACE
    } IUIAnimationTransitionFactoryVtbl;
    interface IUIAnimationTransitionFactory
    {
        CONST_VTBL struct IUIAnimationTransitionFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTransition(This,interpolator,transition) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0012_0001
    {
        UI_ANIMATION_IDLE_BEHAVIOR_CONTINUE = 0,
        UI_ANIMATION_IDLE_BEHAVIOR_DISABLE = 1
    } UI_ANIMATION_IDLE_BEHAVIOR;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationTimer;
    typedef struct IUIAnimationTimerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTimer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTimer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTimer * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTimerUpdateHandler )(
            IUIAnimationTimer * This,
            _In_opt_ IUIAnimationTimerUpdateHandler *updateHandler,
            _In_ UI_ANIMATION_IDLE_BEHAVIOR idleBehavior);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTimerEventHandler )(
            IUIAnimationTimer * This,
            _In_opt_ IUIAnimationTimerEventHandler *handler);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IUIAnimationTimer * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Disable )(
            IUIAnimationTimer * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            IUIAnimationTimer * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IUIAnimationTimer * This,
            _Out_ UI_ANIMATION_SECONDS *seconds);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetFrameRateThreshold )(
            IUIAnimationTimer * This,
            _In_ UINT32 framesPerSecond);
        END_INTERFACE
    } IUIAnimationTimerVtbl;
    interface IUIAnimationTimer
    {
        CONST_VTBL struct IUIAnimationTimerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTimerUpdateHandler(This,updateHandler,idleBehavior) )
    ( (This)->lpVtbl -> SetTimerEventHandler(This,handler) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> Disable(This) )
    ( (This)->lpVtbl -> IsEnabled(This) )
    ( (This)->lpVtbl -> GetTime(This,seconds) )
    ( (This)->lpVtbl -> SetFrameRateThreshold(This,framesPerSecond) )
EXTERN_C const IID IID_IUIAnimationTimerUpdateHandler;
    typedef struct IUIAnimationTimerUpdateHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTimerUpdateHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTimerUpdateHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTimerUpdateHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnUpdate )(
            IUIAnimationTimerUpdateHandler * This,
            _In_ UI_ANIMATION_SECONDS timeNow,
            _Out_ UI_ANIMATION_UPDATE_RESULT *result);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTimerClientEventHandler )(
            IUIAnimationTimerUpdateHandler * This,
            _In_ IUIAnimationTimerClientEventHandler *handler);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *ClearTimerClientEventHandler )(
            IUIAnimationTimerUpdateHandler * This);
        END_INTERFACE
    } IUIAnimationTimerUpdateHandlerVtbl;
    interface IUIAnimationTimerUpdateHandler
    {
        CONST_VTBL struct IUIAnimationTimerUpdateHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdate(This,timeNow,result) )
    ( (This)->lpVtbl -> SetTimerClientEventHandler(This,handler) )
    ( (This)->lpVtbl -> ClearTimerClientEventHandler(This) )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0014_0001
    {
        UI_ANIMATION_TIMER_CLIENT_IDLE = 0,
        UI_ANIMATION_TIMER_CLIENT_BUSY = 1
    } UI_ANIMATION_TIMER_CLIENT_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationTimerClientEventHandler;
    typedef struct IUIAnimationTimerClientEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTimerClientEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTimerClientEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTimerClientEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnTimerClientStatusChanged )(
            IUIAnimationTimerClientEventHandler * This,
            _In_ UI_ANIMATION_TIMER_CLIENT_STATUS newStatus,
            _In_ UI_ANIMATION_TIMER_CLIENT_STATUS previousStatus);
        END_INTERFACE
    } IUIAnimationTimerClientEventHandlerVtbl;
    interface IUIAnimationTimerClientEventHandler
    {
        CONST_VTBL struct IUIAnimationTimerClientEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTimerClientStatusChanged(This,newStatus,previousStatus) )
EXTERN_C const IID IID_IUIAnimationTimerEventHandler;
    typedef struct IUIAnimationTimerEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTimerEventHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTimerEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTimerEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnPreUpdate )(
            IUIAnimationTimerEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnPostUpdate )(
            IUIAnimationTimerEventHandler * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnRenderingTooSlow )(
            IUIAnimationTimerEventHandler * This,
            _In_ UINT32 framesPerSecond);
        END_INTERFACE
    } IUIAnimationTimerEventHandlerVtbl;
    interface IUIAnimationTimerEventHandler
    {
        CONST_VTBL struct IUIAnimationTimerEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPreUpdate(This) )
    ( (This)->lpVtbl -> OnPostUpdate(This) )
    ( (This)->lpVtbl -> OnRenderingTooSlow(This,framesPerSecond) )
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationManager2;
    typedef struct IUIAnimationManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationManager2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationManager2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateAnimationVectorVariable )(
            IUIAnimationManager2 * This,
            _In_reads_(cDimension) const DOUBLE *initialValue,
            _In_ UINT cDimension,
            _Outptr_ IUIAnimationVariable2 **variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateAnimationVariable )(
            IUIAnimationManager2 * This,
            _In_ DOUBLE initialValue,
            _Outptr_ IUIAnimationVariable2 **variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *ScheduleTransition )(
            IUIAnimationManager2 * This,
            _In_ IUIAnimationVariable2 *variable,
            _In_ IUIAnimationTransition2 *transition,
            _In_ UI_ANIMATION_SECONDS timeNow);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateStoryboard )(
            IUIAnimationManager2 * This,
            _Outptr_ IUIAnimationStoryboard2 **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *FinishAllStoryboards )(
            IUIAnimationManager2 * This,
            _In_ UI_ANIMATION_SECONDS completionDeadline);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AbandonAllStoryboards )(
            IUIAnimationManager2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Update )(
            IUIAnimationManager2 * This,
            _In_ UI_ANIMATION_SECONDS timeNow,
            _Out_opt_ UI_ANIMATION_UPDATE_RESULT *updateResult);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetVariableFromTag )(
            IUIAnimationManager2 * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id,
            _Outptr_ IUIAnimationVariable2 **variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStoryboardFromTag )(
            IUIAnimationManager2 * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id,
            _Outptr_ IUIAnimationStoryboard2 **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *EstimateNextEventTime )(
            IUIAnimationManager2 * This,
            _Out_ UI_ANIMATION_SECONDS *seconds);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IUIAnimationManager2 * This,
            _Out_ UI_ANIMATION_MANAGER_STATUS *status);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetAnimationMode )(
            IUIAnimationManager2 * This,
            _In_ UI_ANIMATION_MODE mode);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IUIAnimationManager2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IUIAnimationManager2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetManagerEventHandler )(
            IUIAnimationManager2 * This,
            _In_opt_ IUIAnimationManagerEventHandler2 *handler,
            _In_ BOOL fRegisterForNextAnimationEvent);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetCancelPriorityComparison )(
            IUIAnimationManager2 * This,
            _In_opt_ IUIAnimationPriorityComparison2 *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTrimPriorityComparison )(
            IUIAnimationManager2 * This,
            _In_opt_ IUIAnimationPriorityComparison2 *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetCompressPriorityComparison )(
            IUIAnimationManager2 * This,
            _In_opt_ IUIAnimationPriorityComparison2 *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetConcludePriorityComparison )(
            IUIAnimationManager2 * This,
            _In_opt_ IUIAnimationPriorityComparison2 *comparison);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetDefaultLongestAcceptableDelay )(
            IUIAnimationManager2 * This,
            _In_ UI_ANIMATION_SECONDS delay);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IUIAnimationManager2 * This);
        END_INTERFACE
    } IUIAnimationManager2Vtbl;
    interface IUIAnimationManager2
    {
        CONST_VTBL struct IUIAnimationManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateAnimationVectorVariable(This,initialValue,cDimension,variable) )
    ( (This)->lpVtbl -> CreateAnimationVariable(This,initialValue,variable) )
    ( (This)->lpVtbl -> ScheduleTransition(This,variable,transition,timeNow) )
    ( (This)->lpVtbl -> CreateStoryboard(This,storyboard) )
    ( (This)->lpVtbl -> FinishAllStoryboards(This,completionDeadline) )
    ( (This)->lpVtbl -> AbandonAllStoryboards(This) )
    ( (This)->lpVtbl -> Update(This,timeNow,updateResult) )
    ( (This)->lpVtbl -> GetVariableFromTag(This,object,id,variable) )
    ( (This)->lpVtbl -> GetStoryboardFromTag(This,object,id,storyboard) )
    ( (This)->lpVtbl -> EstimateNextEventTime(This,seconds) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> SetAnimationMode(This,mode) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> SetManagerEventHandler(This,handler,fRegisterForNextAnimationEvent) )
    ( (This)->lpVtbl -> SetCancelPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetTrimPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetCompressPriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetConcludePriorityComparison(This,comparison) )
    ( (This)->lpVtbl -> SetDefaultLongestAcceptableDelay(This,delay) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_C const IID IID_IUIAnimationVariable2;
    typedef struct IUIAnimationVariable2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariable2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariable2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariable2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDimension )(
            IUIAnimationVariable2 * This,
            _Out_ UINT *dimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IUIAnimationVariable2 * This,
            _Out_ DOUBLE *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) DOUBLE *value,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetCurve )(
            IUIAnimationVariable2 * This,
            _In_ IDCompositionAnimation *animation);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetVectorCurve )(
            IUIAnimationVariable2 * This,
            _In_reads_(cDimension) IDCompositionAnimation **animation,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
            IUIAnimationVariable2 * This,
            _Out_ DOUBLE *finalValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) DOUBLE *finalValue,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousValue )(
            IUIAnimationVariable2 * This,
            _Out_ DOUBLE *previousValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) DOUBLE *previousValue,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetIntegerValue )(
            IUIAnimationVariable2 * This,
            _Out_ INT32 *value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetIntegerVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) INT32 *value,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalIntegerValue )(
            IUIAnimationVariable2 * This,
            _Out_ INT32 *finalValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalIntegerVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) INT32 *finalValue,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousIntegerValue )(
            IUIAnimationVariable2 * This,
            _Out_ INT32 *previousValue);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPreviousIntegerVectorValue )(
            IUIAnimationVariable2 * This,
            _Out_writes_(cDimension) INT32 *previousValue,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetCurrentStoryboard )(
            IUIAnimationVariable2 * This,
            _Outptr_ IUIAnimationStoryboard2 **storyboard);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetLowerBound )(
            IUIAnimationVariable2 * This,
            _In_ DOUBLE bound);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetLowerBoundVector )(
            IUIAnimationVariable2 * This,
            _In_reads_(cDimension) const DOUBLE *bound,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetUpperBound )(
            IUIAnimationVariable2 * This,
            _In_ DOUBLE bound);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetUpperBoundVector )(
            IUIAnimationVariable2 * This,
            _In_reads_(cDimension) const DOUBLE *bound,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetRoundingMode )(
            IUIAnimationVariable2 * This,
            _In_ UI_ANIMATION_ROUNDING_MODE mode);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IUIAnimationVariable2 * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IUIAnimationVariable2 * This,
            _Outptr_opt_ IUnknown **object,
            _Out_opt_ UINT32 *id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetVariableChangeHandler )(
            IUIAnimationVariable2 * This,
            _In_opt_ IUIAnimationVariableChangeHandler2 *handler,
            _In_ BOOL fRegisterForNextAnimationEvent);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetVariableIntegerChangeHandler )(
            IUIAnimationVariable2 * This,
            _In_opt_ IUIAnimationVariableIntegerChangeHandler2 *handler,
            _In_ BOOL fRegisterForNextAnimationEvent);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetVariableCurveChangeHandler )(
            IUIAnimationVariable2 * This,
            _In_opt_ IUIAnimationVariableCurveChangeHandler2 *handler);
        END_INTERFACE
    } IUIAnimationVariable2Vtbl;
    interface IUIAnimationVariable2
    {
        CONST_VTBL struct IUIAnimationVariable2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDimension(This,dimension) )
    ( (This)->lpVtbl -> GetValue(This,value) )
    ( (This)->lpVtbl -> GetVectorValue(This,value,cDimension) )
    ( (This)->lpVtbl -> GetCurve(This,animation) )
    ( (This)->lpVtbl -> GetVectorCurve(This,animation,cDimension) )
    ( (This)->lpVtbl -> GetFinalValue(This,finalValue) )
    ( (This)->lpVtbl -> GetFinalVectorValue(This,finalValue,cDimension) )
    ( (This)->lpVtbl -> GetPreviousValue(This,previousValue) )
    ( (This)->lpVtbl -> GetPreviousVectorValue(This,previousValue,cDimension) )
    ( (This)->lpVtbl -> GetIntegerValue(This,value) )
    ( (This)->lpVtbl -> GetIntegerVectorValue(This,value,cDimension) )
    ( (This)->lpVtbl -> GetFinalIntegerValue(This,finalValue) )
    ( (This)->lpVtbl -> GetFinalIntegerVectorValue(This,finalValue,cDimension) )
    ( (This)->lpVtbl -> GetPreviousIntegerValue(This,previousValue) )
    ( (This)->lpVtbl -> GetPreviousIntegerVectorValue(This,previousValue,cDimension) )
    ( (This)->lpVtbl -> GetCurrentStoryboard(This,storyboard) )
    ( (This)->lpVtbl -> SetLowerBound(This,bound) )
    ( (This)->lpVtbl -> SetLowerBoundVector(This,bound,cDimension) )
    ( (This)->lpVtbl -> SetUpperBound(This,bound) )
    ( (This)->lpVtbl -> SetUpperBoundVector(This,bound,cDimension) )
    ( (This)->lpVtbl -> SetRoundingMode(This,mode) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetTag(This,object,id) )
    ( (This)->lpVtbl -> SetVariableChangeHandler(This,handler,fRegisterForNextAnimationEvent) )
    ( (This)->lpVtbl -> SetVariableIntegerChangeHandler(This,handler,fRegisterForNextAnimationEvent) )
    ( (This)->lpVtbl -> SetVariableCurveChangeHandler(This,handler) )
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationTransition2;
    typedef struct IUIAnimationTransition2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransition2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransition2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransition2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDimension )(
            IUIAnimationTransition2 * This,
            _Out_ UINT *dimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialValue )(
            IUIAnimationTransition2 * This,
            _In_ DOUBLE value);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialVectorValue )(
            IUIAnimationTransition2 * This,
            _In_reads_(cDimension) const DOUBLE *value,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialVelocity )(
            IUIAnimationTransition2 * This,
            _In_ DOUBLE velocity);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialVectorVelocity )(
            IUIAnimationTransition2 * This,
            _In_reads_(cDimension) const DOUBLE *velocity,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *IsDurationKnown )(
            IUIAnimationTransition2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IUIAnimationTransition2 * This,
            _Out_ UI_ANIMATION_SECONDS *duration);
        END_INTERFACE
    } IUIAnimationTransition2Vtbl;
    interface IUIAnimationTransition2
    {
        CONST_VTBL struct IUIAnimationTransition2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDimension(This,dimension) )
    ( (This)->lpVtbl -> SetInitialValue(This,value) )
    ( (This)->lpVtbl -> SetInitialVectorValue(This,value,cDimension) )
    ( (This)->lpVtbl -> SetInitialVelocity(This,velocity) )
    ( (This)->lpVtbl -> SetInitialVectorVelocity(This,velocity,cDimension) )
    ( (This)->lpVtbl -> IsDurationKnown(This) )
    ( (This)->lpVtbl -> GetDuration(This,duration) )
EXTERN_C const IID IID_IUIAnimationManagerEventHandler2;
    typedef struct IUIAnimationManagerEventHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationManagerEventHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationManagerEventHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationManagerEventHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnManagerStatusChanged )(
            IUIAnimationManagerEventHandler2 * This,
            _In_ UI_ANIMATION_MANAGER_STATUS newStatus,
            _In_ UI_ANIMATION_MANAGER_STATUS previousStatus);
        END_INTERFACE
    } IUIAnimationManagerEventHandler2Vtbl;
    interface IUIAnimationManagerEventHandler2
    {
        CONST_VTBL struct IUIAnimationManagerEventHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnManagerStatusChanged(This,newStatus,previousStatus) )
EXTERN_C const IID IID_IUIAnimationVariableChangeHandler2;
    typedef struct IUIAnimationVariableChangeHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariableChangeHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariableChangeHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariableChangeHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnValueChanged )(
            IUIAnimationVariableChangeHandler2 * This,
            _In_ IUIAnimationStoryboard2 *storyboard,
            _In_ IUIAnimationVariable2 *variable,
            _In_reads_(cDimension) DOUBLE *newValue,
            _In_reads_(cDimension) DOUBLE *previousValue,
            _In_ UINT cDimension);
        END_INTERFACE
    } IUIAnimationVariableChangeHandler2Vtbl;
    interface IUIAnimationVariableChangeHandler2
    {
        CONST_VTBL struct IUIAnimationVariableChangeHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnValueChanged(This,storyboard,variable,newValue,previousValue,cDimension) )
EXTERN_C const IID IID_IUIAnimationVariableIntegerChangeHandler2;
    typedef struct IUIAnimationVariableIntegerChangeHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariableIntegerChangeHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariableIntegerChangeHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariableIntegerChangeHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnIntegerValueChanged )(
            IUIAnimationVariableIntegerChangeHandler2 * This,
            _In_ IUIAnimationStoryboard2 *storyboard,
            _In_ IUIAnimationVariable2 *variable,
            _In_reads_(cDimension) INT32 *newValue,
            _In_reads_(cDimension) INT32 *previousValue,
            _In_ UINT cDimension);
        END_INTERFACE
    } IUIAnimationVariableIntegerChangeHandler2Vtbl;
    interface IUIAnimationVariableIntegerChangeHandler2
    {
        CONST_VTBL struct IUIAnimationVariableIntegerChangeHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnIntegerValueChanged(This,storyboard,variable,newValue,previousValue,cDimension) )
EXTERN_C const IID IID_IUIAnimationVariableCurveChangeHandler2;
    typedef struct IUIAnimationVariableCurveChangeHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationVariableCurveChangeHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationVariableCurveChangeHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationVariableCurveChangeHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnCurveChanged )(
            IUIAnimationVariableCurveChangeHandler2 * This,
            _In_ IUIAnimationVariable2 *variable);
        END_INTERFACE
    } IUIAnimationVariableCurveChangeHandler2Vtbl;
    interface IUIAnimationVariableCurveChangeHandler2
    {
        CONST_VTBL struct IUIAnimationVariableCurveChangeHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCurveChanged(This,variable) )
EXTERN_C const IID IID_IUIAnimationStoryboardEventHandler2;
    typedef struct IUIAnimationStoryboardEventHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationStoryboardEventHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationStoryboardEventHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationStoryboardEventHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnStoryboardStatusChanged )(
            IUIAnimationStoryboardEventHandler2 * This,
            _In_ IUIAnimationStoryboard2 *storyboard,
            _In_ UI_ANIMATION_STORYBOARD_STATUS newStatus,
            _In_ UI_ANIMATION_STORYBOARD_STATUS previousStatus);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnStoryboardUpdated )(
            IUIAnimationStoryboardEventHandler2 * This,
            _In_ IUIAnimationStoryboard2 *storyboard);
        END_INTERFACE
    } IUIAnimationStoryboardEventHandler2Vtbl;
    interface IUIAnimationStoryboardEventHandler2
    {
        CONST_VTBL struct IUIAnimationStoryboardEventHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStoryboardStatusChanged(This,storyboard,newStatus,previousStatus) )
    ( (This)->lpVtbl -> OnStoryboardUpdated(This,storyboard) )
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IUIAnimationLoopIterationChangeHandler2;
    typedef struct IUIAnimationLoopIterationChangeHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationLoopIterationChangeHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationLoopIterationChangeHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationLoopIterationChangeHandler2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *OnLoopIterationChanged )(
            IUIAnimationLoopIterationChangeHandler2 * This,
            _In_ IUIAnimationStoryboard2 *storyboard,
            _In_ UINT_PTR id,
            _In_ UINT32 newIterationCount,
            _In_ UINT32 oldIterationCount);
        END_INTERFACE
    } IUIAnimationLoopIterationChangeHandler2Vtbl;
    interface IUIAnimationLoopIterationChangeHandler2
    {
        CONST_VTBL struct IUIAnimationLoopIterationChangeHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLoopIterationChanged(This,storyboard,id,newIterationCount,oldIterationCount) )
EXTERN_C const IID IID_IUIAnimationPriorityComparison2;
    typedef struct IUIAnimationPriorityComparison2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationPriorityComparison2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationPriorityComparison2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationPriorityComparison2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *HasPriority )(
            IUIAnimationPriorityComparison2 * This,
            _In_ IUIAnimationStoryboard2 *scheduledStoryboard,
            _In_ IUIAnimationStoryboard2 *newStoryboard,
            _In_ UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
        END_INTERFACE
    } IUIAnimationPriorityComparison2Vtbl;
    interface IUIAnimationPriorityComparison2
    {
        CONST_VTBL struct IUIAnimationPriorityComparison2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HasPriority(This,scheduledStoryboard,newStoryboard,priorityEffect) )
EXTERN_C const IID IID_IUIAnimationTransitionLibrary2;
    typedef struct IUIAnimationTransitionLibrary2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransitionLibrary2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransitionLibrary2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransitionLibrary2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateInstantaneousTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateInstantaneousVectorTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_ UINT cDimension,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateConstantTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateDiscreteTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS delay,
            _In_ DOUBLE finalValue,
            _In_ UI_ANIMATION_SECONDS hold,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateDiscreteVectorTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS delay,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_ UINT cDimension,
            _In_ UI_ANIMATION_SECONDS hold,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearVectorTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_ UINT cDimension,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearTransitionFromSpeed )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ DOUBLE speed,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateLinearVectorTransitionFromSpeed )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ DOUBLE speed,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_ UINT cDimension,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromVelocity )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ UI_ANIMATION_SECONDS period,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromRange )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE minimumValue,
            _In_ DOUBLE maximumValue,
            _In_ UI_ANIMATION_SECONDS period,
            _In_ UI_ANIMATION_SLOPE slope,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateAccelerateDecelerateTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE accelerationRatio,
            _In_ DOUBLE decelerationRatio,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateReversalTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateCubicTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE finalVelocity,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateCubicVectorTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_reads_(cDimension) const DOUBLE *finalVelocity,
            _In_ UINT cDimension,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateSmoothStopTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS maximumDuration,
            _In_ DOUBLE finalValue,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateParabolicTransitionFromAcceleration )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE finalVelocity,
            _In_ DOUBLE acceleration,
            _Outptr_ IUIAnimationTransition2 **transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateCubicBezierLinearTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_ DOUBLE finalValue,
            _In_ DOUBLE x1,
            _In_ DOUBLE y1,
            _In_ DOUBLE x2,
            _In_ DOUBLE y2,
            _Outptr_ IUIAnimationTransition2 **ppTransition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateCubicBezierLinearVectorTransition )(
            IUIAnimationTransitionLibrary2 * This,
            _In_ UI_ANIMATION_SECONDS duration,
            _In_reads_(cDimension) const DOUBLE *finalValue,
            _In_ UINT cDimension,
            _In_ DOUBLE x1,
            _In_ DOUBLE y1,
            _In_ DOUBLE x2,
            _In_ DOUBLE y2,
            _Outptr_ IUIAnimationTransition2 **ppTransition);
        END_INTERFACE
    } IUIAnimationTransitionLibrary2Vtbl;
    interface IUIAnimationTransitionLibrary2
    {
        CONST_VTBL struct IUIAnimationTransitionLibrary2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstantaneousTransition(This,finalValue,transition) )
    ( (This)->lpVtbl -> CreateInstantaneousVectorTransition(This,finalValue,cDimension,transition) )
    ( (This)->lpVtbl -> CreateConstantTransition(This,duration,transition) )
    ( (This)->lpVtbl -> CreateDiscreteTransition(This,delay,finalValue,hold,transition) )
    ( (This)->lpVtbl -> CreateDiscreteVectorTransition(This,delay,finalValue,cDimension,hold,transition) )
    ( (This)->lpVtbl -> CreateLinearTransition(This,duration,finalValue,transition) )
    ( (This)->lpVtbl -> CreateLinearVectorTransition(This,duration,finalValue,cDimension,transition) )
    ( (This)->lpVtbl -> CreateLinearTransitionFromSpeed(This,speed,finalValue,transition) )
    ( (This)->lpVtbl -> CreateLinearVectorTransitionFromSpeed(This,speed,finalValue,cDimension,transition) )
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromVelocity(This,duration,period,transition) )
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromRange(This,duration,minimumValue,maximumValue,period,slope,transition) )
    ( (This)->lpVtbl -> CreateAccelerateDecelerateTransition(This,duration,finalValue,accelerationRatio,decelerationRatio,transition) )
    ( (This)->lpVtbl -> CreateReversalTransition(This,duration,transition) )
    ( (This)->lpVtbl -> CreateCubicTransition(This,duration,finalValue,finalVelocity,transition) )
    ( (This)->lpVtbl -> CreateCubicVectorTransition(This,duration,finalValue,finalVelocity,cDimension,transition) )
    ( (This)->lpVtbl -> CreateSmoothStopTransition(This,maximumDuration,finalValue,transition) )
    ( (This)->lpVtbl -> CreateParabolicTransitionFromAcceleration(This,finalValue,finalVelocity,acceleration,transition) )
    ( (This)->lpVtbl -> CreateCubicBezierLinearTransition(This,duration,finalValue,x1,y1,x2,y2,ppTransition) )
    ( (This)->lpVtbl -> CreateCubicBezierLinearVectorTransition(This,duration,finalValue,cDimension,x1,y1,x2,y2,ppTransition) )
EXTERN_C const IID IID_IUIAnimationPrimitiveInterpolation;
    typedef struct IUIAnimationPrimitiveInterpolationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationPrimitiveInterpolation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationPrimitiveInterpolation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationPrimitiveInterpolation * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddCubic )(
            IUIAnimationPrimitiveInterpolation * This,
            _In_ UINT dimension,
            _In_ UI_ANIMATION_SECONDS beginOffset,
            _In_ FLOAT constantCoefficient,
            _In_ FLOAT linearCoefficient,
            _In_ FLOAT quadraticCoefficient,
            _In_ FLOAT cubicCoefficient);
        HRESULT ( STDMETHODCALLTYPE *AddSinusoidal )(
            IUIAnimationPrimitiveInterpolation * This,
            _In_ UINT dimension,
            _In_ UI_ANIMATION_SECONDS beginOffset,
            _In_ FLOAT bias,
            _In_ FLOAT amplitude,
            _In_ FLOAT frequency,
            _In_ FLOAT phase);
        END_INTERFACE
    } IUIAnimationPrimitiveInterpolationVtbl;
    interface IUIAnimationPrimitiveInterpolation
    {
        CONST_VTBL struct IUIAnimationPrimitiveInterpolationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddCubic(This,dimension,beginOffset,constantCoefficient,linearCoefficient,quadraticCoefficient,cubicCoefficient) )
    ( (This)->lpVtbl -> AddSinusoidal(This,dimension,beginOffset,bias,amplitude,frequency,phase) )
EXTERN_C const IID IID_IUIAnimationInterpolator2;
    typedef struct IUIAnimationInterpolator2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationInterpolator2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationInterpolator2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationInterpolator2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDimension )(
            IUIAnimationInterpolator2 * This,
            _Out_ UINT *dimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetInitialValueAndVelocity )(
            IUIAnimationInterpolator2 * This,
            _In_reads_(cDimension) DOUBLE *initialValue,
            _In_reads_(cDimension) DOUBLE *initialVelocity,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetDuration )(
            IUIAnimationInterpolator2 * This,
            _In_ UI_ANIMATION_SECONDS duration);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IUIAnimationInterpolator2 * This,
            _Out_ UI_ANIMATION_SECONDS *duration);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
            IUIAnimationInterpolator2 * This,
            _Out_writes_(cDimension) DOUBLE *value,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *InterpolateValue )(
            IUIAnimationInterpolator2 * This,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_writes_(cDimension) DOUBLE *value,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *InterpolateVelocity )(
            IUIAnimationInterpolator2 * This,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_writes_(cDimension) DOUBLE *velocity,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetPrimitiveInterpolation )(
            IUIAnimationInterpolator2 * This,
            _In_ IUIAnimationPrimitiveInterpolation *interpolation,
            _In_ UINT cDimension);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetDependencies )(
            IUIAnimationInterpolator2 * This,
            _Out_ UI_ANIMATION_DEPENDENCIES *initialValueDependencies,
            _Out_ UI_ANIMATION_DEPENDENCIES *initialVelocityDependencies,
            _Out_ UI_ANIMATION_DEPENDENCIES *durationDependencies);
        END_INTERFACE
    } IUIAnimationInterpolator2Vtbl;
    interface IUIAnimationInterpolator2
    {
        CONST_VTBL struct IUIAnimationInterpolator2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDimension(This,dimension) )
    ( (This)->lpVtbl -> SetInitialValueAndVelocity(This,initialValue,initialVelocity,cDimension) )
    ( (This)->lpVtbl -> SetDuration(This,duration) )
    ( (This)->lpVtbl -> GetDuration(This,duration) )
    ( (This)->lpVtbl -> GetFinalValue(This,value,cDimension) )
    ( (This)->lpVtbl -> InterpolateValue(This,offset,value,cDimension) )
    ( (This)->lpVtbl -> InterpolateVelocity(This,offset,velocity,cDimension) )
    ( (This)->lpVtbl -> GetPrimitiveInterpolation(This,interpolation,cDimension) )
    ( (This)->lpVtbl -> GetDependencies(This,initialValueDependencies,initialVelocityDependencies,durationDependencies) )
EXTERN_C const IID IID_IUIAnimationTransitionFactory2;
    typedef struct IUIAnimationTransitionFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationTransitionFactory2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationTransitionFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationTransitionFactory2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *CreateTransition )(
            IUIAnimationTransitionFactory2 * This,
            _In_ IUIAnimationInterpolator2 *interpolator,
            _Outptr_ IUIAnimationTransition2 **transition);
        END_INTERFACE
    } IUIAnimationTransitionFactory2Vtbl;
    interface IUIAnimationTransitionFactory2
    {
        CONST_VTBL struct IUIAnimationTransitionFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTransition(This,interpolator,transition) )
EXTERN_C const IID IID_IUIAnimationStoryboard2;
    typedef struct IUIAnimationStoryboard2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIAnimationStoryboard2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIAnimationStoryboard2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIAnimationStoryboard2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransition )(
            IUIAnimationStoryboard2 * This,
            _In_ IUIAnimationVariable2 *variable,
            _In_ IUIAnimationTransition2 *transition);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddKeyframeAtOffset )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_KEYFRAME existingKeyframe,
            _In_ UI_ANIMATION_SECONDS offset,
            _Out_ UI_ANIMATION_KEYFRAME *keyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddKeyframeAfterTransition )(
            IUIAnimationStoryboard2 * This,
            _In_ IUIAnimationTransition2 *transition,
            _Out_ UI_ANIMATION_KEYFRAME *keyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransitionAtKeyframe )(
            IUIAnimationStoryboard2 * This,
            _In_ IUIAnimationVariable2 *variable,
            _In_ IUIAnimationTransition2 *transition,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *AddTransitionBetweenKeyframes )(
            IUIAnimationStoryboard2 * This,
            _In_ IUIAnimationVariable2 *variable,
            _In_ IUIAnimationTransition2 *transition,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe,
            _In_ UI_ANIMATION_KEYFRAME endKeyframe);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *RepeatBetweenKeyframes )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_KEYFRAME startKeyframe,
            _In_ UI_ANIMATION_KEYFRAME endKeyframe,
            _In_ DOUBLE cRepetition,
            _In_ UI_ANIMATION_REPEAT_MODE repeatMode,
            _In_opt_ IUIAnimationLoopIterationChangeHandler2 *pIterationChangeHandler,
            _In_ UINT_PTR id,
            _In_ BOOL fRegisterForNextAnimationEvent);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *HoldVariable )(
            IUIAnimationStoryboard2 * This,
            _In_ IUIAnimationVariable2 *variable);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetLongestAcceptableDelay )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_SECONDS delay);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetSkipDuration )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_SECONDS secondsDuration);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Schedule )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_SECONDS timeNow,
            _Out_opt_ UI_ANIMATION_SCHEDULING_RESULT *schedulingResult);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Conclude )(
            IUIAnimationStoryboard2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Finish )(
            IUIAnimationStoryboard2 * This,
            _In_ UI_ANIMATION_SECONDS completionDeadline);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *Abandon )(
            IUIAnimationStoryboard2 * This);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetTag )(
            IUIAnimationStoryboard2 * This,
            _In_opt_ IUnknown *object,
            _In_ UINT32 id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IUIAnimationStoryboard2 * This,
            _Outptr_opt_ IUnknown **object,
            _Out_opt_ UINT32 *id);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IUIAnimationStoryboard2 * This,
            _Out_ UI_ANIMATION_STORYBOARD_STATUS *status);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *GetElapsedTime )(
            IUIAnimationStoryboard2 * This,
            _Out_ UI_ANIMATION_SECONDS *elapsedTime);
        _Check_return_
        HRESULT ( STDMETHODCALLTYPE *SetStoryboardEventHandler )(
            IUIAnimationStoryboard2 * This,
            _In_opt_ IUIAnimationStoryboardEventHandler2 *handler,
            _In_ BOOL fRegisterStatusChangeForNextAnimationEvent,
            _In_ BOOL fRegisterUpdateForNextAnimationEvent);
        END_INTERFACE
    } IUIAnimationStoryboard2Vtbl;
    interface IUIAnimationStoryboard2
    {
        CONST_VTBL struct IUIAnimationStoryboard2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddTransition(This,variable,transition) )
    ( (This)->lpVtbl -> AddKeyframeAtOffset(This,existingKeyframe,offset,keyframe) )
    ( (This)->lpVtbl -> AddKeyframeAfterTransition(This,transition,keyframe) )
    ( (This)->lpVtbl -> AddTransitionAtKeyframe(This,variable,transition,startKeyframe) )
    ( (This)->lpVtbl -> AddTransitionBetweenKeyframes(This,variable,transition,startKeyframe,endKeyframe) )
    ( (This)->lpVtbl -> RepeatBetweenKeyframes(This,startKeyframe,endKeyframe,cRepetition,repeatMode,pIterationChangeHandler,id,fRegisterForNextAnimationEvent) )
    ( (This)->lpVtbl -> HoldVariable(This,variable) )
    ( (This)->lpVtbl -> SetLongestAcceptableDelay(This,delay) )
    ( (This)->lpVtbl -> SetSkipDuration(This,secondsDuration) )
    ( (This)->lpVtbl -> Schedule(This,timeNow,schedulingResult) )
    ( (This)->lpVtbl -> Conclude(This) )
    ( (This)->lpVtbl -> Finish(This,completionDeadline) )
    ( (This)->lpVtbl -> Abandon(This) )
    ( (This)->lpVtbl -> SetTag(This,object,id) )
    ( (This)->lpVtbl -> GetTag(This,object,id) )
    ( (This)->lpVtbl -> GetStatus(This,status) )
    ( (This)->lpVtbl -> GetElapsedTime(This,elapsedTime) )
    ( (This)->lpVtbl -> SetStoryboardEventHandler(This,handler,fRegisterStatusChangeForNextAnimationEvent,fRegisterUpdateForNextAnimationEvent) )
EXTERN_C const IID LIBID_UIAnimation;
EXTERN_C const CLSID CLSID_UIAnimationManager;
class DECLSPEC_UUID("4C1FC63A-695C-47E8-A339-1A194BE3D0B8")
UIAnimationManager;
EXTERN_C const CLSID CLSID_UIAnimationManager2;
class DECLSPEC_UUID("D25D8842-8884-4A4A-B321-091314379BDD")
UIAnimationManager2;
EXTERN_C const CLSID CLSID_UIAnimationTransitionLibrary;
class DECLSPEC_UUID("1D6322AD-AA85-4EF5-A828-86D71067D145")
UIAnimationTransitionLibrary;
EXTERN_C const CLSID CLSID_UIAnimationTransitionLibrary2;
class DECLSPEC_UUID("812F944A-C5C8-4CD9-B0A6-B3DA802F228D")
UIAnimationTransitionLibrary2;
EXTERN_C const CLSID CLSID_UIAnimationTransitionFactory;
class DECLSPEC_UUID("8A9B1CDD-FCD7-419c-8B44-42FD17DB1887")
UIAnimationTransitionFactory;
EXTERN_C const CLSID CLSID_UIAnimationTransitionFactory2;
class DECLSPEC_UUID("84302F97-7F7B-4040-B190-72AC9D18E420")
UIAnimationTransitionFactory2;
EXTERN_C const CLSID CLSID_UIAnimationTimer;
class DECLSPEC_UUID("BFCD4A0C-06B6-4384-B768-0DAA792C380E")
UIAnimationTimer;
}

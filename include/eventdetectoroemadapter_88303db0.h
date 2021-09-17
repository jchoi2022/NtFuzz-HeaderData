#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEventDetectorOemAdapter IEventDetectorOemAdapter;
#include "unknwn.h"
#include "objidl.h"
#include "mmreg.h"
extern "C"{
#include "ks.h"
#include "ksmedia.h"
#include "mmreg.h"
typedef struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0001
    {
    ULONG Size;
    GUID PatternType;
    } SOUNDDETECTOR_PATTERNHEADER;
typedef GUID DETECTIONEVENTID;
typedef GUID EVENTPROVIDERID;
typedef unsigned short LANGID;
typedef
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0002
    {
        EVENTFEATURES_NoEventFeatures = 0,
        EVENTFEATURES_SupportsUserTraining = 0x1,
        EVENTFEATURES_SupportUserCustomization = 0x2,
        EVENTFEATURES_ArmPatternRequiresArmState = 0x4,
        EVENTFEATURES_SupportsSingleLanguage = 0x8
    } EVENTFEATURES;
typedef struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0003
    {
    DETECTIONEVENTID EventId;
    EVENTFEATURES EventFeat;
    EVENTPROVIDERID ProviderId;
    WCHAR DisplayName[ 100 ];
    BOOL UserModelValid;
    } DETECTIONEVENT;
typedef struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0004
    {
    DETECTIONEVENT Event;
    LANGID LangId;
    ULONG UserId;
    BOOL Armed;
    } DETECTIONEVENTSELECTOR;
typedef
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0005
    {
        EVENTACTIONTYPE_Accept = 0,
        EVENTACTIONTYPE_Reject = 1,
        EVENTACTIONTYPE_Error = 3
    } EVENTACTIONTYPE;
typedef
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0006
    {
        EVENTACTIONCONTEXTTYPE_None = 0,
        EVENTACTIONCONTEXTTYPE_Confidence = 1,
        EVENTACTIONCONTEXTTYPE_Scale = 2,
        EVENTACTIONCONTEXTTYPE_ErrorCode = 3
    } EVENTACTIONCONTEXTTYPE;
typedef
enum __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0007
    {
        EVENTACTIONSCALE_High = 0,
        EVENTACTIONSCALE_Medium = 1,
        EVENTACTIONSCALE_Low = 2
    } EVENTACTIONSCALE;
typedef struct __MIDL___MIDL_itf_eventdetectoroemadapter_0000_0000_0008
    {
    EVENTACTIONTYPE EventdActionType;
    EVENTACTIONCONTEXTTYPE EventActionContextType;
    union
        {
        float Confidence;
        EVENTACTIONSCALE Scale;
        HRESULT ErrorCode;
        } ;
    } EVENTACTION;
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEventDetectorOemAdapter;
    typedef struct IEventDetectorOemAdapterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEventDetectorOemAdapter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEventDetectorOemAdapter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEventDetectorOemAdapter * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            IEventDetectorOemAdapter * This,
                             EVENTFEATURES *GlobalFeatureSupport,
                              LANGID **LangIds,
                             ULONG *NumLanguages,
                              ULONG *NumUserRecordings,
                              WAVEFORMATEX **ppFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilitiesForLanguage )(
            IEventDetectorOemAdapter * This,
                       LANGID LangId,
                              DETECTIONEVENT **EventIds,
                             ULONG *NumEvents);
        HRESULT ( STDMETHODCALLTYPE *VerifyUserEventData )(
            IEventDetectorOemAdapter * This,
                             IStream *ModelData,
                             WAVEFORMATEX *UserRecording,
                       DETECTIONEVENTSELECTOR EventSelector,
                       LONG EventEndBytePos);
        HRESULT ( STDMETHODCALLTYPE *ComputeAndAddUserModelData )(
            IEventDetectorOemAdapter * This,
                                  IStream *ModelData,
                       DETECTIONEVENTSELECTOR EventSelector,
                             LONG *EventEndBytePos,
                             WAVEFORMATEX **UserRecordings,
                       ULONG NumUserRecordings);
        HRESULT ( STDMETHODCALLTYPE *BuildArmingPatternData )(
            IEventDetectorOemAdapter * This,
                             IStream *UserModelData,
                             DETECTIONEVENTSELECTOR *EventSelectors,
                       ULONG NumEventSelectors,
                              SOUNDDETECTOR_PATTERNHEADER **PatternData);
        HRESULT ( STDMETHODCALLTYPE *ParseDetectionResultData )(
            IEventDetectorOemAdapter * This,
                             IStream *UserModelData,
                             SOUNDDETECTOR_PATTERNHEADER *Result,
                              SOUNDDETECTOR_PATTERNHEADER **AssistantContext,
                              DETECTIONEVENTSELECTOR *EventSelector,
                              EVENTACTION *EventAction,
                              ULONG64 *EventStartPerformanceCounterValue,
                              ULONG64 *EventEndPerformanceCounterValue,
                                      WCHAR **DebugOutput);
        void ( STDMETHODCALLTYPE *ReportOSDetectionResult )(
            IEventDetectorOemAdapter * This,
                       DETECTIONEVENTSELECTOR EventSelector,
                       EVENTACTION EventAction);
        END_INTERFACE
    } IEventDetectorOemAdapterVtbl;
    interface IEventDetectorOemAdapter
    {
        CONST_VTBL struct IEventDetectorOemAdapterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,GlobalFeatureSupport,LangIds,NumLanguages,NumUserRecordings,ppFormat) )
    ( (This)->lpVtbl -> GetCapabilitiesForLanguage(This,LangId,EventIds,NumEvents) )
    ( (This)->lpVtbl -> VerifyUserEventData(This,ModelData,UserRecording,EventSelector,EventEndBytePos) )
    ( (This)->lpVtbl -> ComputeAndAddUserModelData(This,ModelData,EventSelector,EventEndBytePos,UserRecordings,NumUserRecordings) )
    ( (This)->lpVtbl -> BuildArmingPatternData(This,UserModelData,EventSelectors,NumEventSelectors,PatternData) )
    ( (This)->lpVtbl -> ParseDetectionResultData(This,UserModelData,Result,AssistantContext,EventSelector,EventAction,EventStartPerformanceCounterValue,EventEndPerformanceCounterValue,DebugOutput) )
    ( (This)->lpVtbl -> ReportOSDetectionResult(This,EventSelector,EventAction) )
DEFINE_GUID(CLSID_ExprKeywordDetectorOemAdapter, 0x2c09bb8, 0x574a, 0x42c1, 0xb0, 0x63, 0x55, 0xf6, 0xf2, 0x91, 0xef, 0x5b);
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventdetectoroemadapter_0000_0001_v0_0_s_ifspec;
}

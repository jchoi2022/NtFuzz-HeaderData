#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITAgent ITAgent;
typedef interface ITAgentSession ITAgentSession;
typedef interface ITACDGroup ITACDGroup;
typedef interface ITQueue ITQueue;
typedef interface ITAgentEvent ITAgentEvent;
typedef interface ITAgentSessionEvent ITAgentSessionEvent;
typedef interface ITACDGroupEvent ITACDGroupEvent;
typedef interface ITQueueEvent ITQueueEvent;
typedef interface ITAgentHandlerEvent ITAgentHandlerEvent;
typedef interface ITTAPICallCenter ITTAPICallCenter;
typedef interface ITAgentHandler ITAgentHandler;
typedef interface IEnumAgent IEnumAgent;
typedef interface IEnumAgentSession IEnumAgentSession;
typedef interface IEnumQueue IEnumQueue;
typedef interface IEnumACDGroup IEnumACDGroup;
typedef interface IEnumAgentHandler IEnumAgentHandler;
typedef interface ITAMMediaFormat ITAMMediaFormat;
typedef interface ITAllocatorProperties ITAllocatorProperties;
typedef interface ITPluggableTerminalEventSink ITPluggableTerminalEventSink;
typedef interface ITPluggableTerminalEventSinkRegistration ITPluggableTerminalEventSinkRegistration;
typedef interface ITMSPAddress ITMSPAddress;
typedef interface ITTAPIDispatchEventNotification ITTAPIDispatchEventNotification;
typedef class TAPI TAPI;
typedef class DispatchMapper DispatchMapper;
typedef class RequestMakeCall RequestMakeCall;
#include "oaidl.h"
#include "ocidl.h"
#include "tapi3if.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum AGENT_EVENT
    {
        AE_NOT_READY = 0,
        AE_READY = ( AE_NOT_READY + 1 ) ,
        AE_BUSY_ACD = ( AE_READY + 1 ) ,
        AE_BUSY_INCOMING = ( AE_BUSY_ACD + 1 ) ,
        AE_BUSY_OUTGOING = ( AE_BUSY_INCOMING + 1 ) ,
        AE_UNKNOWN = ( AE_BUSY_OUTGOING + 1 )
    } AGENT_EVENT;
typedef
enum AGENT_STATE
    {
        AS_NOT_READY = 0,
        AS_READY = ( AS_NOT_READY + 1 ) ,
        AS_BUSY_ACD = ( AS_READY + 1 ) ,
        AS_BUSY_INCOMING = ( AS_BUSY_ACD + 1 ) ,
        AS_BUSY_OUTGOING = ( AS_BUSY_INCOMING + 1 ) ,
        AS_UNKNOWN = ( AS_BUSY_OUTGOING + 1 )
    } AGENT_STATE;
typedef
enum AGENT_SESSION_EVENT
    {
        ASE_NEW_SESSION = 0,
        ASE_NOT_READY = ( ASE_NEW_SESSION + 1 ) ,
        ASE_READY = ( ASE_NOT_READY + 1 ) ,
        ASE_BUSY = ( ASE_READY + 1 ) ,
        ASE_WRAPUP = ( ASE_BUSY + 1 ) ,
        ASE_END = ( ASE_WRAPUP + 1 )
    } AGENT_SESSION_EVENT;
typedef
enum AGENT_SESSION_STATE
    {
        ASST_NOT_READY = 0,
        ASST_READY = ( ASST_NOT_READY + 1 ) ,
        ASST_BUSY_ON_CALL = ( ASST_READY + 1 ) ,
        ASST_BUSY_WRAPUP = ( ASST_BUSY_ON_CALL + 1 ) ,
        ASST_SESSION_ENDED = ( ASST_BUSY_WRAPUP + 1 )
    } AGENT_SESSION_STATE;
typedef
enum AGENTHANDLER_EVENT
    {
        AHE_NEW_AGENTHANDLER = 0,
        AHE_AGENTHANDLER_REMOVED = ( AHE_NEW_AGENTHANDLER + 1 )
    } AGENTHANDLER_EVENT;
typedef
enum ACDGROUP_EVENT
    {
        ACDGE_NEW_GROUP = 0,
        ACDGE_GROUP_REMOVED = ( ACDGE_NEW_GROUP + 1 )
    } ACDGROUP_EVENT;
typedef
enum ACDQUEUE_EVENT
    {
        ACDQE_NEW_QUEUE = 0,
        ACDQE_QUEUE_REMOVED = ( ACDQE_NEW_QUEUE + 1 )
    } ACDQUEUE_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITAgent;
    typedef struct ITAgentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAgentSessions )(
            __RPC__in ITAgent * This,
                                __RPC__deref_out_opt IEnumAgentSession **ppEnumAgentSession);
                               HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            __RPC__in ITAgent * This,
                       __RPC__in_opt ITACDGroup *pACDGroup,
                       __RPC__in_opt ITAddress *pAddress,
                                __RPC__deref_out_opt ITAgentSession **ppAgentSession);
                               HRESULT ( STDMETHODCALLTYPE *CreateSessionWithPIN )(
            __RPC__in ITAgent * This,
                       __RPC__in_opt ITACDGroup *pACDGroup,
                       __RPC__in_opt ITAddress *pAddress,
                       __RPC__in BSTR pPIN,
                                __RPC__deref_out_opt ITAgentSession **ppAgentSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_ID )(
            __RPC__in ITAgent * This,
                                __RPC__deref_out_opt BSTR *ppID);
                                        HRESULT ( STDMETHODCALLTYPE *get_User )(
            __RPC__in ITAgent * This,
                                __RPC__deref_out_opt BSTR *ppUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ITAgent * This,
                       AGENT_STATE AgentState);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITAgent * This,
                                __RPC__out AGENT_STATE *pAgentState);
                                        HRESULT ( STDMETHODCALLTYPE *put_MeasurementPeriod )(
            __RPC__in ITAgent * This,
                       long lPeriod);
                                        HRESULT ( STDMETHODCALLTYPE *get_MeasurementPeriod )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plPeriod);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverallCallRate )(
            __RPC__in ITAgent * This,
                                __RPC__out CURRENCY *pcyCallrate);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfACDCalls )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfIncomingCalls )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfOutgoingCalls )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalACDTalkTime )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plTalkTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalACDCallTime )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plCallTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalWrapUpTime )(
            __RPC__in ITAgent * This,
                                __RPC__out long *plWrapUpTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgentSessions )(
            __RPC__in ITAgent * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITAgentVtbl;
    interface ITAgent
    {
        CONST_VTBL struct ITAgentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EnumerateAgentSessions(This,ppEnumAgentSession) )
    ( (This)->lpVtbl -> CreateSession(This,pACDGroup,pAddress,ppAgentSession) )
    ( (This)->lpVtbl -> CreateSessionWithPIN(This,pACDGroup,pAddress,pPIN,ppAgentSession) )
    ( (This)->lpVtbl -> get_ID(This,ppID) )
    ( (This)->lpVtbl -> get_User(This,ppUser) )
    ( (This)->lpVtbl -> put_State(This,AgentState) )
    ( (This)->lpVtbl -> get_State(This,pAgentState) )
    ( (This)->lpVtbl -> put_MeasurementPeriod(This,lPeriod) )
    ( (This)->lpVtbl -> get_MeasurementPeriod(This,plPeriod) )
    ( (This)->lpVtbl -> get_OverallCallRate(This,pcyCallrate) )
    ( (This)->lpVtbl -> get_NumberOfACDCalls(This,plCalls) )
    ( (This)->lpVtbl -> get_NumberOfIncomingCalls(This,plCalls) )
    ( (This)->lpVtbl -> get_NumberOfOutgoingCalls(This,plCalls) )
    ( (This)->lpVtbl -> get_TotalACDTalkTime(This,plTalkTime) )
    ( (This)->lpVtbl -> get_TotalACDCallTime(This,plCallTime) )
    ( (This)->lpVtbl -> get_TotalWrapUpTime(This,plWrapUpTime) )
    ( (This)->lpVtbl -> get_AgentSessions(This,pVariant) )
EXTERN_C const IID IID_ITAgentSession;
    typedef struct ITAgentSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgentSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgentSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgentSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgentSession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgentSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgentSession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgentSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Agent )(
            __RPC__in ITAgentSession * This,
                                __RPC__deref_out_opt ITAgent **ppAgent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in ITAgentSession * This,
                                __RPC__deref_out_opt ITAddress **ppAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ACDGroup )(
            __RPC__in ITAgentSession * This,
                                __RPC__deref_out_opt ITACDGroup **ppACDGroup);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ITAgentSession * This,
                       AGENT_SESSION_STATE SessionState);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITAgentSession * This,
                                __RPC__out AGENT_SESSION_STATE *pSessionState);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionStartTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out DATE *pdateSessionStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionDuration )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfCalls )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalTalkTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plTalkTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AverageTalkTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plTalkTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalCallTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plCallTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AverageCallTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plCallTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalWrapUpTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plWrapUpTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AverageWrapUpTime )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plWrapUpTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_ACDCallRate )(
            __RPC__in ITAgentSession * This,
                                __RPC__out CURRENCY *pcyCallrate);
                                        HRESULT ( STDMETHODCALLTYPE *get_LongestTimeToAnswer )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plAnswerTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AverageTimeToAnswer )(
            __RPC__in ITAgentSession * This,
                                __RPC__out long *plAnswerTime);
        END_INTERFACE
    } ITAgentSessionVtbl;
    interface ITAgentSession
    {
        CONST_VTBL struct ITAgentSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Agent(This,ppAgent) )
    ( (This)->lpVtbl -> get_Address(This,ppAddress) )
    ( (This)->lpVtbl -> get_ACDGroup(This,ppACDGroup) )
    ( (This)->lpVtbl -> put_State(This,SessionState) )
    ( (This)->lpVtbl -> get_State(This,pSessionState) )
    ( (This)->lpVtbl -> get_SessionStartTime(This,pdateSessionStart) )
    ( (This)->lpVtbl -> get_SessionDuration(This,plDuration) )
    ( (This)->lpVtbl -> get_NumberOfCalls(This,plCalls) )
    ( (This)->lpVtbl -> get_TotalTalkTime(This,plTalkTime) )
    ( (This)->lpVtbl -> get_AverageTalkTime(This,plTalkTime) )
    ( (This)->lpVtbl -> get_TotalCallTime(This,plCallTime) )
    ( (This)->lpVtbl -> get_AverageCallTime(This,plCallTime) )
    ( (This)->lpVtbl -> get_TotalWrapUpTime(This,plWrapUpTime) )
    ( (This)->lpVtbl -> get_AverageWrapUpTime(This,plWrapUpTime) )
    ( (This)->lpVtbl -> get_ACDCallRate(This,pcyCallrate) )
    ( (This)->lpVtbl -> get_LongestTimeToAnswer(This,plAnswerTime) )
    ( (This)->lpVtbl -> get_AverageTimeToAnswer(This,plAnswerTime) )
EXTERN_C const IID IID_ITACDGroup;
    typedef struct ITACDGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITACDGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITACDGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITACDGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITACDGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITACDGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITACDGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITACDGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITACDGroup * This,
                                __RPC__deref_out_opt BSTR *ppName);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateQueues )(
            __RPC__in ITACDGroup * This,
                                __RPC__deref_out_opt IEnumQueue **ppEnumQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Queues )(
            __RPC__in ITACDGroup * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITACDGroupVtbl;
    interface ITACDGroup
    {
        CONST_VTBL struct ITACDGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> EnumerateQueues(This,ppEnumQueue) )
    ( (This)->lpVtbl -> get_Queues(This,pVariant) )
EXTERN_C const IID IID_ITQueue;
    typedef struct ITQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITQueue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITQueue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITQueue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITQueue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_MeasurementPeriod )(
            __RPC__in ITQueue * This,
                       long lPeriod);
                                        HRESULT ( STDMETHODCALLTYPE *get_MeasurementPeriod )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plPeriod);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalCallsQueued )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentCallsQueued )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalCallsAbandoned )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalCallsFlowedIn )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalCallsFlowedOut )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_LongestEverWaitTime )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plWaitTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentLongestWaitTime )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plWaitTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AverageWaitTime )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plWaitTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_FinalDisposition )(
            __RPC__in ITQueue * This,
                                __RPC__out long *plCalls);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITQueue * This,
                                __RPC__deref_out_opt BSTR *ppName);
        END_INTERFACE
    } ITQueueVtbl;
    interface ITQueue
    {
        CONST_VTBL struct ITQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_MeasurementPeriod(This,lPeriod) )
    ( (This)->lpVtbl -> get_MeasurementPeriod(This,plPeriod) )
    ( (This)->lpVtbl -> get_TotalCallsQueued(This,plCalls) )
    ( (This)->lpVtbl -> get_CurrentCallsQueued(This,plCalls) )
    ( (This)->lpVtbl -> get_TotalCallsAbandoned(This,plCalls) )
    ( (This)->lpVtbl -> get_TotalCallsFlowedIn(This,plCalls) )
    ( (This)->lpVtbl -> get_TotalCallsFlowedOut(This,plCalls) )
    ( (This)->lpVtbl -> get_LongestEverWaitTime(This,plWaitTime) )
    ( (This)->lpVtbl -> get_CurrentLongestWaitTime(This,plWaitTime) )
    ( (This)->lpVtbl -> get_AverageWaitTime(This,plWaitTime) )
    ( (This)->lpVtbl -> get_FinalDisposition(This,plCalls) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
EXTERN_C const IID IID_ITAgentEvent;
    typedef struct ITAgentEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgentEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgentEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgentEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgentEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgentEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgentEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgentEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Agent )(
            __RPC__in ITAgentEvent * This,
                                __RPC__deref_out_opt ITAgent **ppAgent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITAgentEvent * This,
                                __RPC__out AGENT_EVENT *pEvent);
        END_INTERFACE
    } ITAgentEventVtbl;
    interface ITAgentEvent
    {
        CONST_VTBL struct ITAgentEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Agent(This,ppAgent) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
EXTERN_C const IID IID_ITAgentSessionEvent;
    typedef struct ITAgentSessionEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgentSessionEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgentSessionEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgentSessionEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgentSessionEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgentSessionEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgentSessionEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgentSessionEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in ITAgentSessionEvent * This,
                                __RPC__deref_out_opt ITAgentSession **ppSession);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITAgentSessionEvent * This,
                                __RPC__out AGENT_SESSION_EVENT *pEvent);
        END_INTERFACE
    } ITAgentSessionEventVtbl;
    interface ITAgentSessionEvent
    {
        CONST_VTBL struct ITAgentSessionEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
EXTERN_C const IID IID_ITACDGroupEvent;
    typedef struct ITACDGroupEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITACDGroupEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITACDGroupEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITACDGroupEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITACDGroupEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITACDGroupEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITACDGroupEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITACDGroupEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Group )(
            __RPC__in ITACDGroupEvent * This,
                                __RPC__deref_out_opt ITACDGroup **ppGroup);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITACDGroupEvent * This,
                                __RPC__out ACDGROUP_EVENT *pEvent);
        END_INTERFACE
    } ITACDGroupEventVtbl;
    interface ITACDGroupEvent
    {
        CONST_VTBL struct ITACDGroupEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Group(This,ppGroup) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
EXTERN_C const IID IID_ITQueueEvent;
    typedef struct ITQueueEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITQueueEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITQueueEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITQueueEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITQueueEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITQueueEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITQueueEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITQueueEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Queue )(
            __RPC__in ITQueueEvent * This,
                                __RPC__deref_out_opt ITQueue **ppQueue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITQueueEvent * This,
                                __RPC__out ACDQUEUE_EVENT *pEvent);
        END_INTERFACE
    } ITQueueEventVtbl;
    interface ITQueueEvent
    {
        CONST_VTBL struct ITQueueEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Queue(This,ppQueue) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
EXTERN_C const IID IID_ITAgentHandlerEvent;
    typedef struct ITAgentHandlerEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgentHandlerEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgentHandlerEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgentHandlerEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgentHandlerEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgentHandlerEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgentHandlerEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgentHandlerEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgentHandler )(
            __RPC__in ITAgentHandlerEvent * This,
                                __RPC__deref_out_opt ITAgentHandler **ppAgentHandler);
                                        HRESULT ( STDMETHODCALLTYPE *get_Event )(
            __RPC__in ITAgentHandlerEvent * This,
                                __RPC__out AGENTHANDLER_EVENT *pEvent);
        END_INTERFACE
    } ITAgentHandlerEventVtbl;
    interface ITAgentHandlerEvent
    {
        CONST_VTBL struct ITAgentHandlerEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AgentHandler(This,ppAgentHandler) )
    ( (This)->lpVtbl -> get_Event(This,pEvent) )
EXTERN_C const IID IID_ITTAPICallCenter;
    typedef struct ITTAPICallCenterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPICallCenter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPICallCenter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPICallCenter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPICallCenter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPICallCenter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPICallCenter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPICallCenter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateAgentHandlers )(
            __RPC__in ITTAPICallCenter * This,
                                __RPC__deref_out_opt IEnumAgentHandler **ppEnumHandler);
                                        HRESULT ( STDMETHODCALLTYPE *get_AgentHandlers )(
            __RPC__in ITTAPICallCenter * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITTAPICallCenterVtbl;
    interface ITTAPICallCenter
    {
        CONST_VTBL struct ITTAPICallCenterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EnumerateAgentHandlers(This,ppEnumHandler) )
    ( (This)->lpVtbl -> get_AgentHandlers(This,pVariant) )
EXTERN_C const IID IID_ITAgentHandler;
    typedef struct ITAgentHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAgentHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAgentHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAgentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITAgentHandler * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITAgentHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITAgentHandler * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITAgentHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITAgentHandler * This,
                                __RPC__deref_out_opt BSTR *ppName);
                               HRESULT ( STDMETHODCALLTYPE *CreateAgent )(
            __RPC__in ITAgentHandler * This,
                                __RPC__deref_out_opt ITAgent **ppAgent);
                               HRESULT ( STDMETHODCALLTYPE *CreateAgentWithID )(
            __RPC__in ITAgentHandler * This,
                       __RPC__in BSTR pID,
                       __RPC__in BSTR pPIN,
                                __RPC__deref_out_opt ITAgent **ppAgent);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateACDGroups )(
            __RPC__in ITAgentHandler * This,
                                __RPC__deref_out_opt IEnumACDGroup **ppEnumACDGroup);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateUsableAddresses )(
            __RPC__in ITAgentHandler * This,
                                __RPC__deref_out_opt IEnumAddress **ppEnumAddress);
                                        HRESULT ( STDMETHODCALLTYPE *get_ACDGroups )(
            __RPC__in ITAgentHandler * This,
                                __RPC__out VARIANT *pVariant);
                                        HRESULT ( STDMETHODCALLTYPE *get_UsableAddresses )(
            __RPC__in ITAgentHandler * This,
                                __RPC__out VARIANT *pVariant);
        END_INTERFACE
    } ITAgentHandlerVtbl;
    interface ITAgentHandler
    {
        CONST_VTBL struct ITAgentHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,ppName) )
    ( (This)->lpVtbl -> CreateAgent(This,ppAgent) )
    ( (This)->lpVtbl -> CreateAgentWithID(This,pID,pPIN,ppAgent) )
    ( (This)->lpVtbl -> EnumerateACDGroups(This,ppEnumACDGroup) )
    ( (This)->lpVtbl -> EnumerateUsableAddresses(This,ppEnumAddress) )
    ( (This)->lpVtbl -> get_ACDGroups(This,pVariant) )
    ( (This)->lpVtbl -> get_UsableAddresses(This,pVariant) )
EXTERN_C const IID IID_IEnumAgent;
    typedef struct IEnumAgentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumAgent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumAgent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumAgent * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumAgent * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITAgent **ppElements,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumAgent * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumAgent * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumAgent * This,
                                __RPC__deref_out_opt IEnumAgent **ppEnum);
        END_INTERFACE
    } IEnumAgentVtbl;
    interface IEnumAgent
    {
        CONST_VTBL struct IEnumAgentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumAgentSession;
    typedef struct IEnumAgentSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumAgentSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumAgentSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumAgentSession * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumAgentSession * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITAgentSession **ppElements,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumAgentSession * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumAgentSession * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumAgentSession * This,
                                __RPC__deref_out_opt IEnumAgentSession **ppEnum);
        END_INTERFACE
    } IEnumAgentSessionVtbl;
    interface IEnumAgentSession
    {
        CONST_VTBL struct IEnumAgentSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumQueue;
    typedef struct IEnumQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumQueue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumQueue * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumQueue * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITQueue **ppElements,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumQueue * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumQueue * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumQueue * This,
                                __RPC__deref_out_opt IEnumQueue **ppEnum);
        END_INTERFACE
    } IEnumQueueVtbl;
    interface IEnumQueue
    {
        CONST_VTBL struct IEnumQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumACDGroup;
    typedef struct IEnumACDGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumACDGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumACDGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumACDGroup * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumACDGroup * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITACDGroup **ppElements,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumACDGroup * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumACDGroup * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumACDGroup * This,
                                __RPC__deref_out_opt IEnumACDGroup **ppEnum);
        END_INTERFACE
    } IEnumACDGroupVtbl;
    interface IEnumACDGroup
    {
        CONST_VTBL struct IEnumACDGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IEnumAgentHandler;
    typedef struct IEnumAgentHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumAgentHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumAgentHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumAgentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumAgentHandler * This,
                       ULONG celt,
                        __RPC__deref_out_opt ITAgentHandler **ppElements,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumAgentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumAgentHandler * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumAgentHandler * This,
                                __RPC__deref_out_opt IEnumAgentHandler **ppEnum);
        END_INTERFACE
    } IEnumAgentHandlerVtbl;
    interface IEnumAgentHandler
    {
        CONST_VTBL struct IEnumAgentHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_ITAMMediaFormat;
    typedef struct ITAMMediaFormatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAMMediaFormat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAMMediaFormat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAMMediaFormat * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormat )(
            __RPC__in ITAMMediaFormat * This,
                                __RPC__deref_out_opt AM_MEDIA_TYPE **ppmt);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormat )(
            __RPC__in ITAMMediaFormat * This,
                       __RPC__in const AM_MEDIA_TYPE *pmt);
        END_INTERFACE
    } ITAMMediaFormatVtbl;
    interface ITAMMediaFormat
    {
        CONST_VTBL struct ITAMMediaFormatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_MediaFormat(This,ppmt) )
    ( (This)->lpVtbl -> put_MediaFormat(This,pmt) )
EXTERN_C const IID IID_ITAllocatorProperties;
    typedef struct ITAllocatorPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITAllocatorProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITAllocatorProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITAllocatorProperties * This);
                               HRESULT ( STDMETHODCALLTYPE *SetAllocatorProperties )(
            __RPC__in ITAllocatorProperties * This,
                       __RPC__in ALLOCATOR_PROPERTIES *pAllocProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetAllocatorProperties )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out ALLOCATOR_PROPERTIES *pAllocProperties);
                               HRESULT ( STDMETHODCALLTYPE *SetAllocateBuffers )(
            __RPC__in ITAllocatorProperties * This,
                       BOOL bAllocBuffers);
                               HRESULT ( STDMETHODCALLTYPE *GetAllocateBuffers )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out BOOL *pbAllocBuffers);
                               HRESULT ( STDMETHODCALLTYPE *SetBufferSize )(
            __RPC__in ITAllocatorProperties * This,
                       DWORD BufferSize);
                               HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            __RPC__in ITAllocatorProperties * This,
                        __RPC__out DWORD *pBufferSize);
        END_INTERFACE
    } ITAllocatorPropertiesVtbl;
    interface ITAllocatorProperties
    {
        CONST_VTBL struct ITAllocatorPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAllocatorProperties(This,pAllocProperties) )
    ( (This)->lpVtbl -> GetAllocatorProperties(This,pAllocProperties) )
    ( (This)->lpVtbl -> SetAllocateBuffers(This,bAllocBuffers) )
    ( (This)->lpVtbl -> GetAllocateBuffers(This,pbAllocBuffers) )
    ( (This)->lpVtbl -> SetBufferSize(This,BufferSize) )
    ( (This)->lpVtbl -> GetBufferSize(This,pBufferSize) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef long *MSP_HANDLE;
typedef
enum __MIDL___MIDL_itf_tapi3_0000_0018_0001
    {
        ADDRESS_TERMINAL_AVAILABLE = 0,
        ADDRESS_TERMINAL_UNAVAILABLE = ( ADDRESS_TERMINAL_AVAILABLE + 1 )
    } MSP_ADDRESS_EVENT;
typedef
enum __MIDL___MIDL_itf_tapi3_0000_0018_0002
    {
        CALL_NEW_STREAM = 0,
        CALL_STREAM_FAIL = ( CALL_NEW_STREAM + 1 ) ,
        CALL_TERMINAL_FAIL = ( CALL_STREAM_FAIL + 1 ) ,
        CALL_STREAM_NOT_USED = ( CALL_TERMINAL_FAIL + 1 ) ,
        CALL_STREAM_ACTIVE = ( CALL_STREAM_NOT_USED + 1 ) ,
        CALL_STREAM_INACTIVE = ( CALL_STREAM_ACTIVE + 1 )
    } MSP_CALL_EVENT;
typedef
enum __MIDL___MIDL_itf_tapi3_0000_0018_0003
    {
        CALL_CAUSE_UNKNOWN = 0,
        CALL_CAUSE_BAD_DEVICE = ( CALL_CAUSE_UNKNOWN + 1 ) ,
        CALL_CAUSE_CONNECT_FAIL = ( CALL_CAUSE_BAD_DEVICE + 1 ) ,
        CALL_CAUSE_LOCAL_REQUEST = ( CALL_CAUSE_CONNECT_FAIL + 1 ) ,
        CALL_CAUSE_REMOTE_REQUEST = ( CALL_CAUSE_LOCAL_REQUEST + 1 ) ,
        CALL_CAUSE_MEDIA_TIMEOUT = ( CALL_CAUSE_REMOTE_REQUEST + 1 ) ,
        CALL_CAUSE_MEDIA_RECOVERED = ( CALL_CAUSE_MEDIA_TIMEOUT + 1 ) ,
        CALL_CAUSE_QUALITY_OF_SERVICE = ( CALL_CAUSE_MEDIA_RECOVERED + 1 )
    } MSP_CALL_EVENT_CAUSE;
typedef
enum __MIDL___MIDL_itf_tapi3_0000_0018_0004
    {
        ME_ADDRESS_EVENT = 0,
        ME_CALL_EVENT = ( ME_ADDRESS_EVENT + 1 ) ,
        ME_TSP_DATA = ( ME_CALL_EVENT + 1 ) ,
        ME_PRIVATE_EVENT = ( ME_TSP_DATA + 1 ) ,
        ME_ASR_TERMINAL_EVENT = ( ME_PRIVATE_EVENT + 1 ) ,
        ME_TTS_TERMINAL_EVENT = ( ME_ASR_TERMINAL_EVENT + 1 ) ,
        ME_FILE_TERMINAL_EVENT = ( ME_TTS_TERMINAL_EVENT + 1 ) ,
        ME_TONE_TERMINAL_EVENT = ( ME_FILE_TERMINAL_EVENT + 1 )
    } MSP_EVENT;
typedef struct __MIDL___MIDL_itf_tapi3_0000_0018_0005
    {
    DWORD dwSize;
    MSP_EVENT Event;
    MSP_HANDLE hCall;
                                   union
        {
                       struct
            {
            MSP_ADDRESS_EVENT Type;
            ITTerminal *pTerminal;
            } MSP_ADDRESS_EVENT_INFO;
                       struct
            {
            MSP_CALL_EVENT Type;
            MSP_CALL_EVENT_CAUSE Cause;
            ITStream *pStream;
            ITTerminal *pTerminal;
            HRESULT hrError;
            } MSP_CALL_EVENT_INFO;
                       struct
            {
            DWORD dwBufferSize;
            BYTE pBuffer[ 1 ];
            } MSP_TSP_DATA;
                       struct
            {
            IDispatch *pEvent;
            long lEventCode;
            } MSP_PRIVATE_EVENT_INFO;
                       struct
            {
            ITTerminal *pParentFileTerminal;
            ITFileTrack *pFileTrack;
            TERMINAL_MEDIA_STATE TerminalMediaState;
            FT_STATE_EVENT_CAUSE ftecEventCause;
            HRESULT hrErrorCode;
            } MSP_FILE_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pASRTerminal;
            HRESULT hrErrorCode;
            } MSP_ASR_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pTTSTerminal;
            HRESULT hrErrorCode;
            } MSP_TTS_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pToneTerminal;
            HRESULT hrErrorCode;
            } MSP_TONE_TERMINAL_EVENT_INFO;
        } ;
    } MSP_EVENT_INFO;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_ITPluggableTerminalEventSink;
    typedef struct ITPluggableTerminalEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *FireEvent )(
            __RPC__in ITPluggableTerminalEventSink * This,
                       __RPC__in const MSP_EVENT_INFO *pMspEventInfo);
        END_INTERFACE
    } ITPluggableTerminalEventSinkVtbl;
    interface ITPluggableTerminalEventSink
    {
        CONST_VTBL struct ITPluggableTerminalEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireEvent(This,pMspEventInfo) )
EXTERN_C const IID IID_ITPluggableTerminalEventSinkRegistration;
    typedef struct ITPluggableTerminalEventSinkRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterSink )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This,
                       __RPC__in_opt ITPluggableTerminalEventSink *pEventSink);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSink )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        END_INTERFACE
    } ITPluggableTerminalEventSinkRegistrationVtbl;
    interface ITPluggableTerminalEventSinkRegistration
    {
        CONST_VTBL struct ITPluggableTerminalEventSinkRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterSink(This,pEventSink) )
    ( (This)->lpVtbl -> UnregisterSink(This) )
EXTERN_C const IID IID_ITMSPAddress;
    typedef struct ITMSPAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMSPAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMSPAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in MSP_HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in ITMSPAddress * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMSPCall )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in MSP_HANDLE hCall,
                       DWORD dwReserved,
                       DWORD dwMediaType,
                       __RPC__in_opt IUnknown *pOuterUnknown,
                        __RPC__deref_out_opt IUnknown **ppStreamControl);
        HRESULT ( STDMETHODCALLTYPE *ShutdownMSPCall )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in_opt IUnknown *pStreamControl);
        HRESULT ( STDMETHODCALLTYPE *ReceiveTSPData )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in_opt IUnknown *pMSPCall,
                                __RPC__in_ecount_full(dwSize) BYTE *pBuffer,
                       DWORD dwSize);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ITMSPAddress * This,
                            __RPC__inout DWORD *pdwSize,
                                     __RPC__inout_ecount_full(*pdwSize) byte *pEventBuffer);
        END_INTERFACE
    } ITMSPAddressVtbl;
    interface ITMSPAddress
    {
        CONST_VTBL struct ITMSPAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hEvent) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> CreateMSPCall(This,hCall,dwReserved,dwMediaType,pOuterUnknown,ppStreamControl) )
    ( (This)->lpVtbl -> ShutdownMSPCall(This,pStreamControl) )
    ( (This)->lpVtbl -> ReceiveTSPData(This,pMSPCall,pBuffer,dwSize) )
    ( (This)->lpVtbl -> GetEvent(This,pdwSize,pEventBuffer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID LIBID_TAPI3Lib;
EXTERN_C const IID DIID_ITTAPIDispatchEventNotification;
    typedef struct ITTAPIDispatchEventNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTAPIDispatchEventNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTAPIDispatchEventNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTAPIDispatchEventNotification * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITTAPIDispatchEventNotification * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITTAPIDispatchEventNotification * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITTAPIDispatchEventNotification * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITTAPIDispatchEventNotification * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } ITTAPIDispatchEventNotificationVtbl;
    interface ITTAPIDispatchEventNotification
    {
        CONST_VTBL struct ITTAPIDispatchEventNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_TAPI;
class DECLSPEC_UUID("21D6D48E-A88B-11D0-83DD-00AA003CCABD")
TAPI;
EXTERN_C const CLSID CLSID_DispatchMapper;
class DECLSPEC_UUID("E9225296-C759-11d1-A02B-00C04FB6809F")
DispatchMapper;
EXTERN_C const CLSID CLSID_RequestMakeCall;
class DECLSPEC_UUID("AC48FFE0-F8C4-11d1-A030-00C04FB6809F")
RequestMakeCall;
const BSTR CLSID_String_VideoWindowTerm = L"{F7438990-D6EB-11D0-82A6-00AA00B5CA1B}";
const BSTR CLSID_String_VideoInputTerminal = L"{AAF578EC-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_HandsetTerminal = L"{AAF578EB-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_HeadsetTerminal = L"{AAF578ED-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_SpeakerphoneTerminal = L"{AAF578EE-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_MicrophoneTerminal = L"{AAF578EF-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_SpeakersTerminal = L"{AAF578F0-DC70-11D0-8ED3-00C04FB6809F}";
const BSTR CLSID_String_MediaStreamTerminal = L"{E2F7AEF7-4971-11D1-A671-006097C9A2E8}";
const BSTR CLSID_String_FileRecordingTerminal = L"{521F3D06-C3D0-4511-8617-86B9A783DA77}";
const BSTR CLSID_String_FilePlaybackTerminal = L"{0CB9914C-79CD-47DC-ADB0-327F47CEFB20}";
const BSTR TAPIPROTOCOL_String_PSTN = L"{831CE2D6-83B5-11D1-BB5C-00C04FB6809F}";
const BSTR TAPIPROTOCOL_String_H323 = L"{831CE2D7-83B5-11D1-BB5C-00C04FB6809F}";
const BSTR TAPIPROTOCOL_String_Multicast = L"{831CE2D8-83B5-11D1-BB5C-00C04FB6809F}";
const long LINEADDRESSTYPE_PHONENUMBER = 0x1;
const long LINEADDRESSTYPE_SDP = 0x2;
const long LINEADDRESSTYPE_EMAILNAME = 0x4;
const long LINEADDRESSTYPE_DOMAINNAME = 0x8;
const long LINEADDRESSTYPE_IPADDRESS = 0x10;
const long LINEDIGITMODE_PULSE = 0x1;
const long LINEDIGITMODE_DTMF = 0x2;
const long LINEDIGITMODE_DTMFEND = 0x4;
const long TAPIMEDIATYPE_AUDIO = 0x8;
const long TAPIMEDIATYPE_VIDEO = 0x8000;
const long TAPIMEDIATYPE_DATAMODEM = 0x10;
const long TAPIMEDIATYPE_G3FAX = 0x20;
const long TAPIMEDIATYPE_MULTITRACK = 0x10000;
#include <tapi.h>
#include <tapi3err.h>
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3_0000_0023_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}

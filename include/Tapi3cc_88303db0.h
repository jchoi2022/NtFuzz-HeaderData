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
#include "oaidl.h"
#include "tapi3if.h"
extern "C"{
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
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0000_v0_0_s_ifspec;
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
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0016_v0_0_s_ifspec;
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

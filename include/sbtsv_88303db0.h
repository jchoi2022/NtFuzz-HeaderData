#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITsSbPlugin ITsSbPlugin;
typedef interface ITsSbResourcePlugin ITsSbResourcePlugin;
typedef interface ITsSbServiceNotification ITsSbServiceNotification;
typedef interface ITsSbLoadBalancing ITsSbLoadBalancing;
typedef interface ITsSbPlacement ITsSbPlacement;
typedef interface ITsSbOrchestration ITsSbOrchestration;
typedef interface ITsSbEnvironment ITsSbEnvironment;
typedef interface ITsSbLoadBalanceResult ITsSbLoadBalanceResult;
typedef interface ITsSbTarget ITsSbTarget;
typedef interface ITsSbSession ITsSbSession;
typedef interface ITsSbResourceNotification ITsSbResourceNotification;
typedef interface ITsSbResourceNotificationEx ITsSbResourceNotificationEx;
typedef interface ITsSbTaskInfo ITsSbTaskInfo;
typedef interface ITsSbTaskPlugin ITsSbTaskPlugin;
typedef interface ITsSbPropertySet ITsSbPropertySet;
typedef interface ITsSbPluginPropertySet ITsSbPluginPropertySet;
typedef interface ITsSbClientConnectionPropertySet ITsSbClientConnectionPropertySet;
typedef interface ITsSbTargetPropertySet ITsSbTargetPropertySet;
typedef interface ITsSbEnvironmentPropertySet ITsSbEnvironmentPropertySet;
typedef interface ITsSbBaseNotifySink ITsSbBaseNotifySink;
typedef interface ITsSbPluginNotifySink ITsSbPluginNotifySink;
typedef interface ITsSbLoadBalancingNotifySink ITsSbLoadBalancingNotifySink;
typedef interface ITsSbPlacementNotifySink ITsSbPlacementNotifySink;
typedef interface ITsSbOrchestrationNotifySink ITsSbOrchestrationNotifySink;
typedef interface ITsSbTaskPluginNotifySink ITsSbTaskPluginNotifySink;
typedef interface ITsSbClientConnection ITsSbClientConnection;
typedef interface ITsSbProvider ITsSbProvider;
typedef interface ITsSbResourcePluginStore ITsSbResourcePluginStore;
typedef interface ITsSbFilterPluginStore ITsSbFilterPluginStore;
typedef interface ITsSbGlobalStore ITsSbGlobalStore;
typedef interface ITsSbProvisioningPluginNotifySink ITsSbProvisioningPluginNotifySink;
typedef interface ITsSbProvisioning ITsSbProvisioning;
typedef interface ITsSbGenericNotifySink ITsSbGenericNotifySink;
#include "unknwn.h"
#include "oaidl.h"
#include "SessdirPublicTypes.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _TS_SB_SORT_BY
    {
        TS_SB_SORT_BY_NONE = 0,
        TS_SB_SORT_BY_NAME = 0x1,
        TS_SB_SORT_BY_PROP = 0x2
    } TS_SB_SORT_BY;
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITsSbPlugin;
    typedef struct ITsSbPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPlugin * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbPlugin * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbPlugin * This,
                       HRESULT hr);
        END_INTERFACE
    } ITsSbPluginVtbl;
    interface ITsSbPlugin
    {
        CONST_VTBL struct ITsSbPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
EXTERN_C const IID IID_ITsSbResourcePlugin;
    typedef struct ITsSbResourcePluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbResourcePlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbResourcePlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbResourcePlugin * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbResourcePlugin * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbResourcePlugin * This,
                       HRESULT hr);
        END_INTERFACE
    } ITsSbResourcePluginVtbl;
    interface ITsSbResourcePlugin
    {
        CONST_VTBL struct ITsSbResourcePluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
EXTERN_C const IID IID_ITsSbServiceNotification;
    typedef struct ITsSbServiceNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbServiceNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbServiceNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbServiceNotification * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifyServiceFailure )(
            __RPC__in ITsSbServiceNotification * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifyServiceSuccess )(
            __RPC__in ITsSbServiceNotification * This);
        END_INTERFACE
    } ITsSbServiceNotificationVtbl;
    interface ITsSbServiceNotification
    {
        CONST_VTBL struct ITsSbServiceNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyServiceFailure(This) )
    ( (This)->lpVtbl -> NotifyServiceSuccess(This) )
EXTERN_C const IID IID_ITsSbLoadBalancing;
    typedef struct ITsSbLoadBalancingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbLoadBalancing * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbLoadBalancing * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbLoadBalancing * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbLoadBalancing * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbLoadBalancing * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *GetMostSuitableTarget )(
            __RPC__in ITsSbLoadBalancing * This,
                       __RPC__in_opt ITsSbClientConnection *pConnection,
                       __RPC__in_opt ITsSbLoadBalancingNotifySink *pLBSink);
        END_INTERFACE
    } ITsSbLoadBalancingVtbl;
    interface ITsSbLoadBalancing
    {
        CONST_VTBL struct ITsSbLoadBalancingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
    ( (This)->lpVtbl -> GetMostSuitableTarget(This,pConnection,pLBSink) )
EXTERN_C const IID IID_ITsSbPlacement;
    typedef struct ITsSbPlacementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPlacement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPlacement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPlacement * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbPlacement * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbPlacement * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *QueryEnvironmentForTarget )(
            __RPC__in ITsSbPlacement * This,
                       __RPC__in_opt ITsSbClientConnection *pConnection,
                       __RPC__in_opt ITsSbPlacementNotifySink *pPlacementSink);
        END_INTERFACE
    } ITsSbPlacementVtbl;
    interface ITsSbPlacement
    {
        CONST_VTBL struct ITsSbPlacementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
    ( (This)->lpVtbl -> QueryEnvironmentForTarget(This,pConnection,pPlacementSink) )
EXTERN_C const IID IID_ITsSbOrchestration;
    typedef struct ITsSbOrchestrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbOrchestration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbOrchestration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbOrchestration * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbOrchestration * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbOrchestration * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *PrepareTargetForConnect )(
            __RPC__in ITsSbOrchestration * This,
                       __RPC__in_opt ITsSbClientConnection *pConnection,
                       __RPC__in_opt ITsSbOrchestrationNotifySink *pOrchestrationNotifySink);
        END_INTERFACE
    } ITsSbOrchestrationVtbl;
    interface ITsSbOrchestration
    {
        CONST_VTBL struct ITsSbOrchestrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
    ( (This)->lpVtbl -> PrepareTargetForConnect(This,pConnection,pOrchestrationNotifySink) )
EXTERN_C const IID IID_ITsSbEnvironment;
    typedef struct ITsSbEnvironmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbEnvironment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbEnvironment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbEnvironment * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITsSbEnvironment * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerWeight )(
            __RPC__in ITsSbEnvironment * This,
                                __RPC__out DWORD *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnvironmentPropertySet )(
            __RPC__in ITsSbEnvironment * This,
                                __RPC__deref_out_opt ITsSbEnvironmentPropertySet **ppPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnvironmentPropertySet )(
            __RPC__in ITsSbEnvironment * This,
                       __RPC__in_opt ITsSbEnvironmentPropertySet *pVal);
        END_INTERFACE
    } ITsSbEnvironmentVtbl;
    interface ITsSbEnvironment
    {
        CONST_VTBL struct ITsSbEnvironmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_ServerWeight(This,pVal) )
    ( (This)->lpVtbl -> get_EnvironmentPropertySet(This,ppPropertySet) )
    ( (This)->lpVtbl -> put_EnvironmentPropertySet(This,pVal) )
EXTERN_C const IID IID_ITsSbLoadBalanceResult;
    typedef struct ITsSbLoadBalanceResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbLoadBalanceResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbLoadBalanceResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbLoadBalanceResult * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetName )(
            __RPC__in ITsSbLoadBalanceResult * This,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } ITsSbLoadBalanceResultVtbl;
    interface ITsSbLoadBalanceResult
    {
        CONST_VTBL struct ITsSbLoadBalanceResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TargetName(This,pVal) )
EXTERN_C const IID IID_ITsSbTarget;
    typedef struct ITsSbTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbTarget * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetName )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetName )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in BSTR Val);
                                        HRESULT ( STDMETHODCALLTYPE *get_FarmName )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FarmName )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in BSTR Val);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetFQDN )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt BSTR *TargetFqdnName);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetFQDN )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in BSTR Val);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetNetbios )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt BSTR *TargetNetbiosName);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetNetbios )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in BSTR Val);
                                        HRESULT ( STDMETHODCALLTYPE *get_IpAddresses )(
            __RPC__in ITsSbTarget * This,
                                 __RPC__out_ecount_full(*numAddresses) TSSD_ConnectionPoint *sockaddr,
                            __RPC__inout DWORD *numAddresses);
                                        HRESULT ( STDMETHODCALLTYPE *put_IpAddresses )(
            __RPC__in ITsSbTarget * This,
                                __RPC__in_ecount_full(numAddresses) TSSD_ConnectionPoint *sockaddr,
                       DWORD numAddresses);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetState )(
            __RPC__in ITsSbTarget * This,
                                __RPC__out TARGET_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetState )(
            __RPC__in ITsSbTarget * This,
                       TARGET_STATE State);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetPropertySet )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt ITsSbTargetPropertySet **ppPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetPropertySet )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in_opt ITsSbTargetPropertySet *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnvironmentName )(
            __RPC__in ITsSbTarget * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnvironmentName )(
            __RPC__in ITsSbTarget * This,
                       __RPC__in BSTR Val);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumSessions )(
            __RPC__in ITsSbTarget * This,
                                __RPC__out DWORD *pNumSessions);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumPendingConnections )(
            __RPC__in ITsSbTarget * This,
                                __RPC__out DWORD *pNumPendingConnections);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetLoad )(
            __RPC__in ITsSbTarget * This,
                                __RPC__out DWORD *pTargetLoad);
        END_INTERFACE
    } ITsSbTargetVtbl;
    interface ITsSbTarget
    {
        CONST_VTBL struct ITsSbTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TargetName(This,pVal) )
    ( (This)->lpVtbl -> put_TargetName(This,Val) )
    ( (This)->lpVtbl -> get_FarmName(This,pVal) )
    ( (This)->lpVtbl -> put_FarmName(This,Val) )
    ( (This)->lpVtbl -> get_TargetFQDN(This,TargetFqdnName) )
    ( (This)->lpVtbl -> put_TargetFQDN(This,Val) )
    ( (This)->lpVtbl -> get_TargetNetbios(This,TargetNetbiosName) )
    ( (This)->lpVtbl -> put_TargetNetbios(This,Val) )
    ( (This)->lpVtbl -> get_IpAddresses(This,sockaddr,numAddresses) )
    ( (This)->lpVtbl -> put_IpAddresses(This,sockaddr,numAddresses) )
    ( (This)->lpVtbl -> get_TargetState(This,pState) )
    ( (This)->lpVtbl -> put_TargetState(This,State) )
    ( (This)->lpVtbl -> get_TargetPropertySet(This,ppPropertySet) )
    ( (This)->lpVtbl -> put_TargetPropertySet(This,pVal) )
    ( (This)->lpVtbl -> get_EnvironmentName(This,pVal) )
    ( (This)->lpVtbl -> put_EnvironmentName(This,Val) )
    ( (This)->lpVtbl -> get_NumSessions(This,pNumSessions) )
    ( (This)->lpVtbl -> get_NumPendingConnections(This,pNumPendingConnections) )
    ( (This)->lpVtbl -> get_TargetLoad(This,pTargetLoad) )
EXTERN_C const IID IID_ITsSbSession;
    typedef struct ITsSbSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbSession * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
            __RPC__in ITsSbSession * This,
                                __RPC__out DWORD *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetName )(
            __RPC__in ITsSbSession * This,
                                __RPC__deref_out_opt BSTR *targetName);
                                        HRESULT ( STDMETHODCALLTYPE *put_TargetName )(
            __RPC__in ITsSbSession * This,
                       __RPC__in BSTR targetName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Username )(
            __RPC__in ITsSbSession * This,
                                __RPC__deref_out_opt BSTR *userName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in ITsSbSession * This,
                                __RPC__deref_out_opt BSTR *domain);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ITsSbSession * This,
                                __RPC__out TSSESSION_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ITsSbSession * This,
                       TSSESSION_STATE State);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreateTime )(
            __RPC__in ITsSbSession * This,
                                __RPC__out FILETIME *pTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_CreateTime )(
            __RPC__in ITsSbSession * This,
                       FILETIME Time);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisconnectTime )(
            __RPC__in ITsSbSession * This,
                                __RPC__out FILETIME *pTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisconnectTime )(
            __RPC__in ITsSbSession * This,
                       FILETIME Time);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitialProgram )(
            __RPC__in ITsSbSession * This,
                                __RPC__deref_out_opt BSTR *app);
                                        HRESULT ( STDMETHODCALLTYPE *put_InitialProgram )(
            __RPC__in ITsSbSession * This,
                       __RPC__in BSTR Application);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientDisplay )(
            __RPC__in ITsSbSession * This,
                                __RPC__out CLIENT_DISPLAY *pClientDisplay);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClientDisplay )(
            __RPC__in ITsSbSession * This,
                       CLIENT_DISPLAY pClientDisplay);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProtocolType )(
            __RPC__in ITsSbSession * This,
                                __RPC__out DWORD *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProtocolType )(
            __RPC__in ITsSbSession * This,
                       DWORD Val);
        END_INTERFACE
    } ITsSbSessionVtbl;
    interface ITsSbSession
    {
        CONST_VTBL struct ITsSbSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SessionId(This,pVal) )
    ( (This)->lpVtbl -> get_TargetName(This,targetName) )
    ( (This)->lpVtbl -> put_TargetName(This,targetName) )
    ( (This)->lpVtbl -> get_Username(This,userName) )
    ( (This)->lpVtbl -> get_Domain(This,domain) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> put_State(This,State) )
    ( (This)->lpVtbl -> get_CreateTime(This,pTime) )
    ( (This)->lpVtbl -> put_CreateTime(This,Time) )
    ( (This)->lpVtbl -> get_DisconnectTime(This,pTime) )
    ( (This)->lpVtbl -> put_DisconnectTime(This,Time) )
    ( (This)->lpVtbl -> get_InitialProgram(This,app) )
    ( (This)->lpVtbl -> put_InitialProgram(This,Application) )
    ( (This)->lpVtbl -> get_ClientDisplay(This,pClientDisplay) )
    ( (This)->lpVtbl -> put_ClientDisplay(This,pClientDisplay) )
    ( (This)->lpVtbl -> get_ProtocolType(This,pVal) )
    ( (This)->lpVtbl -> put_ProtocolType(This,Val) )
EXTERN_C const IID IID_ITsSbResourceNotification;
    typedef struct ITsSbResourceNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbResourceNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbResourceNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbResourceNotification * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifySessionChange )(
            __RPC__in ITsSbResourceNotification * This,
                       TSSESSION_STATE changeType,
                       __RPC__in_opt ITsSbSession *pSession);
                               HRESULT ( STDMETHODCALLTYPE *NotifyTargetChange )(
            __RPC__in ITsSbResourceNotification * This,
                       DWORD TargetChangeType,
                       __RPC__in_opt ITsSbTarget *pTarget);
                               HRESULT ( STDMETHODCALLTYPE *NotifyClientConnectionStateChange )(
            __RPC__in ITsSbResourceNotification * This,
                       CONNECTION_CHANGE_NOTIFICATION ChangeType,
                       __RPC__in_opt ITsSbClientConnection *pConnection);
        END_INTERFACE
    } ITsSbResourceNotificationVtbl;
    interface ITsSbResourceNotification
    {
        CONST_VTBL struct ITsSbResourceNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifySessionChange(This,changeType,pSession) )
    ( (This)->lpVtbl -> NotifyTargetChange(This,TargetChangeType,pTarget) )
    ( (This)->lpVtbl -> NotifyClientConnectionStateChange(This,ChangeType,pConnection) )
EXTERN_C const IID IID_ITsSbResourceNotificationEx;
    typedef struct ITsSbResourceNotificationExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbResourceNotificationEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbResourceNotificationEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbResourceNotificationEx * This);
                               HRESULT ( STDMETHODCALLTYPE *NotifySessionChangeEx )(
            __RPC__in ITsSbResourceNotificationEx * This,
                       __RPC__in BSTR targetName,
                       __RPC__in BSTR userName,
                       __RPC__in BSTR domain,
                       DWORD sessionId,
                       TSSESSION_STATE sessionState);
                               HRESULT ( STDMETHODCALLTYPE *NotifyTargetChangeEx )(
            __RPC__in ITsSbResourceNotificationEx * This,
                       __RPC__in BSTR targetName,
                       DWORD targetChangeType);
                               HRESULT ( STDMETHODCALLTYPE *NotifyClientConnectionStateChangeEx )(
            __RPC__in ITsSbResourceNotificationEx * This,
                       __RPC__in BSTR userName,
                       __RPC__in BSTR domain,
                       __RPC__in BSTR initialProgram,
                       __RPC__in BSTR poolName,
                       __RPC__in BSTR targetName,
                       CONNECTION_CHANGE_NOTIFICATION connectionChangeType);
        END_INTERFACE
    } ITsSbResourceNotificationExVtbl;
    interface ITsSbResourceNotificationEx
    {
        CONST_VTBL struct ITsSbResourceNotificationExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifySessionChangeEx(This,targetName,userName,domain,sessionId,sessionState) )
    ( (This)->lpVtbl -> NotifyTargetChangeEx(This,targetName,targetChangeType) )
    ( (This)->lpVtbl -> NotifyClientConnectionStateChangeEx(This,userName,domain,initialProgram,poolName,targetName,connectionChangeType) )
EXTERN_C const IID IID_ITsSbTaskInfo;
    typedef struct ITsSbTaskInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbTaskInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbTaskInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbTaskInfo * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetId )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__out FILETIME *pStartTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__out FILETIME *pEndTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__out FILETIME *pDeadline);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__deref_out_opt BSTR *pIdentifier);
                                        HRESULT ( STDMETHODCALLTYPE *get_Label )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__deref_out_opt BSTR *pLabel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Context )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__deref_out_opt SAFEARRAY * *pContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_Plugin )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__deref_out_opt BSTR *pPlugin);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ITsSbTaskInfo * This,
                                __RPC__out RDV_TASK_STATUS *pStatus);
        END_INTERFACE
    } ITsSbTaskInfoVtbl;
    interface ITsSbTaskInfo
    {
        CONST_VTBL struct ITsSbTaskInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TargetId(This,pName) )
    ( (This)->lpVtbl -> get_StartTime(This,pStartTime) )
    ( (This)->lpVtbl -> get_EndTime(This,pEndTime) )
    ( (This)->lpVtbl -> get_Deadline(This,pDeadline) )
    ( (This)->lpVtbl -> get_Identifier(This,pIdentifier) )
    ( (This)->lpVtbl -> get_Label(This,pLabel) )
    ( (This)->lpVtbl -> get_Context(This,pContext) )
    ( (This)->lpVtbl -> get_Plugin(This,pPlugin) )
    ( (This)->lpVtbl -> get_Status(This,pStatus) )
EXTERN_C const IID IID_ITsSbTaskPlugin;
    typedef struct ITsSbTaskPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbTaskPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbTaskPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbTaskPlugin * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbTaskPlugin * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbTaskPlugin * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *InitializeTaskPlugin )(
            __RPC__in ITsSbTaskPlugin * This,
                       __RPC__in_opt ITsSbTaskPluginNotifySink *pITsSbTaskPluginNotifySink);
                               HRESULT ( STDMETHODCALLTYPE *SetTaskQueue )(
            __RPC__in ITsSbTaskPlugin * This,
                       __RPC__in BSTR pszHostName,
                       DWORD SbTaskInfoSize,
                                __RPC__in_ecount_full(SbTaskInfoSize) ITsSbTaskInfo *pITsSbTaskInfo[ ]);
        END_INTERFACE
    } ITsSbTaskPluginVtbl;
    interface ITsSbTaskPlugin
    {
        CONST_VTBL struct ITsSbTaskPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
    ( (This)->lpVtbl -> InitializeTaskPlugin(This,pITsSbTaskPluginNotifySink) )
    ( (This)->lpVtbl -> SetTaskQueue(This,pszHostName,SbTaskInfoSize,pITsSbTaskInfo) )
EXTERN_C const IID IID_ITsSbPropertySet;
    typedef struct ITsSbPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPropertySet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ITsSbPropertySet * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ITsSbPropertySet * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } ITsSbPropertySetVtbl;
    interface ITsSbPropertySet
    {
        CONST_VTBL struct ITsSbPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
EXTERN_C const IID IID_ITsSbPluginPropertySet;
    typedef struct ITsSbPluginPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPluginPropertySet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPluginPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPluginPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ITsSbPluginPropertySet * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ITsSbPluginPropertySet * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } ITsSbPluginPropertySetVtbl;
    interface ITsSbPluginPropertySet
    {
        CONST_VTBL struct ITsSbPluginPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
EXTERN_C const IID IID_ITsSbClientConnectionPropertySet;
    typedef struct ITsSbClientConnectionPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbClientConnectionPropertySet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbClientConnectionPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbClientConnectionPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ITsSbClientConnectionPropertySet * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ITsSbClientConnectionPropertySet * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } ITsSbClientConnectionPropertySetVtbl;
    interface ITsSbClientConnectionPropertySet
    {
        CONST_VTBL struct ITsSbClientConnectionPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
EXTERN_C const IID IID_ITsSbTargetPropertySet;
    typedef struct ITsSbTargetPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbTargetPropertySet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbTargetPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbTargetPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ITsSbTargetPropertySet * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ITsSbTargetPropertySet * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } ITsSbTargetPropertySetVtbl;
    interface ITsSbTargetPropertySet
    {
        CONST_VTBL struct ITsSbTargetPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
EXTERN_C const IID IID_ITsSbEnvironmentPropertySet;
    typedef struct ITsSbEnvironmentPropertySetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbEnvironmentPropertySet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbEnvironmentPropertySet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbEnvironmentPropertySet * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ITsSbEnvironmentPropertySet * This,
                       LPCOLESTR pszPropName,
                            VARIANT *pVar,
                               IErrorLog *pErrorLog);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ITsSbEnvironmentPropertySet * This,
                       __RPC__in LPCOLESTR pszPropName,
                       __RPC__in VARIANT *pVar);
        END_INTERFACE
    } ITsSbEnvironmentPropertySetVtbl;
    interface ITsSbEnvironmentPropertySet
    {
        CONST_VTBL struct ITsSbEnvironmentPropertySetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
EXTERN_C const IID IID_ITsSbBaseNotifySink;
    typedef struct ITsSbBaseNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbBaseNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbBaseNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbBaseNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbBaseNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbBaseNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
        END_INTERFACE
    } ITsSbBaseNotifySinkVtbl;
    interface ITsSbBaseNotifySink
    {
        CONST_VTBL struct ITsSbBaseNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
EXTERN_C const IID IID_ITsSbPluginNotifySink;
    typedef struct ITsSbPluginNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPluginNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPluginNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPluginNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbPluginNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbPluginNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
                               HRESULT ( STDMETHODCALLTYPE *OnInitialized )(
            __RPC__in ITsSbPluginNotifySink * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *OnTerminated )(
            __RPC__in ITsSbPluginNotifySink * This);
        END_INTERFACE
    } ITsSbPluginNotifySinkVtbl;
    interface ITsSbPluginNotifySink
    {
        CONST_VTBL struct ITsSbPluginNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
    ( (This)->lpVtbl -> OnInitialized(This,hr) )
    ( (This)->lpVtbl -> OnTerminated(This) )
EXTERN_C const IID IID_ITsSbLoadBalancingNotifySink;
    typedef struct ITsSbLoadBalancingNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbLoadBalancingNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbLoadBalancingNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbLoadBalancingNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbLoadBalancingNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbLoadBalancingNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
                               HRESULT ( STDMETHODCALLTYPE *OnGetMostSuitableTarget )(
            __RPC__in ITsSbLoadBalancingNotifySink * This,
                       __RPC__in_opt ITsSbLoadBalanceResult *pLBResult,
                       BOOL fIsNewConnection);
        END_INTERFACE
    } ITsSbLoadBalancingNotifySinkVtbl;
    interface ITsSbLoadBalancingNotifySink
    {
        CONST_VTBL struct ITsSbLoadBalancingNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
    ( (This)->lpVtbl -> OnGetMostSuitableTarget(This,pLBResult,fIsNewConnection) )
EXTERN_C const IID IID_ITsSbPlacementNotifySink;
    typedef struct ITsSbPlacementNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbPlacementNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbPlacementNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbPlacementNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbPlacementNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbPlacementNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
                               HRESULT ( STDMETHODCALLTYPE *OnQueryEnvironmentCompleted )(
            __RPC__in ITsSbPlacementNotifySink * This,
                       __RPC__in_opt ITsSbEnvironment *pEnvironment);
        END_INTERFACE
    } ITsSbPlacementNotifySinkVtbl;
    interface ITsSbPlacementNotifySink
    {
        CONST_VTBL struct ITsSbPlacementNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
    ( (This)->lpVtbl -> OnQueryEnvironmentCompleted(This,pEnvironment) )
EXTERN_C const IID IID_ITsSbOrchestrationNotifySink;
    typedef struct ITsSbOrchestrationNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbOrchestrationNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbOrchestrationNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbOrchestrationNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbOrchestrationNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbOrchestrationNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
                               HRESULT ( STDMETHODCALLTYPE *OnReadyToConnect )(
            __RPC__in ITsSbOrchestrationNotifySink * This,
                       __RPC__in_opt ITsSbTarget *pTarget);
        END_INTERFACE
    } ITsSbOrchestrationNotifySinkVtbl;
    interface ITsSbOrchestrationNotifySink
    {
        CONST_VTBL struct ITsSbOrchestrationNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
    ( (This)->lpVtbl -> OnReadyToConnect(This,pTarget) )
EXTERN_C const IID IID_ITsSbTaskPluginNotifySink;
    typedef struct ITsSbTaskPluginNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbTaskPluginNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbTaskPluginNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       HRESULT hrError);
                               HRESULT ( STDMETHODCALLTYPE *OnReportStatus )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       CLIENT_MESSAGE_TYPE messageType,
                       DWORD messageID);
                               HRESULT ( STDMETHODCALLTYPE *OnSetTaskTime )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       __RPC__in BSTR szTargetName,
                       FILETIME TaskStartTime,
                       FILETIME TaskEndTime,
                       FILETIME TaskDeadline,
                       __RPC__in BSTR szTaskLabel,
                       __RPC__in BSTR szTaskIdentifier,
                       __RPC__in BSTR szTaskPlugin,
                       DWORD dwTaskStatus,
                       __RPC__in SAFEARRAY * saContext);
                               HRESULT ( STDMETHODCALLTYPE *OnDeleteTaskTime )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       __RPC__in BSTR szTargetName,
                       __RPC__in BSTR szTaskIdentifier);
                               HRESULT ( STDMETHODCALLTYPE *OnUpdateTaskStatus )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       __RPC__in BSTR szTargetName,
                       __RPC__in BSTR TaskIdentifier,
                       RDV_TASK_STATUS TaskStatus);
                               HRESULT ( STDMETHODCALLTYPE *OnReportTasks )(
            __RPC__in ITsSbTaskPluginNotifySink * This,
                       __RPC__in BSTR szHostName);
        END_INTERFACE
    } ITsSbTaskPluginNotifySinkVtbl;
    interface ITsSbTaskPluginNotifySink
    {
        CONST_VTBL struct ITsSbTaskPluginNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnError(This,hrError) )
    ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
    ( (This)->lpVtbl -> OnSetTaskTime(This,szTargetName,TaskStartTime,TaskEndTime,TaskDeadline,szTaskLabel,szTaskIdentifier,szTaskPlugin,dwTaskStatus,saContext) )
    ( (This)->lpVtbl -> OnDeleteTaskTime(This,szTargetName,szTaskIdentifier) )
    ( (This)->lpVtbl -> OnUpdateTaskStatus(This,szTargetName,TaskIdentifier,TaskStatus) )
    ( (This)->lpVtbl -> OnReportTasks(This,szHostName) )
EXTERN_C const IID IID_ITsSbClientConnection;
    typedef struct ITsSbClientConnectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbClientConnection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbClientConnection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbClientConnection * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Domain )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitialProgram )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceResult )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt ITsSbLoadBalanceResult **ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FarmName )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                      HRESULT ( STDMETHODCALLTYPE *PutContext )(
            ITsSbClientConnection * This,
            _In_ BSTR contextId,
            _In_ VARIANT context,
            _Out_opt_ VARIANT *existingContext);
                               HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITsSbClientConnection * This,
                       __RPC__in BSTR contextId,
                                __RPC__out VARIANT *context);
                                        HRESULT ( STDMETHODCALLTYPE *get_Environment )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt ITsSbEnvironment **ppEnvironment);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionError )(
            __RPC__in ITsSbClientConnection * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SamUserAccount )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClientConnectionPropertySet )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt ITsSbClientConnectionPropertySet **ppPropertySet);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsFirstAssignment )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__out BOOL *ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RdFarmType )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__out RD_FARM_TYPE *pRdFarmType);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSidString )(
            __RPC__in ITsSbClientConnection * This,
                                __RPC__deref_out_opt LPTSTR *pszUserSidString);
                               HRESULT ( STDMETHODCALLTYPE *GetDisconnectedSession )(
            __RPC__in ITsSbClientConnection * This,
                        __RPC__deref_out_opt ITsSbSession **ppSession);
        END_INTERFACE
    } ITsSbClientConnectionVtbl;
    interface ITsSbClientConnection
    {
        CONST_VTBL struct ITsSbClientConnectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_UserName(This,pVal) )
    ( (This)->lpVtbl -> get_Domain(This,pVal) )
    ( (This)->lpVtbl -> get_InitialProgram(This,pVal) )
    ( (This)->lpVtbl -> get_LoadBalanceResult(This,ppVal) )
    ( (This)->lpVtbl -> get_FarmName(This,pVal) )
    ( (This)->lpVtbl -> PutContext(This,contextId,context,existingContext) )
    ( (This)->lpVtbl -> GetContext(This,contextId,context) )
    ( (This)->lpVtbl -> get_Environment(This,ppEnvironment) )
    ( (This)->lpVtbl -> get_ConnectionError(This) )
    ( (This)->lpVtbl -> get_SamUserAccount(This,pVal) )
    ( (This)->lpVtbl -> get_ClientConnectionPropertySet(This,ppPropertySet) )
    ( (This)->lpVtbl -> get_IsFirstAssignment(This,ppVal) )
    ( (This)->lpVtbl -> get_RdFarmType(This,pRdFarmType) )
    ( (This)->lpVtbl -> get_UserSidString(This,pszUserSidString) )
    ( (This)->lpVtbl -> GetDisconnectedSession(This,ppSession) )
EXTERN_C const IID IID_ITsSbProvider;
    typedef struct ITsSbProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbProvider * This);
                               HRESULT ( STDMETHODCALLTYPE *CreateTargetObject )(
            __RPC__in ITsSbProvider * This,
                       __RPC__in BSTR TargetName,
                       __RPC__in BSTR EnvironmentName,
                        __RPC__deref_out_opt ITsSbTarget **ppTarget);
                               HRESULT ( STDMETHODCALLTYPE *CreateLoadBalanceResultObject )(
            __RPC__in ITsSbProvider * This,
                       __RPC__in BSTR TargetName,
                        __RPC__deref_out_opt ITsSbLoadBalanceResult **ppLBResult);
                               HRESULT ( STDMETHODCALLTYPE *CreateSessionObject )(
            __RPC__in ITsSbProvider * This,
                       __RPC__in BSTR TargetName,
                       __RPC__in BSTR UserName,
                       __RPC__in BSTR Domain,
                       DWORD SessionId,
                        __RPC__deref_out_opt ITsSbSession **ppSession);
                               HRESULT ( STDMETHODCALLTYPE *CreatePluginPropertySet )(
            __RPC__in ITsSbProvider * This,
                                __RPC__deref_out_opt ITsSbPluginPropertySet **ppPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *CreateTargetPropertySetObject )(
            __RPC__in ITsSbProvider * This,
                        __RPC__deref_out_opt ITsSbTargetPropertySet **ppPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *CreateEnvironmentObject )(
            __RPC__in ITsSbProvider * This,
                       __RPC__in BSTR Name,
                       DWORD ServerWeight,
                        __RPC__deref_out_opt ITsSbEnvironment **ppEnvironment);
                               HRESULT ( STDMETHODCALLTYPE *GetResourcePluginStore )(
            __RPC__in ITsSbProvider * This,
                        __RPC__deref_out_opt ITsSbResourcePluginStore **ppStore);
                               HRESULT ( STDMETHODCALLTYPE *GetFilterPluginStore )(
            __RPC__in ITsSbProvider * This,
                        __RPC__deref_out_opt ITsSbFilterPluginStore **ppStore);
                               HRESULT ( STDMETHODCALLTYPE *RegisterForNotification )(
            __RPC__in ITsSbProvider * This,
                       DWORD notificationType,
                       __RPC__in BSTR ResourceToMonitor,
                       __RPC__in_opt ITsSbResourceNotification *pPluginNotification);
                               HRESULT ( STDMETHODCALLTYPE *UnRegisterForNotification )(
            __RPC__in ITsSbProvider * This,
                       DWORD notificationType,
                       __RPC__in BSTR ResourceToMonitor);
                               HRESULT ( STDMETHODCALLTYPE *GetInstanceOfGlobalStore )(
            __RPC__in ITsSbProvider * This,
                        __RPC__deref_out_opt ITsSbGlobalStore **ppGlobalStore);
                               HRESULT ( STDMETHODCALLTYPE *CreateEnvironmentPropertySetObject )(
            __RPC__in ITsSbProvider * This,
                        __RPC__deref_out_opt ITsSbEnvironmentPropertySet **ppPropertySet);
        END_INTERFACE
    } ITsSbProviderVtbl;
    interface ITsSbProvider
    {
        CONST_VTBL struct ITsSbProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTargetObject(This,TargetName,EnvironmentName,ppTarget) )
    ( (This)->lpVtbl -> CreateLoadBalanceResultObject(This,TargetName,ppLBResult) )
    ( (This)->lpVtbl -> CreateSessionObject(This,TargetName,UserName,Domain,SessionId,ppSession) )
    ( (This)->lpVtbl -> CreatePluginPropertySet(This,ppPropertySet) )
    ( (This)->lpVtbl -> CreateTargetPropertySetObject(This,ppPropertySet) )
    ( (This)->lpVtbl -> CreateEnvironmentObject(This,Name,ServerWeight,ppEnvironment) )
    ( (This)->lpVtbl -> GetResourcePluginStore(This,ppStore) )
    ( (This)->lpVtbl -> GetFilterPluginStore(This,ppStore) )
    ( (This)->lpVtbl -> RegisterForNotification(This,notificationType,ResourceToMonitor,pPluginNotification) )
    ( (This)->lpVtbl -> UnRegisterForNotification(This,notificationType,ResourceToMonitor) )
    ( (This)->lpVtbl -> GetInstanceOfGlobalStore(This,ppGlobalStore) )
    ( (This)->lpVtbl -> CreateEnvironmentPropertySetObject(This,ppPropertySet) )
EXTERN_C const IID IID_ITsSbResourcePluginStore;
    typedef struct ITsSbResourcePluginStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbResourcePluginStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbResourcePluginStore * This);
                               HRESULT ( STDMETHODCALLTYPE *QueryTarget )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR TargetName,
                       __RPC__in BSTR FarmName,
                        __RPC__deref_out_opt ITsSbTarget **ppTarget);
                               HRESULT ( STDMETHODCALLTYPE *QuerySessionBySessionId )(
            __RPC__in ITsSbResourcePluginStore * This,
                       DWORD dwSessionId,
                       __RPC__in BSTR TargetName,
                        __RPC__deref_out_opt ITsSbSession **ppSession);
                               HRESULT ( STDMETHODCALLTYPE *AddTargetToStore )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbTarget *pTarget);
                               HRESULT ( STDMETHODCALLTYPE *AddSessionToStore )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbSession *pSession);
                               HRESULT ( STDMETHODCALLTYPE *AddEnvironmentToStore )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbEnvironment *pEnvironment);
                               HRESULT ( STDMETHODCALLTYPE *RemoveEnvironmentFromStore )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR EnvironmentName,
                                 BOOL bIgnoreOwner);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateFarms )(
            __RPC__in ITsSbResourcePluginStore * This,
                        __RPC__out DWORD *pdwCount,
                        __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *QueryEnvironment )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR EnvironmentName,
                        __RPC__deref_out_opt ITsSbEnvironment **ppEnvironment);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateEnvironments )(
            __RPC__in ITsSbResourcePluginStore * This,
                            __RPC__inout DWORD *pdwCount,
                                 __RPC__out_ecount_full(*pdwCount) ITsSbEnvironment **pVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *SaveTarget )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbTarget *pTarget,
                       BOOL bForceWrite);
                               HRESULT ( STDMETHODCALLTYPE *SaveEnvironment )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbEnvironment *pEnvironment,
                       BOOL bForceWrite);
                               HRESULT ( STDMETHODCALLTYPE *SaveSession )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbSession *pSession);
                               HRESULT ( STDMETHODCALLTYPE *SetTargetProperty )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR TargetName,
                       __RPC__in BSTR PropertyName,
                       __RPC__in VARIANT *pProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetEnvironmentProperty )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR EnvironmentName,
                       __RPC__in BSTR PropertyName,
                       __RPC__in VARIANT *pProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetTargetState )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR targetName,
                       TARGET_STATE newState,
                        __RPC__out TARGET_STATE *pOldState);
                               HRESULT ( STDMETHODCALLTYPE *SetSessionState )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbSession *sbSession);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateTargets )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR FarmName,
                       __RPC__in BSTR EnvName,
                       TS_SB_SORT_BY sortByFieldId,
                       __RPC__in BSTR sortyByPropName,
                            __RPC__inout DWORD *pdwCount,
            __RPC__deref_out_ecount_full(*pdwCount) ITsSbTarget **pVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateSessions )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR targetName,
                       __RPC__in BSTR userName,
                       __RPC__in BSTR userDomain,
                       __RPC__in BSTR poolName,
                       __RPC__in BSTR initialProgram,
                       __RPC__in TSSESSION_STATE *pSessionState,
                            __RPC__inout DWORD *pdwCount,
            __RPC__deref_out_ecount_full(*pdwCount) ITsSbSession **ppVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *GetFarmProperty )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR farmName,
                       __RPC__in BSTR propertyName,
                       __RPC__in VARIANT *pVarValue);
                               HRESULT ( STDMETHODCALLTYPE *DeleteTarget )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR targetName,
                       __RPC__in BSTR hostName);
                               HRESULT ( STDMETHODCALLTYPE *SetTargetPropertyWithVersionCheck )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbTarget *pTarget,
                       __RPC__in BSTR PropertyName,
                       __RPC__in VARIANT *pProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetEnvironmentPropertyWithVersionCheck )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt ITsSbEnvironment *pEnvironment,
                       __RPC__in BSTR PropertyName,
                       __RPC__in VARIANT *pProperty);
                               HRESULT ( STDMETHODCALLTYPE *AcquireTargetLock )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR targetName,
                       DWORD dwTimeout,
                        __RPC__deref_out_opt IUnknown **ppContext);
                               HRESULT ( STDMETHODCALLTYPE *ReleaseTargetLock )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in_opt IUnknown *pContext);
                               HRESULT ( STDMETHODCALLTYPE *TestAndSetServerState )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR PoolName,
                       __RPC__in BSTR ServerFQDN,
                       TARGET_STATE NewState,
                       TARGET_STATE TestState,
                        __RPC__out TARGET_STATE *pInitState);
                               HRESULT ( STDMETHODCALLTYPE *SetServerWaitingToStart )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR PoolName,
                       __RPC__in BSTR serverName);
                               HRESULT ( STDMETHODCALLTYPE *GetServerState )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR PoolName,
                       __RPC__in BSTR ServerFQDN,
                        __RPC__out TARGET_STATE *pState);
                               HRESULT ( STDMETHODCALLTYPE *SetServerDrainMode )(
            __RPC__in ITsSbResourcePluginStore * This,
                       __RPC__in BSTR ServerFQDN,
                       DWORD DrainMode);
        END_INTERFACE
    } ITsSbResourcePluginStoreVtbl;
    interface ITsSbResourcePluginStore
    {
        CONST_VTBL struct ITsSbResourcePluginStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryTarget(This,TargetName,FarmName,ppTarget) )
    ( (This)->lpVtbl -> QuerySessionBySessionId(This,dwSessionId,TargetName,ppSession) )
    ( (This)->lpVtbl -> AddTargetToStore(This,pTarget) )
    ( (This)->lpVtbl -> AddSessionToStore(This,pSession) )
    ( (This)->lpVtbl -> AddEnvironmentToStore(This,pEnvironment) )
    ( (This)->lpVtbl -> RemoveEnvironmentFromStore(This,EnvironmentName,bIgnoreOwner) )
    ( (This)->lpVtbl -> EnumerateFarms(This,pdwCount,pVal) )
    ( (This)->lpVtbl -> QueryEnvironment(This,EnvironmentName,ppEnvironment) )
    ( (This)->lpVtbl -> EnumerateEnvironments(This,pdwCount,pVal) )
    ( (This)->lpVtbl -> SaveTarget(This,pTarget,bForceWrite) )
    ( (This)->lpVtbl -> SaveEnvironment(This,pEnvironment,bForceWrite) )
    ( (This)->lpVtbl -> SaveSession(This,pSession) )
    ( (This)->lpVtbl -> SetTargetProperty(This,TargetName,PropertyName,pProperty) )
    ( (This)->lpVtbl -> SetEnvironmentProperty(This,EnvironmentName,PropertyName,pProperty) )
    ( (This)->lpVtbl -> SetTargetState(This,targetName,newState,pOldState) )
    ( (This)->lpVtbl -> SetSessionState(This,sbSession) )
    ( (This)->lpVtbl -> EnumerateTargets(This,FarmName,EnvName,sortByFieldId,sortyByPropName,pdwCount,pVal) )
    ( (This)->lpVtbl -> EnumerateSessions(This,targetName,userName,userDomain,poolName,initialProgram,pSessionState,pdwCount,ppVal) )
    ( (This)->lpVtbl -> GetFarmProperty(This,farmName,propertyName,pVarValue) )
    ( (This)->lpVtbl -> DeleteTarget(This,targetName,hostName) )
    ( (This)->lpVtbl -> SetTargetPropertyWithVersionCheck(This,pTarget,PropertyName,pProperty) )
    ( (This)->lpVtbl -> SetEnvironmentPropertyWithVersionCheck(This,pEnvironment,PropertyName,pProperty) )
    ( (This)->lpVtbl -> AcquireTargetLock(This,targetName,dwTimeout,ppContext) )
    ( (This)->lpVtbl -> ReleaseTargetLock(This,pContext) )
    ( (This)->lpVtbl -> TestAndSetServerState(This,PoolName,ServerFQDN,NewState,TestState,pInitState) )
    ( (This)->lpVtbl -> SetServerWaitingToStart(This,PoolName,serverName) )
    ( (This)->lpVtbl -> GetServerState(This,PoolName,ServerFQDN,pState) )
    ( (This)->lpVtbl -> SetServerDrainMode(This,ServerFQDN,DrainMode) )
EXTERN_C const IID IID_ITsSbFilterPluginStore;
    typedef struct ITsSbFilterPluginStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbFilterPluginStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbFilterPluginStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbFilterPluginStore * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveProperties )(
            __RPC__in ITsSbFilterPluginStore * This,
                       __RPC__in_opt ITsSbPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateProperties )(
            __RPC__in ITsSbFilterPluginStore * This,
                                __RPC__deref_out_opt ITsSbPropertySet **ppPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *DeleteProperties )(
            __RPC__in ITsSbFilterPluginStore * This,
                       __RPC__in BSTR propertyName);
        END_INTERFACE
    } ITsSbFilterPluginStoreVtbl;
    interface ITsSbFilterPluginStore
    {
        CONST_VTBL struct ITsSbFilterPluginStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SaveProperties(This,pPropertySet) )
    ( (This)->lpVtbl -> EnumerateProperties(This,ppPropertySet) )
    ( (This)->lpVtbl -> DeleteProperties(This,propertyName) )
EXTERN_C const IID IID_ITsSbGlobalStore;
    typedef struct ITsSbGlobalStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbGlobalStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbGlobalStore * This);
                               HRESULT ( STDMETHODCALLTYPE *QueryTarget )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                       __RPC__in BSTR TargetName,
                       __RPC__in BSTR FarmName,
                        __RPC__deref_out_opt ITsSbTarget **ppTarget);
                               HRESULT ( STDMETHODCALLTYPE *QuerySessionBySessionId )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                       DWORD dwSessionId,
                       __RPC__in BSTR TargetName,
                        __RPC__deref_out_opt ITsSbSession **ppSession);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateFarms )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                        __RPC__out DWORD *pdwCount,
                        __RPC__deref_out_opt SAFEARRAY * *pVal);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateTargets )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                       __RPC__in BSTR FarmName,
                       __RPC__in BSTR EnvName,
                            __RPC__inout DWORD *pdwCount,
                                 __RPC__out_ecount_full(*pdwCount) ITsSbTarget **pVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateEnvironmentsByProvider )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                            __RPC__inout DWORD *pdwCount,
                                 __RPC__out_ecount_full(*pdwCount) ITsSbEnvironment **ppVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateSessions )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR ProviderName,
                       __RPC__in BSTR targetName,
                       __RPC__in BSTR userName,
                       __RPC__in BSTR userDomain,
                       __RPC__in BSTR poolName,
                       __RPC__in BSTR initialProgram,
                       __RPC__in TSSESSION_STATE *pSessionState,
                            __RPC__inout DWORD *pdwCount,
                                 __RPC__out_ecount_full(*pdwCount) ITsSbSession **ppVal[ ]);
                               HRESULT ( STDMETHODCALLTYPE *GetFarmProperty )(
            __RPC__in ITsSbGlobalStore * This,
                       __RPC__in BSTR farmName,
                       __RPC__in BSTR propertyName,
                       __RPC__in VARIANT *pVarValue);
        END_INTERFACE
    } ITsSbGlobalStoreVtbl;
    interface ITsSbGlobalStore
    {
        CONST_VTBL struct ITsSbGlobalStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryTarget(This,ProviderName,TargetName,FarmName,ppTarget) )
    ( (This)->lpVtbl -> QuerySessionBySessionId(This,ProviderName,dwSessionId,TargetName,ppSession) )
    ( (This)->lpVtbl -> EnumerateFarms(This,ProviderName,pdwCount,pVal) )
    ( (This)->lpVtbl -> EnumerateTargets(This,ProviderName,FarmName,EnvName,pdwCount,pVal) )
    ( (This)->lpVtbl -> EnumerateEnvironmentsByProvider(This,ProviderName,pdwCount,ppVal) )
    ( (This)->lpVtbl -> EnumerateSessions(This,ProviderName,targetName,userName,userDomain,poolName,initialProgram,pSessionState,pdwCount,ppVal) )
    ( (This)->lpVtbl -> GetFarmProperty(This,farmName,propertyName,pVarValue) )
EXTERN_C const IID IID_ITsSbProvisioningPluginNotifySink;
    typedef struct ITsSbProvisioningPluginNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnJobCreated )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       __RPC__in VM_NOTIFY_INFO *pVmNotifyInfo);
                               HRESULT ( STDMETHODCALLTYPE *OnVirtualMachineStatusChanged )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       __RPC__in VM_NOTIFY_ENTRY *pVmNotifyEntry,
                       VM_NOTIFY_STATUS VmNotifyStatus,
                       HRESULT ErrorCode,
                       __RPC__in BSTR ErrorDescr);
                               HRESULT ( STDMETHODCALLTYPE *OnJobCompleted )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       HRESULT ResultCode,
                       __RPC__in BSTR ResultDescription);
                               HRESULT ( STDMETHODCALLTYPE *OnJobCancelled )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *LockVirtualMachine )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       __RPC__in VM_NOTIFY_ENTRY *pVmNotifyEntry);
                               HRESULT ( STDMETHODCALLTYPE *OnVirtualMachineHostStatusChanged )(
            __RPC__in ITsSbProvisioningPluginNotifySink * This,
                       __RPC__in BSTR VmHost,
                       VM_HOST_NOTIFY_STATUS VmHostNotifyStatus,
                       HRESULT ErrorCode,
                       __RPC__in BSTR ErrorDescr);
        END_INTERFACE
    } ITsSbProvisioningPluginNotifySinkVtbl;
    interface ITsSbProvisioningPluginNotifySink
    {
        CONST_VTBL struct ITsSbProvisioningPluginNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnJobCreated(This,pVmNotifyInfo) )
    ( (This)->lpVtbl -> OnVirtualMachineStatusChanged(This,pVmNotifyEntry,VmNotifyStatus,ErrorCode,ErrorDescr) )
    ( (This)->lpVtbl -> OnJobCompleted(This,ResultCode,ResultDescription) )
    ( (This)->lpVtbl -> OnJobCancelled(This) )
    ( (This)->lpVtbl -> LockVirtualMachine(This,pVmNotifyEntry) )
    ( (This)->lpVtbl -> OnVirtualMachineHostStatusChanged(This,VmHost,VmHostNotifyStatus,ErrorCode,ErrorDescr) )
EXTERN_C const IID IID_ITsSbProvisioning;
    typedef struct ITsSbProvisioningVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbProvisioning * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbProvisioning * This);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in_opt ITsSbProvider *pProvider,
                       __RPC__in_opt ITsSbPluginNotifySink *pNotifySink,
                       __RPC__in_opt ITsSbPluginPropertySet *pPropertySet);
                               HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in ITsSbProvisioning * This,
                       HRESULT hr);
                               HRESULT ( STDMETHODCALLTYPE *CreateVirtualMachines )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in BSTR JobXmlString,
                       __RPC__in BSTR JobGuid,
                       __RPC__in_opt ITsSbProvisioningPluginNotifySink *pSink);
                               HRESULT ( STDMETHODCALLTYPE *PatchVirtualMachines )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in BSTR JobXmlString,
                       __RPC__in BSTR JobGuid,
                       __RPC__in_opt ITsSbProvisioningPluginNotifySink *pSink,
                                 __RPC__in VM_PATCH_INFO *pVMPatchInfo);
                               HRESULT ( STDMETHODCALLTYPE *DeleteVirtualMachines )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in BSTR JobXmlString,
                       __RPC__in BSTR JobGuid,
                       __RPC__in_opt ITsSbProvisioningPluginNotifySink *pSink);
                               HRESULT ( STDMETHODCALLTYPE *CancelJob )(
            __RPC__in ITsSbProvisioning * This,
                       __RPC__in BSTR JobGuid);
        END_INTERFACE
    } ITsSbProvisioningVtbl;
    interface ITsSbProvisioning
    {
        CONST_VTBL struct ITsSbProvisioningVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
    ( (This)->lpVtbl -> Terminate(This,hr) )
    ( (This)->lpVtbl -> CreateVirtualMachines(This,JobXmlString,JobGuid,pSink) )
    ( (This)->lpVtbl -> PatchVirtualMachines(This,JobXmlString,JobGuid,pSink,pVMPatchInfo) )
    ( (This)->lpVtbl -> DeleteVirtualMachines(This,JobXmlString,JobGuid,pSink) )
    ( (This)->lpVtbl -> CancelJob(This,JobGuid) )
EXTERN_C const IID IID_ITsSbGenericNotifySink;
    typedef struct ITsSbGenericNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITsSbGenericNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITsSbGenericNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITsSbGenericNotifySink * This);
                               HRESULT ( STDMETHODCALLTYPE *OnCompleted )(
            __RPC__in ITsSbGenericNotifySink * This,
                       HRESULT Status);
                               HRESULT ( STDMETHODCALLTYPE *GetWaitTimeout )(
            __RPC__in ITsSbGenericNotifySink * This,
                        __RPC__out FILETIME *pftTimeout);
        END_INTERFACE
    } ITsSbGenericNotifySinkVtbl;
    interface ITsSbGenericNotifySink
    {
        CONST_VTBL struct ITsSbGenericNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCompleted(This,Status) )
    ( (This)->lpVtbl -> GetWaitTimeout(This,pftTimeout) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0033_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}

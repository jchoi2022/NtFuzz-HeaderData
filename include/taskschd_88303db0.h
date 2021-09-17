#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITaskFolderCollection ITaskFolderCollection;
typedef interface ITaskService ITaskService;
typedef interface ITaskHandler ITaskHandler;
typedef interface ITaskHandlerStatus ITaskHandlerStatus;
typedef interface ITaskVariables ITaskVariables;
typedef interface ITaskNamedValuePair ITaskNamedValuePair;
typedef interface ITaskNamedValueCollection ITaskNamedValueCollection;
typedef interface IRunningTask IRunningTask;
typedef interface IRunningTaskCollection IRunningTaskCollection;
typedef interface IRegisteredTask IRegisteredTask;
typedef interface ITrigger ITrigger;
typedef interface IIdleTrigger IIdleTrigger;
typedef interface ILogonTrigger ILogonTrigger;
typedef interface ISessionStateChangeTrigger ISessionStateChangeTrigger;
typedef interface IEventTrigger IEventTrigger;
typedef interface ITimeTrigger ITimeTrigger;
typedef interface IDailyTrigger IDailyTrigger;
typedef interface IWeeklyTrigger IWeeklyTrigger;
typedef interface IMonthlyTrigger IMonthlyTrigger;
typedef interface IMonthlyDOWTrigger IMonthlyDOWTrigger;
typedef interface IBootTrigger IBootTrigger;
typedef interface IRegistrationTrigger IRegistrationTrigger;
typedef interface IAction IAction;
typedef interface IExecAction IExecAction;
typedef interface IExecAction2 IExecAction2;
typedef interface IShowMessageAction IShowMessageAction;
typedef interface IComHandlerAction IComHandlerAction;
typedef interface IEmailAction IEmailAction;
typedef interface ITriggerCollection ITriggerCollection;
typedef interface IActionCollection IActionCollection;
typedef interface IPrincipal IPrincipal;
typedef interface IPrincipal2 IPrincipal2;
typedef interface IRegistrationInfo IRegistrationInfo;
typedef interface ITaskDefinition ITaskDefinition;
typedef interface ITaskSettings ITaskSettings;
typedef interface ITaskSettings2 ITaskSettings2;
typedef interface ITaskSettings3 ITaskSettings3;
typedef interface IMaintenanceSettings IMaintenanceSettings;
typedef class TaskScheduler TaskScheduler;
typedef class TaskHandlerPS TaskHandlerPS;
typedef class TaskHandlerStatusPS TaskHandlerStatusPS;
typedef interface IRegisteredTaskCollection IRegisteredTaskCollection;
typedef interface ITaskFolder ITaskFolder;
typedef interface IIdleSettings IIdleSettings;
typedef interface INetworkSettings INetworkSettings;
typedef interface IRepetitionPattern IRepetitionPattern;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_taskschd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_taskschd_0000_0000_v0_0_s_ifspec;
typedef
enum _TASK_RUN_FLAGS
    {
        TASK_RUN_NO_FLAGS = 0,
        TASK_RUN_AS_SELF = 0x1,
        TASK_RUN_IGNORE_CONSTRAINTS = 0x2,
        TASK_RUN_USE_SESSION_ID = 0x4,
        TASK_RUN_USER_SID = 0x8
    } TASK_RUN_FLAGS;
typedef
enum _TASK_ENUM_FLAGS
    {
        TASK_ENUM_HIDDEN = 0x1
    } TASK_ENUM_FLAGS;
typedef
enum _TASK_LOGON_TYPE
    {
        TASK_LOGON_NONE = 0,
        TASK_LOGON_PASSWORD = 1,
        TASK_LOGON_S4U = 2,
        TASK_LOGON_INTERACTIVE_TOKEN = 3,
        TASK_LOGON_GROUP = 4,
        TASK_LOGON_SERVICE_ACCOUNT = 5,
        TASK_LOGON_INTERACTIVE_TOKEN_OR_PASSWORD = 6
    } TASK_LOGON_TYPE;
typedef
enum _TASK_RUNLEVEL
    {
        TASK_RUNLEVEL_LUA = 0,
        TASK_RUNLEVEL_HIGHEST = 1
    } TASK_RUNLEVEL_TYPE;
typedef
enum _TASK_PROCESSTOKENSID
    {
        TASK_PROCESSTOKENSID_NONE = 0,
        TASK_PROCESSTOKENSID_UNRESTRICTED = 1,
        TASK_PROCESSTOKENSID_DEFAULT = 2
    } TASK_PROCESSTOKENSID_TYPE;
typedef
enum _TASK_STATE
    {
        TASK_STATE_UNKNOWN = 0,
        TASK_STATE_DISABLED = 1,
        TASK_STATE_QUEUED = 2,
        TASK_STATE_READY = 3,
        TASK_STATE_RUNNING = 4
    } TASK_STATE;
typedef
enum _TASK_CREATION
    {
        TASK_VALIDATE_ONLY = 0x1,
        TASK_CREATE = 0x2,
        TASK_UPDATE = 0x4,
        TASK_CREATE_OR_UPDATE = ( TASK_CREATE | TASK_UPDATE ) ,
        TASK_DISABLE = 0x8,
        TASK_DONT_ADD_PRINCIPAL_ACE = 0x10,
        TASK_IGNORE_REGISTRATION_TRIGGERS = 0x20
    } TASK_CREATION;
typedef
enum _TASK_TRIGGER_TYPE2
    {
        TASK_TRIGGER_EVENT = 0,
        TASK_TRIGGER_TIME = 1,
        TASK_TRIGGER_DAILY = 2,
        TASK_TRIGGER_WEEKLY = 3,
        TASK_TRIGGER_MONTHLY = 4,
        TASK_TRIGGER_MONTHLYDOW = 5,
        TASK_TRIGGER_IDLE = 6,
        TASK_TRIGGER_REGISTRATION = 7,
        TASK_TRIGGER_BOOT = 8,
        TASK_TRIGGER_LOGON = 9,
        TASK_TRIGGER_SESSION_STATE_CHANGE = 11,
        TASK_TRIGGER_CUSTOM_TRIGGER_01 = 12
    } TASK_TRIGGER_TYPE2;
typedef
enum _TASK_SESSION_STATE_CHANGE_TYPE
    {
        TASK_CONSOLE_CONNECT = 1,
        TASK_CONSOLE_DISCONNECT = 2,
        TASK_REMOTE_CONNECT = 3,
        TASK_REMOTE_DISCONNECT = 4,
        TASK_SESSION_LOCK = 7,
        TASK_SESSION_UNLOCK = 8
    } TASK_SESSION_STATE_CHANGE_TYPE;
typedef
enum _TASK_ACTION_TYPE
    {
        TASK_ACTION_EXEC = 0,
        TASK_ACTION_COM_HANDLER = 5,
        TASK_ACTION_SEND_EMAIL = 6,
        TASK_ACTION_SHOW_MESSAGE = 7
    } TASK_ACTION_TYPE;
typedef
enum _TASK_INSTANCES_POLICY
    {
        TASK_INSTANCES_PARALLEL = 0,
        TASK_INSTANCES_QUEUE = 1,
        TASK_INSTANCES_IGNORE_NEW = 2,
        TASK_INSTANCES_STOP_EXISTING = 3
    } TASK_INSTANCES_POLICY;
typedef
enum _TASK_COMPATIBILITY
    {
        TASK_COMPATIBILITY_AT = 0,
        TASK_COMPATIBILITY_V1 = 1,
        TASK_COMPATIBILITY_V2 = 2,
        TASK_COMPATIBILITY_V2_1 = 3,
        TASK_COMPATIBILITY_V2_2 = 4,
        TASK_COMPATIBILITY_V2_3 = 5,
        TASK_COMPATIBILITY_V2_4 = 6
    } TASK_COMPATIBILITY;
EXTERN_C const IID LIBID_TaskScheduler;
EXTERN_C const IID IID_ITaskFolderCollection;
    typedef struct ITaskFolderCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskFolderCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskFolderCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskFolderCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITaskFolderCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITaskFolderCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITaskFolderCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskFolderCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITaskFolderCollection * This,
                                __RPC__out LONG *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITaskFolderCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt ITaskFolder **ppFolder);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITaskFolderCollection * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
        END_INTERFACE
    } ITaskFolderCollectionVtbl;
    interface ITaskFolderCollection
    {
        CONST_VTBL struct ITaskFolderCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppFolder) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
EXTERN_C const IID IID_ITaskService;
    typedef struct ITaskServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITaskService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITaskService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITaskService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetFolder )(
            __RPC__in ITaskService * This,
                               __RPC__in_opt BSTR path,
                                __RPC__deref_out_opt ITaskFolder **ppFolder);
                               HRESULT ( STDMETHODCALLTYPE *GetRunningTasks )(
            __RPC__in ITaskService * This,
                       LONG flags,
                                __RPC__deref_out_opt IRunningTaskCollection **ppRunningTasks);
                               HRESULT ( STDMETHODCALLTYPE *NewTask )(
            __RPC__in ITaskService * This,
                       DWORD flags,
                                __RPC__deref_out_opt ITaskDefinition **ppDefinition);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ITaskService * This,
                                 VARIANT serverName,
                                 VARIANT user,
                                 VARIANT domain,
                                 VARIANT password);
                                        HRESULT ( STDMETHODCALLTYPE *get_Connected )(
            __RPC__in ITaskService * This,
                                __RPC__out VARIANT_BOOL *pConnected);
                                        HRESULT ( STDMETHODCALLTYPE *get_TargetServer )(
            __RPC__in ITaskService * This,
                                __RPC__deref_out_opt BSTR *pServer);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConnectedUser )(
            __RPC__in ITaskService * This,
                                __RPC__deref_out_opt BSTR *pUser);
                                        HRESULT ( STDMETHODCALLTYPE *get_ConnectedDomain )(
            __RPC__in ITaskService * This,
                                __RPC__deref_out_opt BSTR *pDomain);
                                        HRESULT ( STDMETHODCALLTYPE *get_HighestVersion )(
            __RPC__in ITaskService * This,
                                __RPC__out DWORD *pVersion);
        END_INTERFACE
    } ITaskServiceVtbl;
    interface ITaskService
    {
        CONST_VTBL struct ITaskServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetFolder(This,path,ppFolder) )
    ( (This)->lpVtbl -> GetRunningTasks(This,flags,ppRunningTasks) )
    ( (This)->lpVtbl -> NewTask(This,flags,ppDefinition) )
    ( (This)->lpVtbl -> Connect(This,serverName,user,domain,password) )
    ( (This)->lpVtbl -> get_Connected(This,pConnected) )
    ( (This)->lpVtbl -> get_TargetServer(This,pServer) )
    ( (This)->lpVtbl -> get_ConnectedUser(This,pUser) )
    ( (This)->lpVtbl -> get_ConnectedDomain(This,pDomain) )
    ( (This)->lpVtbl -> get_HighestVersion(This,pVersion) )
EXTERN_C const IID IID_ITaskHandler;
    typedef struct ITaskHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskHandler * This);
                           HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in ITaskHandler * This,
                       __RPC__in_opt IUnknown *pHandlerServices,
                       __RPC__in BSTR data);
                           HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in ITaskHandler * This,
                        __RPC__out HRESULT *pRetCode);
                           HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in ITaskHandler * This);
                           HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in ITaskHandler * This);
        END_INTERFACE
    } ITaskHandlerVtbl;
    interface ITaskHandler
    {
        CONST_VTBL struct ITaskHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,pHandlerServices,data) )
    ( (This)->lpVtbl -> Stop(This,pRetCode) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
EXTERN_C const IID IID_ITaskHandlerStatus;
    typedef struct ITaskHandlerStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskHandlerStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskHandlerStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskHandlerStatus * This);
                           HRESULT ( STDMETHODCALLTYPE *UpdateStatus )(
            __RPC__in ITaskHandlerStatus * This,
                       short percentComplete,
                       __RPC__in BSTR statusMessage);
                           HRESULT ( STDMETHODCALLTYPE *TaskCompleted )(
            __RPC__in ITaskHandlerStatus * This,
                       HRESULT taskErrCode);
        END_INTERFACE
    } ITaskHandlerStatusVtbl;
    interface ITaskHandlerStatus
    {
        CONST_VTBL struct ITaskHandlerStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdateStatus(This,percentComplete,statusMessage) )
    ( (This)->lpVtbl -> TaskCompleted(This,taskErrCode) )
EXTERN_C const IID IID_ITaskVariables;
    typedef struct ITaskVariablesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskVariables * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskVariables * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskVariables * This);
                           HRESULT ( STDMETHODCALLTYPE *GetInput )(
            __RPC__in ITaskVariables * This,
                                __RPC__deref_out_opt BSTR *pInput);
                           HRESULT ( STDMETHODCALLTYPE *SetOutput )(
            __RPC__in ITaskVariables * This,
                       __RPC__in BSTR input);
                           HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITaskVariables * This,
                                __RPC__deref_out_opt BSTR *pContext);
        END_INTERFACE
    } ITaskVariablesVtbl;
    interface ITaskVariables
    {
        CONST_VTBL struct ITaskVariablesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInput(This,pInput) )
    ( (This)->lpVtbl -> SetOutput(This,input) )
    ( (This)->lpVtbl -> GetContext(This,pContext) )
EXTERN_C const IID IID_ITaskNamedValuePair;
    typedef struct ITaskNamedValuePairVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskNamedValuePair * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskNamedValuePair * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskNamedValuePair * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskNamedValuePair * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskNamedValuePair * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskNamedValuePair * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskNamedValuePair * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            ITaskNamedValuePair * This,
                                BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            ITaskNamedValuePair * This,
                       BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            ITaskNamedValuePair * This,
                                BSTR *pValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            ITaskNamedValuePair * This,
                       BSTR value);
        END_INTERFACE
    } ITaskNamedValuePairVtbl;
    interface ITaskNamedValuePair
    {
        CONST_VTBL struct ITaskNamedValuePairVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Value(This,pValue) )
    ( (This)->lpVtbl -> put_Value(This,value) )
EXTERN_C const IID IID_ITaskNamedValueCollection;
    typedef struct ITaskNamedValueCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskNamedValueCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskNamedValueCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskNamedValueCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskNamedValueCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskNamedValueCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskNamedValueCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskNamedValueCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ITaskNamedValueCollection * This,
                                long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            ITaskNamedValueCollection * This,
                       LONG index,
                                ITaskNamedValuePair **ppPair);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ITaskNamedValueCollection * This,
                                IUnknown **ppEnum);
                               HRESULT ( STDMETHODCALLTYPE *Create )(
            ITaskNamedValueCollection * This,
                       BSTR name,
                       BSTR value,
                                ITaskNamedValuePair **ppPair);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ITaskNamedValueCollection * This,
                       LONG index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            ITaskNamedValueCollection * This);
        END_INTERFACE
    } ITaskNamedValueCollectionVtbl;
    interface ITaskNamedValueCollection
    {
        CONST_VTBL struct ITaskNamedValueCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppPair) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> Create(This,name,value,ppPair) )
    ( (This)->lpVtbl -> Remove(This,index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IRunningTask;
    typedef struct IRunningTaskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRunningTask * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRunningTask * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRunningTask * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRunningTask * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRunningTask * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRunningTask * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRunningTask * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRunningTask * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_InstanceGuid )(
            __RPC__in IRunningTask * This,
                                __RPC__deref_out_opt BSTR *pGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IRunningTask * This,
                                __RPC__deref_out_opt BSTR *pPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRunningTask * This,
                                __RPC__out TASK_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAction )(
            __RPC__in IRunningTask * This,
                                __RPC__deref_out_opt BSTR *pName);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IRunningTask * This);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IRunningTask * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnginePID )(
            __RPC__in IRunningTask * This,
                                __RPC__out DWORD *pPID);
        END_INTERFACE
    } IRunningTaskVtbl;
    interface IRunningTask
    {
        CONST_VTBL struct IRunningTaskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_InstanceGuid(This,pGuid) )
    ( (This)->lpVtbl -> get_Path(This,pPath) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_CurrentAction(This,pName) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_EnginePID(This,pPID) )
EXTERN_C const IID IID_IRunningTaskCollection;
    typedef struct IRunningTaskCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRunningTaskCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRunningTaskCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRunningTaskCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRunningTaskCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRunningTaskCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRunningTaskCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRunningTaskCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IRunningTaskCollection * This,
                                __RPC__out LONG *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRunningTaskCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt IRunningTask **ppRunningTask);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRunningTaskCollection * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
        END_INTERFACE
    } IRunningTaskCollectionVtbl;
    interface IRunningTaskCollection
    {
        CONST_VTBL struct IRunningTaskCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppRunningTask) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
EXTERN_C const IID IID_IRegisteredTask;
    typedef struct IRegisteredTaskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRegisteredTask * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRegisteredTask * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRegisteredTask * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRegisteredTask * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRegisteredTask * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRegisteredTask * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRegisteredTask * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRegisteredTask * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IRegisteredTask * This,
                                __RPC__deref_out_opt BSTR *pPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out TASK_STATE *pState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IRegisteredTask * This,
            VARIANT_BOOL enabled);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IRegisteredTask * This,
                       VARIANT params,
                                __RPC__deref_out_opt IRunningTask **ppRunningTask);
                               HRESULT ( STDMETHODCALLTYPE *RunEx )(
            __RPC__in IRegisteredTask * This,
                       VARIANT params,
                       LONG flags,
                       LONG sessionID,
                       __RPC__in BSTR user,
                                __RPC__deref_out_opt IRunningTask **ppRunningTask);
                               HRESULT ( STDMETHODCALLTYPE *GetInstances )(
            __RPC__in IRegisteredTask * This,
                       LONG flags,
                                __RPC__deref_out_opt IRunningTaskCollection **ppRunningTasks);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastRunTime )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out DATE *pLastRunTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastTaskResult )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out LONG *pLastTaskResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfMissedRuns )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out LONG *pNumberOfMissedRuns);
                                        HRESULT ( STDMETHODCALLTYPE *get_NextRunTime )(
            __RPC__in IRegisteredTask * This,
                                __RPC__out DATE *pNextRunTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Definition )(
            __RPC__in IRegisteredTask * This,
                                __RPC__deref_out_opt ITaskDefinition **ppDefinition);
                                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IRegisteredTask * This,
                                __RPC__deref_out_opt BSTR *pXml);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in IRegisteredTask * This,
                       LONG securityInformation,
                                __RPC__deref_out_opt BSTR *pSddl);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in IRegisteredTask * This,
                       __RPC__in BSTR sddl,
                       LONG flags);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IRegisteredTask * This,
                       LONG flags);
                                               HRESULT ( STDMETHODCALLTYPE *GetRunTimes )(
            __RPC__in IRegisteredTask * This,
                       __RPC__in const LPSYSTEMTIME pstStart,
                       __RPC__in const LPSYSTEMTIME pstEnd,
                            __RPC__inout DWORD *pCount,
                        __RPC__deref_out_opt LPSYSTEMTIME *pRunTimes);
        END_INTERFACE
    } IRegisteredTaskVtbl;
    interface IRegisteredTask
    {
        CONST_VTBL struct IRegisteredTaskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_Path(This,pPath) )
    ( (This)->lpVtbl -> get_State(This,pState) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> Run(This,params,ppRunningTask) )
    ( (This)->lpVtbl -> RunEx(This,params,flags,sessionID,user,ppRunningTask) )
    ( (This)->lpVtbl -> GetInstances(This,flags,ppRunningTasks) )
    ( (This)->lpVtbl -> get_LastRunTime(This,pLastRunTime) )
    ( (This)->lpVtbl -> get_LastTaskResult(This,pLastTaskResult) )
    ( (This)->lpVtbl -> get_NumberOfMissedRuns(This,pNumberOfMissedRuns) )
    ( (This)->lpVtbl -> get_NextRunTime(This,pNextRunTime) )
    ( (This)->lpVtbl -> get_Definition(This,ppDefinition) )
    ( (This)->lpVtbl -> get_Xml(This,pXml) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,securityInformation,pSddl) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,sddl,flags) )
    ( (This)->lpVtbl -> Stop(This,flags) )
    ( (This)->lpVtbl -> GetRunTimes(This,pstStart,pstEnd,pCount,pRunTimes) )
EXTERN_C const IID IID_ITrigger;
    typedef struct ITriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            ITrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            ITrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            ITrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            ITrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            ITrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ITrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ITrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            ITrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            ITrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            ITrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            ITrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ITrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ITrigger * This,
                       VARIANT_BOOL enabled);
        END_INTERFACE
    } ITriggerVtbl;
    interface ITrigger
    {
        CONST_VTBL struct ITriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
EXTERN_C const IID IID_IIdleTrigger;
    typedef struct IIdleTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIdleTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIdleTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIdleTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IIdleTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IIdleTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IIdleTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIdleTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IIdleTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IIdleTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IIdleTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IIdleTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IIdleTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IIdleTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IIdleTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IIdleTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IIdleTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IIdleTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IIdleTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IIdleTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IIdleTrigger * This,
                       VARIANT_BOOL enabled);
        END_INTERFACE
    } IIdleTriggerVtbl;
    interface IIdleTrigger
    {
        CONST_VTBL struct IIdleTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
EXTERN_C const IID IID_ILogonTrigger;
    typedef struct ILogonTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ILogonTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ILogonTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ILogonTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ILogonTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ILogonTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ILogonTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILogonTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            ILogonTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            ILogonTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            ILogonTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            ILogonTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            ILogonTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ILogonTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ILogonTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            ILogonTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            ILogonTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            ILogonTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            ILogonTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ILogonTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ILogonTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Delay )(
            ILogonTrigger * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_Delay )(
            ILogonTrigger * This,
                       BSTR delay);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserId )(
            ILogonTrigger * This,
                                BSTR *pUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserId )(
            ILogonTrigger * This,
                       BSTR user);
        END_INTERFACE
    } ILogonTriggerVtbl;
    interface ILogonTrigger
    {
        CONST_VTBL struct ILogonTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Delay(This,pDelay) )
    ( (This)->lpVtbl -> put_Delay(This,delay) )
    ( (This)->lpVtbl -> get_UserId(This,pUser) )
    ( (This)->lpVtbl -> put_UserId(This,user) )
EXTERN_C const IID IID_ISessionStateChangeTrigger;
    typedef struct ISessionStateChangeTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISessionStateChangeTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISessionStateChangeTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISessionStateChangeTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISessionStateChangeTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISessionStateChangeTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISessionStateChangeTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISessionStateChangeTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            ISessionStateChangeTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            ISessionStateChangeTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            ISessionStateChangeTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            ISessionStateChangeTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            ISessionStateChangeTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ISessionStateChangeTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ISessionStateChangeTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            ISessionStateChangeTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            ISessionStateChangeTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            ISessionStateChangeTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            ISessionStateChangeTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ISessionStateChangeTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ISessionStateChangeTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Delay )(
            ISessionStateChangeTrigger * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_Delay )(
            ISessionStateChangeTrigger * This,
                       BSTR delay);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserId )(
            ISessionStateChangeTrigger * This,
                                BSTR *pUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserId )(
            ISessionStateChangeTrigger * This,
                       BSTR user);
                                        HRESULT ( STDMETHODCALLTYPE *get_StateChange )(
            ISessionStateChangeTrigger * This,
                                TASK_SESSION_STATE_CHANGE_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *put_StateChange )(
            ISessionStateChangeTrigger * This,
                       TASK_SESSION_STATE_CHANGE_TYPE type);
        END_INTERFACE
    } ISessionStateChangeTriggerVtbl;
    interface ISessionStateChangeTrigger
    {
        CONST_VTBL struct ISessionStateChangeTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Delay(This,pDelay) )
    ( (This)->lpVtbl -> put_Delay(This,delay) )
    ( (This)->lpVtbl -> get_UserId(This,pUser) )
    ( (This)->lpVtbl -> put_UserId(This,user) )
    ( (This)->lpVtbl -> get_StateChange(This,pType) )
    ( (This)->lpVtbl -> put_StateChange(This,type) )
EXTERN_C const IID IID_IEventTrigger;
    typedef struct IEventTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEventTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEventTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEventTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEventTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEventTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEventTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IEventTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IEventTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IEventTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IEventTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IEventTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IEventTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IEventTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IEventTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IEventTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IEventTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IEventTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IEventTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IEventTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subscription )(
            IEventTrigger * This,
                                BSTR *pQuery);
                                        HRESULT ( STDMETHODCALLTYPE *put_Subscription )(
            IEventTrigger * This,
                       BSTR query);
                                        HRESULT ( STDMETHODCALLTYPE *get_Delay )(
            IEventTrigger * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_Delay )(
            IEventTrigger * This,
                       BSTR delay);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueQueries )(
            IEventTrigger * This,
                                ITaskNamedValueCollection **ppNamedXPaths);
                                        HRESULT ( STDMETHODCALLTYPE *put_ValueQueries )(
            IEventTrigger * This,
                       ITaskNamedValueCollection *pNamedXPaths);
        END_INTERFACE
    } IEventTriggerVtbl;
    interface IEventTrigger
    {
        CONST_VTBL struct IEventTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Subscription(This,pQuery) )
    ( (This)->lpVtbl -> put_Subscription(This,query) )
    ( (This)->lpVtbl -> get_Delay(This,pDelay) )
    ( (This)->lpVtbl -> put_Delay(This,delay) )
    ( (This)->lpVtbl -> get_ValueQueries(This,ppNamedXPaths) )
    ( (This)->lpVtbl -> put_ValueQueries(This,pNamedXPaths) )
EXTERN_C const IID IID_ITimeTrigger;
    typedef struct ITimeTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITimeTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITimeTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITimeTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITimeTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITimeTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITimeTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITimeTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            ITimeTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            ITimeTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            ITimeTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            ITimeTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            ITimeTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ITimeTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ITimeTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            ITimeTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            ITimeTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            ITimeTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            ITimeTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ITimeTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ITimeTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_RandomDelay )(
            ITimeTrigger * This,
                                BSTR *pRandomDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RandomDelay )(
            ITimeTrigger * This,
                       BSTR randomDelay);
        END_INTERFACE
    } ITimeTriggerVtbl;
    interface ITimeTrigger
    {
        CONST_VTBL struct ITimeTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_RandomDelay(This,pRandomDelay) )
    ( (This)->lpVtbl -> put_RandomDelay(This,randomDelay) )
EXTERN_C const IID IID_IDailyTrigger;
    typedef struct IDailyTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDailyTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDailyTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDailyTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IDailyTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IDailyTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IDailyTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDailyTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IDailyTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IDailyTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IDailyTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IDailyTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IDailyTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IDailyTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IDailyTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IDailyTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IDailyTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IDailyTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IDailyTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IDailyTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IDailyTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysInterval )(
            IDailyTrigger * This,
                                short *pDays);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysInterval )(
            IDailyTrigger * This,
                       short days);
                                        HRESULT ( STDMETHODCALLTYPE *get_RandomDelay )(
            IDailyTrigger * This,
                                BSTR *pRandomDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RandomDelay )(
            IDailyTrigger * This,
                       BSTR randomDelay);
        END_INTERFACE
    } IDailyTriggerVtbl;
    interface IDailyTrigger
    {
        CONST_VTBL struct IDailyTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DaysInterval(This,pDays) )
    ( (This)->lpVtbl -> put_DaysInterval(This,days) )
    ( (This)->lpVtbl -> get_RandomDelay(This,pRandomDelay) )
    ( (This)->lpVtbl -> put_RandomDelay(This,randomDelay) )
EXTERN_C const IID IID_IWeeklyTrigger;
    typedef struct IWeeklyTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWeeklyTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWeeklyTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWeeklyTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWeeklyTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWeeklyTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWeeklyTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWeeklyTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IWeeklyTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IWeeklyTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IWeeklyTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IWeeklyTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IWeeklyTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IWeeklyTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IWeeklyTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IWeeklyTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IWeeklyTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IWeeklyTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IWeeklyTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IWeeklyTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IWeeklyTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysOfWeek )(
            IWeeklyTrigger * This,
                                short *pDays);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysOfWeek )(
            IWeeklyTrigger * This,
                       short days);
                                        HRESULT ( STDMETHODCALLTYPE *get_WeeksInterval )(
            IWeeklyTrigger * This,
                                short *pWeeks);
                                        HRESULT ( STDMETHODCALLTYPE *put_WeeksInterval )(
            IWeeklyTrigger * This,
                       short weeks);
                                        HRESULT ( STDMETHODCALLTYPE *get_RandomDelay )(
            IWeeklyTrigger * This,
                                BSTR *pRandomDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RandomDelay )(
            IWeeklyTrigger * This,
                       BSTR randomDelay);
        END_INTERFACE
    } IWeeklyTriggerVtbl;
    interface IWeeklyTrigger
    {
        CONST_VTBL struct IWeeklyTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DaysOfWeek(This,pDays) )
    ( (This)->lpVtbl -> put_DaysOfWeek(This,days) )
    ( (This)->lpVtbl -> get_WeeksInterval(This,pWeeks) )
    ( (This)->lpVtbl -> put_WeeksInterval(This,weeks) )
    ( (This)->lpVtbl -> get_RandomDelay(This,pRandomDelay) )
    ( (This)->lpVtbl -> put_RandomDelay(This,randomDelay) )
EXTERN_C const IID IID_IMonthlyTrigger;
    typedef struct IMonthlyTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMonthlyTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMonthlyTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMonthlyTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMonthlyTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMonthlyTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMonthlyTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMonthlyTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IMonthlyTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IMonthlyTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IMonthlyTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IMonthlyTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IMonthlyTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IMonthlyTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IMonthlyTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IMonthlyTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IMonthlyTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IMonthlyTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IMonthlyTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IMonthlyTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IMonthlyTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysOfMonth )(
            IMonthlyTrigger * This,
                                long *pDays);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysOfMonth )(
            IMonthlyTrigger * This,
                       long days);
                                        HRESULT ( STDMETHODCALLTYPE *get_MonthsOfYear )(
            IMonthlyTrigger * This,
                                short *pMonths);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonthsOfYear )(
            IMonthlyTrigger * This,
                       short months);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnLastDayOfMonth )(
            IMonthlyTrigger * This,
                                VARIANT_BOOL *pLastDay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnLastDayOfMonth )(
            IMonthlyTrigger * This,
                       VARIANT_BOOL lastDay);
                                        HRESULT ( STDMETHODCALLTYPE *get_RandomDelay )(
            IMonthlyTrigger * This,
                                BSTR *pRandomDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RandomDelay )(
            IMonthlyTrigger * This,
                       BSTR randomDelay);
        END_INTERFACE
    } IMonthlyTriggerVtbl;
    interface IMonthlyTrigger
    {
        CONST_VTBL struct IMonthlyTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DaysOfMonth(This,pDays) )
    ( (This)->lpVtbl -> put_DaysOfMonth(This,days) )
    ( (This)->lpVtbl -> get_MonthsOfYear(This,pMonths) )
    ( (This)->lpVtbl -> put_MonthsOfYear(This,months) )
    ( (This)->lpVtbl -> get_RunOnLastDayOfMonth(This,pLastDay) )
    ( (This)->lpVtbl -> put_RunOnLastDayOfMonth(This,lastDay) )
    ( (This)->lpVtbl -> get_RandomDelay(This,pRandomDelay) )
    ( (This)->lpVtbl -> put_RandomDelay(This,randomDelay) )
EXTERN_C const IID IID_IMonthlyDOWTrigger;
    typedef struct IMonthlyDOWTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMonthlyDOWTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMonthlyDOWTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMonthlyDOWTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMonthlyDOWTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMonthlyDOWTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMonthlyDOWTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMonthlyDOWTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IMonthlyDOWTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IMonthlyDOWTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IMonthlyDOWTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IMonthlyDOWTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IMonthlyDOWTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IMonthlyDOWTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IMonthlyDOWTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IMonthlyDOWTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IMonthlyDOWTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IMonthlyDOWTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IMonthlyDOWTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IMonthlyDOWTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IMonthlyDOWTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysOfWeek )(
            IMonthlyDOWTrigger * This,
                                short *pDays);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysOfWeek )(
            IMonthlyDOWTrigger * This,
                       short days);
                                        HRESULT ( STDMETHODCALLTYPE *get_WeeksOfMonth )(
            IMonthlyDOWTrigger * This,
                                short *pWeeks);
                                        HRESULT ( STDMETHODCALLTYPE *put_WeeksOfMonth )(
            IMonthlyDOWTrigger * This,
                       short weeks);
                                        HRESULT ( STDMETHODCALLTYPE *get_MonthsOfYear )(
            IMonthlyDOWTrigger * This,
                                short *pMonths);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonthsOfYear )(
            IMonthlyDOWTrigger * This,
                       short months);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnLastWeekOfMonth )(
            IMonthlyDOWTrigger * This,
                                VARIANT_BOOL *pLastWeek);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnLastWeekOfMonth )(
            IMonthlyDOWTrigger * This,
                       VARIANT_BOOL lastWeek);
                                        HRESULT ( STDMETHODCALLTYPE *get_RandomDelay )(
            IMonthlyDOWTrigger * This,
                                BSTR *pRandomDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_RandomDelay )(
            IMonthlyDOWTrigger * This,
                       BSTR randomDelay);
        END_INTERFACE
    } IMonthlyDOWTriggerVtbl;
    interface IMonthlyDOWTrigger
    {
        CONST_VTBL struct IMonthlyDOWTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DaysOfWeek(This,pDays) )
    ( (This)->lpVtbl -> put_DaysOfWeek(This,days) )
    ( (This)->lpVtbl -> get_WeeksOfMonth(This,pWeeks) )
    ( (This)->lpVtbl -> put_WeeksOfMonth(This,weeks) )
    ( (This)->lpVtbl -> get_MonthsOfYear(This,pMonths) )
    ( (This)->lpVtbl -> put_MonthsOfYear(This,months) )
    ( (This)->lpVtbl -> get_RunOnLastWeekOfMonth(This,pLastWeek) )
    ( (This)->lpVtbl -> put_RunOnLastWeekOfMonth(This,lastWeek) )
    ( (This)->lpVtbl -> get_RandomDelay(This,pRandomDelay) )
    ( (This)->lpVtbl -> put_RandomDelay(This,randomDelay) )
EXTERN_C const IID IID_IBootTrigger;
    typedef struct IBootTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBootTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBootTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBootTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IBootTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IBootTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IBootTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBootTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IBootTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IBootTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IBootTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IBootTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IBootTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IBootTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IBootTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IBootTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IBootTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IBootTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IBootTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IBootTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IBootTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Delay )(
            IBootTrigger * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_Delay )(
            IBootTrigger * This,
                       BSTR delay);
        END_INTERFACE
    } IBootTriggerVtbl;
    interface IBootTrigger
    {
        CONST_VTBL struct IBootTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Delay(This,pDelay) )
    ( (This)->lpVtbl -> put_Delay(This,delay) )
EXTERN_C const IID IID_IRegistrationTrigger;
    typedef struct IRegistrationTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRegistrationTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRegistrationTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRegistrationTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IRegistrationTrigger * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IRegistrationTrigger * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IRegistrationTrigger * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRegistrationTrigger * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IRegistrationTrigger * This,
                                TASK_TRIGGER_TYPE2 *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IRegistrationTrigger * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IRegistrationTrigger * This,
                       BSTR id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Repetition )(
            IRegistrationTrigger * This,
                                IRepetitionPattern **ppRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Repetition )(
            IRegistrationTrigger * This,
                       IRepetitionPattern *pRepeat);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            IRegistrationTrigger * This,
                                BSTR *pTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            IRegistrationTrigger * This,
                       BSTR timelimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartBoundary )(
            IRegistrationTrigger * This,
                                BSTR *pStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartBoundary )(
            IRegistrationTrigger * This,
                       BSTR start);
                                        HRESULT ( STDMETHODCALLTYPE *get_EndBoundary )(
            IRegistrationTrigger * This,
                                BSTR *pEnd);
                                        HRESULT ( STDMETHODCALLTYPE *put_EndBoundary )(
            IRegistrationTrigger * This,
                       BSTR end);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            IRegistrationTrigger * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            IRegistrationTrigger * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Delay )(
            IRegistrationTrigger * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_Delay )(
            IRegistrationTrigger * This,
                       BSTR delay);
        END_INTERFACE
    } IRegistrationTriggerVtbl;
    interface IRegistrationTrigger
    {
        CONST_VTBL struct IRegistrationTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
    ( (This)->lpVtbl -> get_Repetition(This,ppRepeat) )
    ( (This)->lpVtbl -> put_Repetition(This,pRepeat) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,timelimit) )
    ( (This)->lpVtbl -> get_StartBoundary(This,pStart) )
    ( (This)->lpVtbl -> put_StartBoundary(This,start) )
    ( (This)->lpVtbl -> get_EndBoundary(This,pEnd) )
    ( (This)->lpVtbl -> put_EndBoundary(This,end) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Delay(This,pDelay) )
    ( (This)->lpVtbl -> put_Delay(This,delay) )
EXTERN_C const IID IID_IAction;
    typedef struct IActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IAction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IAction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IAction * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IAction * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IAction * This,
                                TASK_ACTION_TYPE *pType);
        END_INTERFACE
    } IActionVtbl;
    interface IAction
    {
        CONST_VTBL struct IActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
EXTERN_C const IID IID_IExecAction;
    typedef struct IExecActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExecAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExecAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExecAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IExecAction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IExecAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IExecAction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IExecAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IExecAction * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IExecAction * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IExecAction * This,
                                TASK_ACTION_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            IExecAction * This,
                                BSTR *pPath);
                                        HRESULT ( STDMETHODCALLTYPE *put_Path )(
            IExecAction * This,
                       BSTR path);
                                        HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
            IExecAction * This,
                                BSTR *pArgument);
                                        HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
            IExecAction * This,
                       BSTR argument);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            IExecAction * This,
                                BSTR *pWorkingDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            IExecAction * This,
                       BSTR workingDirectory);
        END_INTERFACE
    } IExecActionVtbl;
    interface IExecAction
    {
        CONST_VTBL struct IExecActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Path(This,pPath) )
    ( (This)->lpVtbl -> put_Path(This,path) )
    ( (This)->lpVtbl -> get_Arguments(This,pArgument) )
    ( (This)->lpVtbl -> put_Arguments(This,argument) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pWorkingDirectory) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,workingDirectory) )
EXTERN_C const IID IID_IExecAction2;
    typedef struct IExecAction2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExecAction2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExecAction2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExecAction2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IExecAction2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IExecAction2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IExecAction2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IExecAction2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IExecAction2 * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IExecAction2 * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IExecAction2 * This,
                                TASK_ACTION_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            IExecAction2 * This,
                                BSTR *pPath);
                                        HRESULT ( STDMETHODCALLTYPE *put_Path )(
            IExecAction2 * This,
                       BSTR path);
                                        HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
            IExecAction2 * This,
                                BSTR *pArgument);
                                        HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
            IExecAction2 * This,
                       BSTR argument);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            IExecAction2 * This,
                                BSTR *pWorkingDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            IExecAction2 * This,
                       BSTR workingDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *get_HideAppWindow )(
            IExecAction2 * This,
                                VARIANT_BOOL *pHideAppWindow);
                                        HRESULT ( STDMETHODCALLTYPE *put_HideAppWindow )(
            IExecAction2 * This,
                       VARIANT_BOOL hideAppWindow);
        END_INTERFACE
    } IExecAction2Vtbl;
    interface IExecAction2
    {
        CONST_VTBL struct IExecAction2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Path(This,pPath) )
    ( (This)->lpVtbl -> put_Path(This,path) )
    ( (This)->lpVtbl -> get_Arguments(This,pArgument) )
    ( (This)->lpVtbl -> put_Arguments(This,argument) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pWorkingDirectory) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,workingDirectory) )
    ( (This)->lpVtbl -> get_HideAppWindow(This,pHideAppWindow) )
    ( (This)->lpVtbl -> put_HideAppWindow(This,hideAppWindow) )
EXTERN_C const IID IID_IShowMessageAction;
    typedef struct IShowMessageActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IShowMessageAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IShowMessageAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IShowMessageAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IShowMessageAction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IShowMessageAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IShowMessageAction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShowMessageAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IShowMessageAction * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IShowMessageAction * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IShowMessageAction * This,
                                TASK_ACTION_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            IShowMessageAction * This,
                                BSTR *pTitle);
                                        HRESULT ( STDMETHODCALLTYPE *put_Title )(
            IShowMessageAction * This,
                       BSTR title);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageBody )(
            IShowMessageAction * This,
                                BSTR *pMessageBody);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageBody )(
            IShowMessageAction * This,
                       BSTR messageBody);
        END_INTERFACE
    } IShowMessageActionVtbl;
    interface IShowMessageAction
    {
        CONST_VTBL struct IShowMessageActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Title(This,pTitle) )
    ( (This)->lpVtbl -> put_Title(This,title) )
    ( (This)->lpVtbl -> get_MessageBody(This,pMessageBody) )
    ( (This)->lpVtbl -> put_MessageBody(This,messageBody) )
EXTERN_C const IID IID_IComHandlerAction;
    typedef struct IComHandlerActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IComHandlerAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IComHandlerAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IComHandlerAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IComHandlerAction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IComHandlerAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IComHandlerAction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComHandlerAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IComHandlerAction * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IComHandlerAction * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IComHandlerAction * This,
                                TASK_ACTION_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassId )(
            IComHandlerAction * This,
                                BSTR *pClsid);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassId )(
            IComHandlerAction * This,
                       BSTR clsid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Data )(
            IComHandlerAction * This,
                                BSTR *pData);
                                        HRESULT ( STDMETHODCALLTYPE *put_Data )(
            IComHandlerAction * This,
                       BSTR data);
        END_INTERFACE
    } IComHandlerActionVtbl;
    interface IComHandlerAction
    {
        CONST_VTBL struct IComHandlerActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_ClassId(This,pClsid) )
    ( (This)->lpVtbl -> put_ClassId(This,clsid) )
    ( (This)->lpVtbl -> get_Data(This,pData) )
    ( (This)->lpVtbl -> put_Data(This,data) )
EXTERN_C const IID IID_IEmailAction;
    typedef struct IEmailActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEmailAction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEmailAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEmailAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEmailAction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEmailAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEmailAction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEmailAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IEmailAction * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IEmailAction * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            IEmailAction * This,
                                TASK_ACTION_TYPE *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Server )(
            IEmailAction * This,
                                BSTR *pServer);
                                        HRESULT ( STDMETHODCALLTYPE *put_Server )(
            IEmailAction * This,
                       BSTR server);
                                        HRESULT ( STDMETHODCALLTYPE *get_Subject )(
            IEmailAction * This,
                                BSTR *pSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_Subject )(
            IEmailAction * This,
                       BSTR subject);
                                        HRESULT ( STDMETHODCALLTYPE *get_To )(
            IEmailAction * This,
                                BSTR *pTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_To )(
            IEmailAction * This,
                       BSTR to);
                                        HRESULT ( STDMETHODCALLTYPE *get_Cc )(
            IEmailAction * This,
                                BSTR *pCc);
                                        HRESULT ( STDMETHODCALLTYPE *put_Cc )(
            IEmailAction * This,
                       BSTR cc);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bcc )(
            IEmailAction * This,
                                BSTR *pBcc);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bcc )(
            IEmailAction * This,
                       BSTR bcc);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReplyTo )(
            IEmailAction * This,
                                BSTR *pReplyTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReplyTo )(
            IEmailAction * This,
                       BSTR replyTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_From )(
            IEmailAction * This,
                                BSTR *pFrom);
                                        HRESULT ( STDMETHODCALLTYPE *put_From )(
            IEmailAction * This,
                       BSTR from);
                                        HRESULT ( STDMETHODCALLTYPE *get_HeaderFields )(
            IEmailAction * This,
                                ITaskNamedValueCollection **ppHeaderFields);
                                        HRESULT ( STDMETHODCALLTYPE *put_HeaderFields )(
            IEmailAction * This,
                       ITaskNamedValueCollection *pHeaderFields);
                                        HRESULT ( STDMETHODCALLTYPE *get_Body )(
            IEmailAction * This,
                                BSTR *pBody);
                                        HRESULT ( STDMETHODCALLTYPE *put_Body )(
            IEmailAction * This,
                       BSTR body);
                                        HRESULT ( STDMETHODCALLTYPE *get_Attachments )(
            IEmailAction * This,
                                SAFEARRAY * *pAttachements);
                                        HRESULT ( STDMETHODCALLTYPE *put_Attachments )(
            IEmailAction * This,
                               SAFEARRAY * pAttachements);
        END_INTERFACE
    } IEmailActionVtbl;
    interface IEmailAction
    {
        CONST_VTBL struct IEmailActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Server(This,pServer) )
    ( (This)->lpVtbl -> put_Server(This,server) )
    ( (This)->lpVtbl -> get_Subject(This,pSubject) )
    ( (This)->lpVtbl -> put_Subject(This,subject) )
    ( (This)->lpVtbl -> get_To(This,pTo) )
    ( (This)->lpVtbl -> put_To(This,to) )
    ( (This)->lpVtbl -> get_Cc(This,pCc) )
    ( (This)->lpVtbl -> put_Cc(This,cc) )
    ( (This)->lpVtbl -> get_Bcc(This,pBcc) )
    ( (This)->lpVtbl -> put_Bcc(This,bcc) )
    ( (This)->lpVtbl -> get_ReplyTo(This,pReplyTo) )
    ( (This)->lpVtbl -> put_ReplyTo(This,replyTo) )
    ( (This)->lpVtbl -> get_From(This,pFrom) )
    ( (This)->lpVtbl -> put_From(This,from) )
    ( (This)->lpVtbl -> get_HeaderFields(This,ppHeaderFields) )
    ( (This)->lpVtbl -> put_HeaderFields(This,pHeaderFields) )
    ( (This)->lpVtbl -> get_Body(This,pBody) )
    ( (This)->lpVtbl -> put_Body(This,body) )
    ( (This)->lpVtbl -> get_Attachments(This,pAttachements) )
    ( (This)->lpVtbl -> put_Attachments(This,pAttachements) )
EXTERN_C const IID IID_ITriggerCollection;
    typedef struct ITriggerCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITriggerCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITriggerCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITriggerCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITriggerCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITriggerCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITriggerCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITriggerCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            ITriggerCollection * This,
                                long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            ITriggerCollection * This,
                       long index,
                                ITrigger **ppTrigger);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            ITriggerCollection * This,
                                IUnknown **ppEnum);
                               HRESULT ( STDMETHODCALLTYPE *Create )(
            ITriggerCollection * This,
                       TASK_TRIGGER_TYPE2 type,
                                ITrigger **ppTrigger);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            ITriggerCollection * This,
                       VARIANT index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            ITriggerCollection * This);
        END_INTERFACE
    } ITriggerCollectionVtbl;
    interface ITriggerCollection
    {
        CONST_VTBL struct ITriggerCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppTrigger) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> Create(This,type,ppTrigger) )
    ( (This)->lpVtbl -> Remove(This,index) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IActionCollection;
    typedef struct IActionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActionCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IActionCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IActionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IActionCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IActionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            IActionCollection * This,
                                long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            IActionCollection * This,
                       long index,
                                IAction **ppAction);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            IActionCollection * This,
                                IUnknown **ppEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_XmlText )(
            IActionCollection * This,
                                BSTR *pText);
                                        HRESULT ( STDMETHODCALLTYPE *put_XmlText )(
            IActionCollection * This,
                       BSTR text);
                               HRESULT ( STDMETHODCALLTYPE *Create )(
            IActionCollection * This,
                       TASK_ACTION_TYPE type,
                                IAction **ppAction);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            IActionCollection * This,
                       VARIANT index);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            IActionCollection * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Context )(
            IActionCollection * This,
                                BSTR *pContext);
                                        HRESULT ( STDMETHODCALLTYPE *put_Context )(
            IActionCollection * This,
                       BSTR context);
        END_INTERFACE
    } IActionCollectionVtbl;
    interface IActionCollection
    {
        CONST_VTBL struct IActionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppAction) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> get_XmlText(This,pText) )
    ( (This)->lpVtbl -> put_XmlText(This,text) )
    ( (This)->lpVtbl -> Create(This,type,ppAction) )
    ( (This)->lpVtbl -> Remove(This,index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_Context(This,pContext) )
    ( (This)->lpVtbl -> put_Context(This,context) )
EXTERN_C const IID IID_IPrincipal;
    typedef struct IPrincipalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrincipal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrincipal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrincipal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrincipal * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrincipal * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrincipal * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrincipal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            IPrincipal * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            IPrincipal * This,
                       BSTR Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            IPrincipal * This,
                                BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            IPrincipal * This,
                       BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserId )(
            IPrincipal * This,
                                BSTR *pUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserId )(
            IPrincipal * This,
                       BSTR user);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogonType )(
            IPrincipal * This,
                                TASK_LOGON_TYPE *pLogon);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogonType )(
            IPrincipal * This,
                       TASK_LOGON_TYPE logon);
                                        HRESULT ( STDMETHODCALLTYPE *get_GroupId )(
            IPrincipal * This,
                                BSTR *pGroup);
                                        HRESULT ( STDMETHODCALLTYPE *put_GroupId )(
            IPrincipal * This,
                       BSTR group);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLevel )(
            IPrincipal * This,
                                TASK_RUNLEVEL_TYPE *pRunLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLevel )(
            IPrincipal * This,
                       TASK_RUNLEVEL_TYPE runLevel);
        END_INTERFACE
    } IPrincipalVtbl;
    interface IPrincipal
    {
        CONST_VTBL struct IPrincipalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,Id) )
    ( (This)->lpVtbl -> get_DisplayName(This,pName) )
    ( (This)->lpVtbl -> put_DisplayName(This,name) )
    ( (This)->lpVtbl -> get_UserId(This,pUser) )
    ( (This)->lpVtbl -> put_UserId(This,user) )
    ( (This)->lpVtbl -> get_LogonType(This,pLogon) )
    ( (This)->lpVtbl -> put_LogonType(This,logon) )
    ( (This)->lpVtbl -> get_GroupId(This,pGroup) )
    ( (This)->lpVtbl -> put_GroupId(This,group) )
    ( (This)->lpVtbl -> get_RunLevel(This,pRunLevel) )
    ( (This)->lpVtbl -> put_RunLevel(This,runLevel) )
EXTERN_C const IID IID_IPrincipal2;
    typedef struct IPrincipal2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPrincipal2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPrincipal2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPrincipal2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPrincipal2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPrincipal2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPrincipal2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrincipal2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProcessTokenSidType )(
            IPrincipal2 * This,
                                TASK_PROCESSTOKENSID_TYPE *pProcessTokenSidType);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProcessTokenSidType )(
            IPrincipal2 * This,
                       TASK_PROCESSTOKENSID_TYPE processTokenSidType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequiredPrivilegeCount )(
            IPrincipal2 * This,
                                long *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequiredPrivilege )(
            IPrincipal2 * This,
                       long index,
                                BSTR *pPrivilege);
                               HRESULT ( STDMETHODCALLTYPE *AddRequiredPrivilege )(
            IPrincipal2 * This,
                       BSTR privilege);
        END_INTERFACE
    } IPrincipal2Vtbl;
    interface IPrincipal2
    {
        CONST_VTBL struct IPrincipal2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProcessTokenSidType(This,pProcessTokenSidType) )
    ( (This)->lpVtbl -> put_ProcessTokenSidType(This,processTokenSidType) )
    ( (This)->lpVtbl -> get_RequiredPrivilegeCount(This,pCount) )
    ( (This)->lpVtbl -> get_RequiredPrivilege(This,index,pPrivilege) )
    ( (This)->lpVtbl -> AddRequiredPrivilege(This,privilege) )
EXTERN_C const IID IID_IRegistrationInfo;
    typedef struct IRegistrationInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRegistrationInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRegistrationInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRegistrationInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IRegistrationInfo * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IRegistrationInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IRegistrationInfo * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRegistrationInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            IRegistrationInfo * This,
                                BSTR *pDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            IRegistrationInfo * This,
                       BSTR description);
                                        HRESULT ( STDMETHODCALLTYPE *get_Author )(
            IRegistrationInfo * This,
                                BSTR *pAuthor);
                                        HRESULT ( STDMETHODCALLTYPE *put_Author )(
            IRegistrationInfo * This,
                       BSTR author);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            IRegistrationInfo * This,
                                BSTR *pVersion);
                                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            IRegistrationInfo * This,
                       BSTR version);
                                        HRESULT ( STDMETHODCALLTYPE *get_Date )(
            IRegistrationInfo * This,
                                BSTR *pDate);
                                        HRESULT ( STDMETHODCALLTYPE *put_Date )(
            IRegistrationInfo * This,
                       BSTR date);
                                        HRESULT ( STDMETHODCALLTYPE *get_Documentation )(
            IRegistrationInfo * This,
                                BSTR *pDocumentation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Documentation )(
            IRegistrationInfo * This,
                       BSTR documentation);
                                        HRESULT ( STDMETHODCALLTYPE *get_XmlText )(
            IRegistrationInfo * This,
                                BSTR *pText);
                                        HRESULT ( STDMETHODCALLTYPE *put_XmlText )(
            IRegistrationInfo * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_URI )(
            IRegistrationInfo * This,
                                BSTR *pUri);
                                        HRESULT ( STDMETHODCALLTYPE *put_URI )(
            IRegistrationInfo * This,
                       BSTR uri);
                                        HRESULT ( STDMETHODCALLTYPE *get_SecurityDescriptor )(
            IRegistrationInfo * This,
                                VARIANT *pSddl);
                                        HRESULT ( STDMETHODCALLTYPE *put_SecurityDescriptor )(
            IRegistrationInfo * This,
                       VARIANT sddl);
                                        HRESULT ( STDMETHODCALLTYPE *get_Source )(
            IRegistrationInfo * This,
                                BSTR *pSource);
                                        HRESULT ( STDMETHODCALLTYPE *put_Source )(
            IRegistrationInfo * This,
                       BSTR source);
        END_INTERFACE
    } IRegistrationInfoVtbl;
    interface IRegistrationInfo
    {
        CONST_VTBL struct IRegistrationInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,pDescription) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> get_Author(This,pAuthor) )
    ( (This)->lpVtbl -> put_Author(This,author) )
    ( (This)->lpVtbl -> get_Version(This,pVersion) )
    ( (This)->lpVtbl -> put_Version(This,version) )
    ( (This)->lpVtbl -> get_Date(This,pDate) )
    ( (This)->lpVtbl -> put_Date(This,date) )
    ( (This)->lpVtbl -> get_Documentation(This,pDocumentation) )
    ( (This)->lpVtbl -> put_Documentation(This,documentation) )
    ( (This)->lpVtbl -> get_XmlText(This,pText) )
    ( (This)->lpVtbl -> put_XmlText(This,text) )
    ( (This)->lpVtbl -> get_URI(This,pUri) )
    ( (This)->lpVtbl -> put_URI(This,uri) )
    ( (This)->lpVtbl -> get_SecurityDescriptor(This,pSddl) )
    ( (This)->lpVtbl -> put_SecurityDescriptor(This,sddl) )
    ( (This)->lpVtbl -> get_Source(This,pSource) )
    ( (This)->lpVtbl -> put_Source(This,source) )
EXTERN_C const IID IID_ITaskDefinition;
    typedef struct ITaskDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskDefinition * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskDefinition * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskDefinition * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RegistrationInfo )(
            ITaskDefinition * This,
                                IRegistrationInfo **ppRegistrationInfo);
                                        HRESULT ( STDMETHODCALLTYPE *put_RegistrationInfo )(
            ITaskDefinition * This,
                       IRegistrationInfo *pRegistrationInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_Triggers )(
            ITaskDefinition * This,
                                ITriggerCollection **ppTriggers);
                                        HRESULT ( STDMETHODCALLTYPE *put_Triggers )(
            ITaskDefinition * This,
                       ITriggerCollection *pTriggers);
                                        HRESULT ( STDMETHODCALLTYPE *get_Settings )(
            ITaskDefinition * This,
                                ITaskSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_Settings )(
            ITaskDefinition * This,
                       ITaskSettings *pSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_Data )(
            ITaskDefinition * This,
                                BSTR *pData);
                                        HRESULT ( STDMETHODCALLTYPE *put_Data )(
            ITaskDefinition * This,
                       BSTR data);
                                        HRESULT ( STDMETHODCALLTYPE *get_Principal )(
            ITaskDefinition * This,
                                IPrincipal **ppPrincipal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Principal )(
            ITaskDefinition * This,
                       IPrincipal *pPrincipal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Actions )(
            ITaskDefinition * This,
                                IActionCollection **ppActions);
                                        HRESULT ( STDMETHODCALLTYPE *put_Actions )(
            ITaskDefinition * This,
                       IActionCollection *pActions);
                                        HRESULT ( STDMETHODCALLTYPE *get_XmlText )(
            ITaskDefinition * This,
                                BSTR *pXml);
                                        HRESULT ( STDMETHODCALLTYPE *put_XmlText )(
            ITaskDefinition * This,
                       BSTR xml);
        END_INTERFACE
    } ITaskDefinitionVtbl;
    interface ITaskDefinition
    {
        CONST_VTBL struct ITaskDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RegistrationInfo(This,ppRegistrationInfo) )
    ( (This)->lpVtbl -> put_RegistrationInfo(This,pRegistrationInfo) )
    ( (This)->lpVtbl -> get_Triggers(This,ppTriggers) )
    ( (This)->lpVtbl -> put_Triggers(This,pTriggers) )
    ( (This)->lpVtbl -> get_Settings(This,ppSettings) )
    ( (This)->lpVtbl -> put_Settings(This,pSettings) )
    ( (This)->lpVtbl -> get_Data(This,pData) )
    ( (This)->lpVtbl -> put_Data(This,data) )
    ( (This)->lpVtbl -> get_Principal(This,ppPrincipal) )
    ( (This)->lpVtbl -> put_Principal(This,pPrincipal) )
    ( (This)->lpVtbl -> get_Actions(This,ppActions) )
    ( (This)->lpVtbl -> put_Actions(This,pActions) )
    ( (This)->lpVtbl -> get_XmlText(This,pXml) )
    ( (This)->lpVtbl -> put_XmlText(This,xml) )
EXTERN_C const IID IID_ITaskSettings;
    typedef struct ITaskSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskSettings * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskSettings * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowDemandStart )(
            ITaskSettings * This,
                                VARIANT_BOOL *pAllowDemandStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowDemandStart )(
            ITaskSettings * This,
                       VARIANT_BOOL allowDemandStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_RestartInterval )(
            ITaskSettings * This,
                                BSTR *pRestartInterval);
                                        HRESULT ( STDMETHODCALLTYPE *put_RestartInterval )(
            ITaskSettings * This,
                       BSTR restartInterval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RestartCount )(
            ITaskSettings * This,
                                int *pRestartCount);
                                        HRESULT ( STDMETHODCALLTYPE *put_RestartCount )(
            ITaskSettings * This,
                       int restartCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultipleInstances )(
            ITaskSettings * This,
                                TASK_INSTANCES_POLICY *pPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultipleInstances )(
            ITaskSettings * This,
                       TASK_INSTANCES_POLICY policy);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopIfGoingOnBatteries )(
            ITaskSettings * This,
                                VARIANT_BOOL *pStopIfOnBatteries);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopIfGoingOnBatteries )(
            ITaskSettings * This,
                       VARIANT_BOOL stopIfOnBatteries);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisallowStartIfOnBatteries )(
            ITaskSettings * This,
                                VARIANT_BOOL *pDisallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisallowStartIfOnBatteries )(
            ITaskSettings * This,
                       VARIANT_BOOL disallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowHardTerminate )(
            ITaskSettings * This,
                                VARIANT_BOOL *pAllowHardTerminate);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowHardTerminate )(
            ITaskSettings * This,
                       VARIANT_BOOL allowHardTerminate);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartWhenAvailable )(
            ITaskSettings * This,
                                VARIANT_BOOL *pStartWhenAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartWhenAvailable )(
            ITaskSettings * This,
                       VARIANT_BOOL startWhenAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_XmlText )(
            ITaskSettings * This,
                                BSTR *pText);
                                        HRESULT ( STDMETHODCALLTYPE *put_XmlText )(
            ITaskSettings * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnlyIfNetworkAvailable )(
            ITaskSettings * This,
                                VARIANT_BOOL *pRunOnlyIfNetworkAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnlyIfNetworkAvailable )(
            ITaskSettings * This,
                       VARIANT_BOOL runOnlyIfNetworkAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ITaskSettings * This,
                                BSTR *pExecutionTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ITaskSettings * This,
                       BSTR executionTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ITaskSettings * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ITaskSettings * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeleteExpiredTaskAfter )(
            ITaskSettings * This,
                                BSTR *pExpirationDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_DeleteExpiredTaskAfter )(
            ITaskSettings * This,
                       BSTR expirationDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            ITaskSettings * This,
                                int *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            ITaskSettings * This,
                       int priority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Compatibility )(
            ITaskSettings * This,
                                TASK_COMPATIBILITY *pCompatLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_Compatibility )(
            ITaskSettings * This,
                       TASK_COMPATIBILITY compatLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
            ITaskSettings * This,
                                VARIANT_BOOL *pHidden);
                                        HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
            ITaskSettings * This,
                       VARIANT_BOOL hidden);
                                        HRESULT ( STDMETHODCALLTYPE *get_IdleSettings )(
            ITaskSettings * This,
                                IIdleSettings **ppIdleSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_IdleSettings )(
            ITaskSettings * This,
                       IIdleSettings *pIdleSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnlyIfIdle )(
            ITaskSettings * This,
                                VARIANT_BOOL *pRunOnlyIfIdle);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnlyIfIdle )(
            ITaskSettings * This,
                       VARIANT_BOOL runOnlyIfIdle);
                                        HRESULT ( STDMETHODCALLTYPE *get_WakeToRun )(
            ITaskSettings * This,
                                VARIANT_BOOL *pWake);
                                        HRESULT ( STDMETHODCALLTYPE *put_WakeToRun )(
            ITaskSettings * This,
                       VARIANT_BOOL wake);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkSettings )(
            ITaskSettings * This,
                                INetworkSettings **ppNetworkSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkSettings )(
            ITaskSettings * This,
                       INetworkSettings *pNetworkSettings);
        END_INTERFACE
    } ITaskSettingsVtbl;
    interface ITaskSettings
    {
        CONST_VTBL struct ITaskSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AllowDemandStart(This,pAllowDemandStart) )
    ( (This)->lpVtbl -> put_AllowDemandStart(This,allowDemandStart) )
    ( (This)->lpVtbl -> get_RestartInterval(This,pRestartInterval) )
    ( (This)->lpVtbl -> put_RestartInterval(This,restartInterval) )
    ( (This)->lpVtbl -> get_RestartCount(This,pRestartCount) )
    ( (This)->lpVtbl -> put_RestartCount(This,restartCount) )
    ( (This)->lpVtbl -> get_MultipleInstances(This,pPolicy) )
    ( (This)->lpVtbl -> put_MultipleInstances(This,policy) )
    ( (This)->lpVtbl -> get_StopIfGoingOnBatteries(This,pStopIfOnBatteries) )
    ( (This)->lpVtbl -> put_StopIfGoingOnBatteries(This,stopIfOnBatteries) )
    ( (This)->lpVtbl -> get_DisallowStartIfOnBatteries(This,pDisallowStart) )
    ( (This)->lpVtbl -> put_DisallowStartIfOnBatteries(This,disallowStart) )
    ( (This)->lpVtbl -> get_AllowHardTerminate(This,pAllowHardTerminate) )
    ( (This)->lpVtbl -> put_AllowHardTerminate(This,allowHardTerminate) )
    ( (This)->lpVtbl -> get_StartWhenAvailable(This,pStartWhenAvailable) )
    ( (This)->lpVtbl -> put_StartWhenAvailable(This,startWhenAvailable) )
    ( (This)->lpVtbl -> get_XmlText(This,pText) )
    ( (This)->lpVtbl -> put_XmlText(This,text) )
    ( (This)->lpVtbl -> get_RunOnlyIfNetworkAvailable(This,pRunOnlyIfNetworkAvailable) )
    ( (This)->lpVtbl -> put_RunOnlyIfNetworkAvailable(This,runOnlyIfNetworkAvailable) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pExecutionTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,executionTimeLimit) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DeleteExpiredTaskAfter(This,pExpirationDelay) )
    ( (This)->lpVtbl -> put_DeleteExpiredTaskAfter(This,expirationDelay) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> put_Priority(This,priority) )
    ( (This)->lpVtbl -> get_Compatibility(This,pCompatLevel) )
    ( (This)->lpVtbl -> put_Compatibility(This,compatLevel) )
    ( (This)->lpVtbl -> get_Hidden(This,pHidden) )
    ( (This)->lpVtbl -> put_Hidden(This,hidden) )
    ( (This)->lpVtbl -> get_IdleSettings(This,ppIdleSettings) )
    ( (This)->lpVtbl -> put_IdleSettings(This,pIdleSettings) )
    ( (This)->lpVtbl -> get_RunOnlyIfIdle(This,pRunOnlyIfIdle) )
    ( (This)->lpVtbl -> put_RunOnlyIfIdle(This,runOnlyIfIdle) )
    ( (This)->lpVtbl -> get_WakeToRun(This,pWake) )
    ( (This)->lpVtbl -> put_WakeToRun(This,wake) )
    ( (This)->lpVtbl -> get_NetworkSettings(This,ppNetworkSettings) )
    ( (This)->lpVtbl -> put_NetworkSettings(This,pNetworkSettings) )
EXTERN_C const IID IID_ITaskSettings2;
    typedef struct ITaskSettings2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskSettings2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskSettings2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskSettings2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskSettings2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskSettings2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskSettings2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskSettings2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisallowStartOnRemoteAppSession )(
            ITaskSettings2 * This,
                                VARIANT_BOOL *pDisallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisallowStartOnRemoteAppSession )(
            ITaskSettings2 * This,
                       VARIANT_BOOL disallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseUnifiedSchedulingEngine )(
            ITaskSettings2 * This,
                                VARIANT_BOOL *pUseUnifiedEngine);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseUnifiedSchedulingEngine )(
            ITaskSettings2 * This,
                       VARIANT_BOOL useUnifiedEngine);
        END_INTERFACE
    } ITaskSettings2Vtbl;
    interface ITaskSettings2
    {
        CONST_VTBL struct ITaskSettings2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisallowStartOnRemoteAppSession(This,pDisallowStart) )
    ( (This)->lpVtbl -> put_DisallowStartOnRemoteAppSession(This,disallowStart) )
    ( (This)->lpVtbl -> get_UseUnifiedSchedulingEngine(This,pUseUnifiedEngine) )
    ( (This)->lpVtbl -> put_UseUnifiedSchedulingEngine(This,useUnifiedEngine) )
EXTERN_C const IID IID_ITaskSettings3;
    typedef struct ITaskSettings3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskSettings3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskSettings3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskSettings3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ITaskSettings3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ITaskSettings3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ITaskSettings3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskSettings3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowDemandStart )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pAllowDemandStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowDemandStart )(
            ITaskSettings3 * This,
                       VARIANT_BOOL allowDemandStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_RestartInterval )(
            ITaskSettings3 * This,
                                BSTR *pRestartInterval);
                                        HRESULT ( STDMETHODCALLTYPE *put_RestartInterval )(
            ITaskSettings3 * This,
                       BSTR restartInterval);
                                        HRESULT ( STDMETHODCALLTYPE *get_RestartCount )(
            ITaskSettings3 * This,
                                int *pRestartCount);
                                        HRESULT ( STDMETHODCALLTYPE *put_RestartCount )(
            ITaskSettings3 * This,
                       int restartCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultipleInstances )(
            ITaskSettings3 * This,
                                TASK_INSTANCES_POLICY *pPolicy);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultipleInstances )(
            ITaskSettings3 * This,
                       TASK_INSTANCES_POLICY policy);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopIfGoingOnBatteries )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pStopIfOnBatteries);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopIfGoingOnBatteries )(
            ITaskSettings3 * This,
                       VARIANT_BOOL stopIfOnBatteries);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisallowStartIfOnBatteries )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pDisallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisallowStartIfOnBatteries )(
            ITaskSettings3 * This,
                       VARIANT_BOOL disallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowHardTerminate )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pAllowHardTerminate);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowHardTerminate )(
            ITaskSettings3 * This,
                       VARIANT_BOOL allowHardTerminate);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartWhenAvailable )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pStartWhenAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartWhenAvailable )(
            ITaskSettings3 * This,
                       VARIANT_BOOL startWhenAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_XmlText )(
            ITaskSettings3 * This,
                                BSTR *pText);
                                        HRESULT ( STDMETHODCALLTYPE *put_XmlText )(
            ITaskSettings3 * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnlyIfNetworkAvailable )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pRunOnlyIfNetworkAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnlyIfNetworkAvailable )(
            ITaskSettings3 * This,
                       VARIANT_BOOL runOnlyIfNetworkAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionTimeLimit )(
            ITaskSettings3 * This,
                                BSTR *pExecutionTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionTimeLimit )(
            ITaskSettings3 * This,
                       BSTR executionTimeLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            ITaskSettings3 * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeleteExpiredTaskAfter )(
            ITaskSettings3 * This,
                                BSTR *pExpirationDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_DeleteExpiredTaskAfter )(
            ITaskSettings3 * This,
                       BSTR expirationDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            ITaskSettings3 * This,
                                int *pPriority);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            ITaskSettings3 * This,
                       int priority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Compatibility )(
            ITaskSettings3 * This,
                                TASK_COMPATIBILITY *pCompatLevel);
                                        HRESULT ( STDMETHODCALLTYPE *put_Compatibility )(
            ITaskSettings3 * This,
                       TASK_COMPATIBILITY compatLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pHidden);
                                        HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
            ITaskSettings3 * This,
                       VARIANT_BOOL hidden);
                                        HRESULT ( STDMETHODCALLTYPE *get_IdleSettings )(
            ITaskSettings3 * This,
                                IIdleSettings **ppIdleSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_IdleSettings )(
            ITaskSettings3 * This,
                       IIdleSettings *pIdleSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunOnlyIfIdle )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pRunOnlyIfIdle);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunOnlyIfIdle )(
            ITaskSettings3 * This,
                       VARIANT_BOOL runOnlyIfIdle);
                                        HRESULT ( STDMETHODCALLTYPE *get_WakeToRun )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pWake);
                                        HRESULT ( STDMETHODCALLTYPE *put_WakeToRun )(
            ITaskSettings3 * This,
                       VARIANT_BOOL wake);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkSettings )(
            ITaskSettings3 * This,
                                INetworkSettings **ppNetworkSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkSettings )(
            ITaskSettings3 * This,
                       INetworkSettings *pNetworkSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisallowStartOnRemoteAppSession )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pDisallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisallowStartOnRemoteAppSession )(
            ITaskSettings3 * This,
                       VARIANT_BOOL disallowStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseUnifiedSchedulingEngine )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pUseUnifiedEngine);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseUnifiedSchedulingEngine )(
            ITaskSettings3 * This,
                       VARIANT_BOOL useUnifiedEngine);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaintenanceSettings )(
            ITaskSettings3 * This,
                                IMaintenanceSettings **ppMaintenanceSettings);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaintenanceSettings )(
            ITaskSettings3 * This,
                       IMaintenanceSettings *pMaintenanceSettings);
                               HRESULT ( STDMETHODCALLTYPE *CreateMaintenanceSettings )(
            ITaskSettings3 * This,
                                IMaintenanceSettings **ppMaintenanceSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volatile )(
            ITaskSettings3 * This,
                                VARIANT_BOOL *pVolatile);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volatile )(
            ITaskSettings3 * This,
                       VARIANT_BOOL Volatile);
        END_INTERFACE
    } ITaskSettings3Vtbl;
    interface ITaskSettings3
    {
        CONST_VTBL struct ITaskSettings3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AllowDemandStart(This,pAllowDemandStart) )
    ( (This)->lpVtbl -> put_AllowDemandStart(This,allowDemandStart) )
    ( (This)->lpVtbl -> get_RestartInterval(This,pRestartInterval) )
    ( (This)->lpVtbl -> put_RestartInterval(This,restartInterval) )
    ( (This)->lpVtbl -> get_RestartCount(This,pRestartCount) )
    ( (This)->lpVtbl -> put_RestartCount(This,restartCount) )
    ( (This)->lpVtbl -> get_MultipleInstances(This,pPolicy) )
    ( (This)->lpVtbl -> put_MultipleInstances(This,policy) )
    ( (This)->lpVtbl -> get_StopIfGoingOnBatteries(This,pStopIfOnBatteries) )
    ( (This)->lpVtbl -> put_StopIfGoingOnBatteries(This,stopIfOnBatteries) )
    ( (This)->lpVtbl -> get_DisallowStartIfOnBatteries(This,pDisallowStart) )
    ( (This)->lpVtbl -> put_DisallowStartIfOnBatteries(This,disallowStart) )
    ( (This)->lpVtbl -> get_AllowHardTerminate(This,pAllowHardTerminate) )
    ( (This)->lpVtbl -> put_AllowHardTerminate(This,allowHardTerminate) )
    ( (This)->lpVtbl -> get_StartWhenAvailable(This,pStartWhenAvailable) )
    ( (This)->lpVtbl -> put_StartWhenAvailable(This,startWhenAvailable) )
    ( (This)->lpVtbl -> get_XmlText(This,pText) )
    ( (This)->lpVtbl -> put_XmlText(This,text) )
    ( (This)->lpVtbl -> get_RunOnlyIfNetworkAvailable(This,pRunOnlyIfNetworkAvailable) )
    ( (This)->lpVtbl -> put_RunOnlyIfNetworkAvailable(This,runOnlyIfNetworkAvailable) )
    ( (This)->lpVtbl -> get_ExecutionTimeLimit(This,pExecutionTimeLimit) )
    ( (This)->lpVtbl -> put_ExecutionTimeLimit(This,executionTimeLimit) )
    ( (This)->lpVtbl -> get_Enabled(This,pEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_DeleteExpiredTaskAfter(This,pExpirationDelay) )
    ( (This)->lpVtbl -> put_DeleteExpiredTaskAfter(This,expirationDelay) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
    ( (This)->lpVtbl -> put_Priority(This,priority) )
    ( (This)->lpVtbl -> get_Compatibility(This,pCompatLevel) )
    ( (This)->lpVtbl -> put_Compatibility(This,compatLevel) )
    ( (This)->lpVtbl -> get_Hidden(This,pHidden) )
    ( (This)->lpVtbl -> put_Hidden(This,hidden) )
    ( (This)->lpVtbl -> get_IdleSettings(This,ppIdleSettings) )
    ( (This)->lpVtbl -> put_IdleSettings(This,pIdleSettings) )
    ( (This)->lpVtbl -> get_RunOnlyIfIdle(This,pRunOnlyIfIdle) )
    ( (This)->lpVtbl -> put_RunOnlyIfIdle(This,runOnlyIfIdle) )
    ( (This)->lpVtbl -> get_WakeToRun(This,pWake) )
    ( (This)->lpVtbl -> put_WakeToRun(This,wake) )
    ( (This)->lpVtbl -> get_NetworkSettings(This,ppNetworkSettings) )
    ( (This)->lpVtbl -> put_NetworkSettings(This,pNetworkSettings) )
    ( (This)->lpVtbl -> get_DisallowStartOnRemoteAppSession(This,pDisallowStart) )
    ( (This)->lpVtbl -> put_DisallowStartOnRemoteAppSession(This,disallowStart) )
    ( (This)->lpVtbl -> get_UseUnifiedSchedulingEngine(This,pUseUnifiedEngine) )
    ( (This)->lpVtbl -> put_UseUnifiedSchedulingEngine(This,useUnifiedEngine) )
    ( (This)->lpVtbl -> get_MaintenanceSettings(This,ppMaintenanceSettings) )
    ( (This)->lpVtbl -> put_MaintenanceSettings(This,pMaintenanceSettings) )
    ( (This)->lpVtbl -> CreateMaintenanceSettings(This,ppMaintenanceSettings) )
    ( (This)->lpVtbl -> get_Volatile(This,pVolatile) )
    ( (This)->lpVtbl -> put_Volatile(This,Volatile) )
EXTERN_C const IID IID_IMaintenanceSettings;
    typedef struct IMaintenanceSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMaintenanceSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMaintenanceSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMaintenanceSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMaintenanceSettings * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMaintenanceSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMaintenanceSettings * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMaintenanceSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_Period )(
            IMaintenanceSettings * This,
                       BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Period )(
            IMaintenanceSettings * This,
                                BSTR *target);
                                        HRESULT ( STDMETHODCALLTYPE *put_Deadline )(
            IMaintenanceSettings * This,
                       BSTR value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
            IMaintenanceSettings * This,
                                BSTR *target);
                                        HRESULT ( STDMETHODCALLTYPE *put_Exclusive )(
            IMaintenanceSettings * This,
                       VARIANT_BOOL value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Exclusive )(
            IMaintenanceSettings * This,
                                VARIANT_BOOL *target);
        END_INTERFACE
    } IMaintenanceSettingsVtbl;
    interface IMaintenanceSettings
    {
        CONST_VTBL struct IMaintenanceSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Period(This,value) )
    ( (This)->lpVtbl -> get_Period(This,target) )
    ( (This)->lpVtbl -> put_Deadline(This,value) )
    ( (This)->lpVtbl -> get_Deadline(This,target) )
    ( (This)->lpVtbl -> put_Exclusive(This,value) )
    ( (This)->lpVtbl -> get_Exclusive(This,target) )
EXTERN_C const CLSID CLSID_TaskScheduler;
class DECLSPEC_UUID("0f87369f-a4e5-4cfc-bd3e-73e6154572dd")
TaskScheduler;
EXTERN_C const CLSID CLSID_TaskHandlerPS;
class DECLSPEC_UUID("f2a69db7-da2c-4352-9066-86fee6dacac9")
TaskHandlerPS;
EXTERN_C const CLSID CLSID_TaskHandlerStatusPS;
class DECLSPEC_UUID("9f15266d-d7ba-48f0-93c1-e6895f6fe5ac")
TaskHandlerStatusPS;
EXTERN_C const IID IID_IRegisteredTaskCollection;
    typedef struct IRegisteredTaskCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRegisteredTaskCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRegisteredTaskCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRegisteredTaskCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRegisteredTaskCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRegisteredTaskCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRegisteredTaskCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRegisteredTaskCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IRegisteredTaskCollection * This,
                                __RPC__out LONG *pCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRegisteredTaskCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt IRegisteredTask **ppRegisteredTask);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRegisteredTaskCollection * This,
                                __RPC__deref_out_opt IUnknown **ppEnum);
        END_INTERFACE
    } IRegisteredTaskCollectionVtbl;
    interface IRegisteredTaskCollection
    {
        CONST_VTBL struct IRegisteredTaskCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> get_Item(This,index,ppRegisteredTask) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
EXTERN_C const IID IID_ITaskFolder;
    typedef struct ITaskFolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITaskFolder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITaskFolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITaskFolder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITaskFolder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITaskFolder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITaskFolder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITaskFolder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITaskFolder * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in ITaskFolder * This,
                                __RPC__deref_out_opt BSTR *pPath);
                               HRESULT ( STDMETHODCALLTYPE *GetFolder )(
            __RPC__in ITaskFolder * This,
            __RPC__in BSTR path,
                                __RPC__deref_out_opt ITaskFolder **ppFolder);
                               HRESULT ( STDMETHODCALLTYPE *GetFolders )(
            __RPC__in ITaskFolder * This,
                       LONG flags,
                                __RPC__deref_out_opt ITaskFolderCollection **ppFolders);
                               HRESULT ( STDMETHODCALLTYPE *CreateFolder )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR subFolderName,
                                 VARIANT sddl,
                                __RPC__deref_out_opt ITaskFolder **ppFolder);
                               HRESULT ( STDMETHODCALLTYPE *DeleteFolder )(
            __RPC__in ITaskFolder * This,
            __RPC__in BSTR subFolderName,
                       LONG flags);
                               HRESULT ( STDMETHODCALLTYPE *GetTask )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IRegisteredTask **ppTask);
                               HRESULT ( STDMETHODCALLTYPE *GetTasks )(
            __RPC__in ITaskFolder * This,
                       LONG flags,
                                __RPC__deref_out_opt IRegisteredTaskCollection **ppTasks);
                               HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR name,
                       LONG flags);
                               HRESULT ( STDMETHODCALLTYPE *RegisterTask )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR path,
                       __RPC__in BSTR xmlText,
                       LONG flags,
                       VARIANT userId,
                       VARIANT password,
                       TASK_LOGON_TYPE logonType,
                                 VARIANT sddl,
                                __RPC__deref_out_opt IRegisteredTask **ppTask);
                               HRESULT ( STDMETHODCALLTYPE *RegisterTaskDefinition )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR path,
                       __RPC__in_opt ITaskDefinition *pDefinition,
                       LONG flags,
                       VARIANT userId,
                       VARIANT password,
                       TASK_LOGON_TYPE logonType,
                                 VARIANT sddl,
                                __RPC__deref_out_opt IRegisteredTask **ppTask);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurityDescriptor )(
            __RPC__in ITaskFolder * This,
            LONG securityInformation,
                                __RPC__deref_out_opt BSTR *pSddl);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurityDescriptor )(
            __RPC__in ITaskFolder * This,
                       __RPC__in BSTR sddl,
                       LONG flags);
        END_INTERFACE
    } ITaskFolderVtbl;
    interface ITaskFolder
    {
        CONST_VTBL struct ITaskFolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> get_Path(This,pPath) )
    ( (This)->lpVtbl -> GetFolder(This,path,ppFolder) )
    ( (This)->lpVtbl -> GetFolders(This,flags,ppFolders) )
    ( (This)->lpVtbl -> CreateFolder(This,subFolderName,sddl,ppFolder) )
    ( (This)->lpVtbl -> DeleteFolder(This,subFolderName,flags) )
    ( (This)->lpVtbl -> GetTask(This,path,ppTask) )
    ( (This)->lpVtbl -> GetTasks(This,flags,ppTasks) )
    ( (This)->lpVtbl -> DeleteTask(This,name,flags) )
    ( (This)->lpVtbl -> RegisterTask(This,path,xmlText,flags,userId,password,logonType,sddl,ppTask) )
    ( (This)->lpVtbl -> RegisterTaskDefinition(This,path,pDefinition,flags,userId,password,logonType,sddl,ppTask) )
    ( (This)->lpVtbl -> GetSecurityDescriptor(This,securityInformation,pSddl) )
    ( (This)->lpVtbl -> SetSecurityDescriptor(This,sddl,flags) )
EXTERN_C const IID IID_IIdleSettings;
    typedef struct IIdleSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIdleSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIdleSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIdleSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IIdleSettings * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IIdleSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IIdleSettings * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIdleSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IdleDuration )(
            IIdleSettings * This,
                                BSTR *pDelay);
                                        HRESULT ( STDMETHODCALLTYPE *put_IdleDuration )(
            IIdleSettings * This,
                       BSTR delay);
                                        HRESULT ( STDMETHODCALLTYPE *get_WaitTimeout )(
            IIdleSettings * This,
                                BSTR *pTimeout);
                                        HRESULT ( STDMETHODCALLTYPE *put_WaitTimeout )(
            IIdleSettings * This,
                       BSTR timeout);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopOnIdleEnd )(
            IIdleSettings * This,
                                VARIANT_BOOL *pStop);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopOnIdleEnd )(
            IIdleSettings * This,
                       VARIANT_BOOL stop);
                                        HRESULT ( STDMETHODCALLTYPE *get_RestartOnIdle )(
            IIdleSettings * This,
                                VARIANT_BOOL *pRestart);
                                        HRESULT ( STDMETHODCALLTYPE *put_RestartOnIdle )(
            IIdleSettings * This,
                       VARIANT_BOOL restart);
        END_INTERFACE
    } IIdleSettingsVtbl;
    interface IIdleSettings
    {
        CONST_VTBL struct IIdleSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IdleDuration(This,pDelay) )
    ( (This)->lpVtbl -> put_IdleDuration(This,delay) )
    ( (This)->lpVtbl -> get_WaitTimeout(This,pTimeout) )
    ( (This)->lpVtbl -> put_WaitTimeout(This,timeout) )
    ( (This)->lpVtbl -> get_StopOnIdleEnd(This,pStop) )
    ( (This)->lpVtbl -> put_StopOnIdleEnd(This,stop) )
    ( (This)->lpVtbl -> get_RestartOnIdle(This,pRestart) )
    ( (This)->lpVtbl -> put_RestartOnIdle(This,restart) )
EXTERN_C const IID IID_INetworkSettings;
    typedef struct INetworkSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetworkSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetworkSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetworkSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            INetworkSettings * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            INetworkSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            INetworkSettings * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INetworkSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            INetworkSettings * This,
                                BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            INetworkSettings * This,
                       BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            INetworkSettings * This,
                                BSTR *pId);
                                        HRESULT ( STDMETHODCALLTYPE *put_Id )(
            INetworkSettings * This,
                       BSTR id);
        END_INTERFACE
    } INetworkSettingsVtbl;
    interface INetworkSettings
    {
        CONST_VTBL struct INetworkSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> put_Id(This,id) )
EXTERN_C const IID IID_IRepetitionPattern;
    typedef struct IRepetitionPatternVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRepetitionPattern * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRepetitionPattern * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRepetitionPattern * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IRepetitionPattern * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IRepetitionPattern * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IRepetitionPattern * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRepetitionPattern * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Interval )(
            IRepetitionPattern * This,
                                BSTR *pInterval);
                                        HRESULT ( STDMETHODCALLTYPE *put_Interval )(
            IRepetitionPattern * This,
                       BSTR interval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Duration )(
            IRepetitionPattern * This,
                                BSTR *pDuration);
                                        HRESULT ( STDMETHODCALLTYPE *put_Duration )(
            IRepetitionPattern * This,
                       BSTR duration);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopAtDurationEnd )(
            IRepetitionPattern * This,
                                VARIANT_BOOL *pStop);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopAtDurationEnd )(
            IRepetitionPattern * This,
                       VARIANT_BOOL stop);
        END_INTERFACE
    } IRepetitionPatternVtbl;
    interface IRepetitionPattern
    {
        CONST_VTBL struct IRepetitionPatternVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Interval(This,pInterval) )
    ( (This)->lpVtbl -> put_Interval(This,interval) )
    ( (This)->lpVtbl -> get_Duration(This,pDuration) )
    ( (This)->lpVtbl -> put_Duration(This,duration) )
    ( (This)->lpVtbl -> get_StopAtDurationEnd(This,pStop) )
    ( (This)->lpVtbl -> put_StopAtDurationEnd(This,stop) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_taskschd_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_taskschd_0000_0044_v0_0_s_ifspec;
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

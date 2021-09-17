#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IDataCollectorSet IDataCollectorSet;
typedef interface IDataManager IDataManager;
typedef interface IFolderAction IFolderAction;
typedef interface IFolderActionCollection IFolderActionCollection;
typedef interface IDataCollector IDataCollector;
typedef interface IPerformanceCounterDataCollector IPerformanceCounterDataCollector;
typedef interface ITraceDataCollector ITraceDataCollector;
typedef interface IConfigurationDataCollector IConfigurationDataCollector;
typedef interface IAlertDataCollector IAlertDataCollector;
typedef interface IApiTracingDataCollector IApiTracingDataCollector;
typedef interface IDataCollectorCollection IDataCollectorCollection;
typedef interface IDataCollectorSetCollection IDataCollectorSetCollection;
typedef interface ITraceDataProvider ITraceDataProvider;
typedef interface ITraceDataProviderCollection ITraceDataProviderCollection;
typedef interface ISchedule ISchedule;
typedef interface IScheduleCollection IScheduleCollection;
typedef interface IValueMapItem IValueMapItem;
typedef interface IValueMap IValueMap;
typedef class DataCollectorSet DataCollectorSet;
typedef class TraceSession TraceSession;
typedef class TraceSessionCollection TraceSessionCollection;
typedef class TraceDataProvider TraceDataProvider;
typedef class TraceDataProviderCollection TraceDataProviderCollection;
typedef class DataCollectorSetCollection DataCollectorSetCollection;
typedef class LegacyDataCollectorSet LegacyDataCollectorSet;
typedef class LegacyDataCollectorSetCollection LegacyDataCollectorSetCollection;
typedef class LegacyTraceSession LegacyTraceSession;
typedef class LegacyTraceSessionCollection LegacyTraceSessionCollection;
typedef class ServerDataCollectorSet ServerDataCollectorSet;
typedef class ServerDataCollectorSetCollection ServerDataCollectorSetCollection;
typedef class SystemDataCollectorSet SystemDataCollectorSet;
typedef class SystemDataCollectorSetCollection SystemDataCollectorSetCollection;
typedef class BootTraceSession BootTraceSession;
typedef class BootTraceSessionCollection BootTraceSessionCollection;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_pla_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pla_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("03837504-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0001
    {
        plaPerformanceCounter = 0,
        plaTrace = 1,
        plaConfiguration = 2,
        plaAlert = 3,
        plaApiTrace = 4
    } DataCollectorType;
typedef DECLSPEC_UUID("03837507-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0002
    {
        plaCommaSeparated = 0,
        plaTabSeparated = 1,
        plaSql = 2,
        plaBinary = 3
    } FileFormat;
typedef DECLSPEC_UUID("03837508-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0003
    {
        plaNone = 0,
        plaPattern = 0x1,
        plaComputer = 0x2,
        plaMonthDayHour = 0x100,
        plaSerialNumber = 0x200,
        plaYearDayOfYear = 0x400,
        plaYearMonth = 0x800,
        plaYearMonthDay = 0x1000,
        plaYearMonthDayHour = 0x2000,
        plaMonthDayHourMinute = 0x4000
    } AutoPathFormat;
typedef DECLSPEC_UUID("0383750a-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0004
    {
        plaStopped = 0,
        plaRunning = 1,
        plaCompiling = 2,
        plaPending = 3,
        plaUndefined = 4
    } DataCollectorSetStatus;
typedef DECLSPEC_UUID("0383750d-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0005
    {
        plaTimeStamp = 0,
        plaPerformance = 1,
        plaSystem = 2,
        plaCycle = 3
    } ClockType;
typedef DECLSPEC_UUID("0383750e-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0006
    {
        plaFile = 0x1,
        plaRealTime = 0x2,
        plaBoth = 0x3,
        plaBuffering = 0x4
    } StreamMode;
typedef DECLSPEC_UUID("0383751f-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0007
    {
        plaCreateNew = 0x1,
        plaModify = 0x2,
        plaCreateOrModify = 0x3,
        plaUpdateRunningInstance = 0x10,
        plaFlushTrace = 0x20,
        plaValidateOnly = 0x1000
    } CommitMode;
typedef DECLSPEC_UUID("03837535-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0008
    {
        plaIndex = 1,
        plaFlag = 2,
        plaFlagArray = 3,
        plaValidation = 4
    } ValueMapType;
typedef DECLSPEC_UUID("0383753b-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0009
    {
        plaRunOnce = 0,
        plaSunday = 0x1,
        plaMonday = 0x2,
        plaTuesday = 0x4,
        plaWednesday = 0x8,
        plaThursday = 0x10,
        plaFriday = 0x20,
        plaSaturday = 0x40,
        plaEveryday = 0x7f
    } WeekDays;
typedef DECLSPEC_UUID("0383753f-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0010
    {
        plaDeleteLargest = 0,
        plaDeleteOldest = 1
    } ResourcePolicy;
typedef DECLSPEC_UUID("03837540-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0011
    {
        plaCreateReport = 0x1,
        plaRunRules = 0x2,
        plaCreateHtml = 0x4,
        plaFolderActions = 0x8,
        plaResourceFreeing = 0x10
    } DataManagerSteps;
typedef DECLSPEC_UUID("03837542-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0001_0043_0012
    {
        plaCreateCab = 0x1,
        plaDeleteData = 0x2,
        plaSendCab = 0x4,
        plaDeleteCab = 0x8,
        plaDeleteReport = 0x10
    } FolderActionSteps;
PLA_FUNCTION
PlaExpandTaskArguments(
    VARIANT vDataSet,
    _Out_ BSTR* args
    );
PLA_FUNCTION
PlaGetServerCapabilities(
    _In_opt_ BSTR Server,
    _Out_ PDWORD Capabilites
    );
PLA_FUNCTION
PlaGetLegacyAlertActionsStringFromFlags(
    _In_ DWORD dwFlags,
    _Out_ BSTR *pbstrAlertStr
    );
PLA_FUNCTION
PlaGetLegacyAlertActionsFlagsFromString(
    _In_ PCWSTR pszArguments,
    _Out_ LPDWORD pdwFlags
    );
typedef VOID (*PLA_CABEXTRACT_CALLBACK)(PCWSTR FileName, PVOID Context);
HRESULT
PlaExtractCabinet(
    _In_ PCWSTR CabFileName,
    _In_ PCWSTR DestPath,
    _In_opt_ PLA_CABEXTRACT_CALLBACK Callback,
    _In_opt_ PVOID Context
    );
HRESULT
PlaDeleteReport(
    _In_ PCWSTR Folder
    );
EXTERN_C const IID LIBID_PlaLibrary;
EXTERN_C const IID IID_IDataCollectorSet;
    typedef struct IDataCollectorSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataCollectorSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataCollectorSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataCollectorSet * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataCollectorSet * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataCollectorSet * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectors )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt IDataCollectorCollection **collectors);
                        HRESULT ( STDMETHODCALLTYPE *get_Duration )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out unsigned long *seconds);
                        HRESULT ( STDMETHODCALLTYPE *put_Duration )(
            __RPC__in IDataCollectorSet * This,
                       unsigned long seconds);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *description);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR description);
                        HRESULT ( STDMETHODCALLTYPE *get_DescriptionUnresolved )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *Descr);
                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *DisplayName);
                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR DisplayName);
                        HRESULT ( STDMETHODCALLTYPE *get_DisplayNameUnresolved )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt SAFEARRAY * *keywords);
                        HRESULT ( STDMETHODCALLTYPE *put_Keywords )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in SAFEARRAY * keywords);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR path);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_RootPath )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *folder);
                        HRESULT ( STDMETHODCALLTYPE *put_RootPath )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR folder);
                        HRESULT ( STDMETHODCALLTYPE *get_Segment )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out VARIANT_BOOL *segment);
                        HRESULT ( STDMETHODCALLTYPE *put_Segment )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL segment);
                        HRESULT ( STDMETHODCALLTYPE *get_SegmentMaxDuration )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out unsigned long *seconds);
                        HRESULT ( STDMETHODCALLTYPE *put_SegmentMaxDuration )(
            __RPC__in IDataCollectorSet * This,
                       unsigned long seconds);
                        HRESULT ( STDMETHODCALLTYPE *get_SegmentMaxSize )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out unsigned long *size);
                        HRESULT ( STDMETHODCALLTYPE *put_SegmentMaxSize )(
            __RPC__in IDataCollectorSet * This,
                       unsigned long size);
                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out unsigned long *index);
                        HRESULT ( STDMETHODCALLTYPE *put_SerialNumber )(
            __RPC__in IDataCollectorSet * This,
                       unsigned long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Server )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *server);
                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out DataCollectorSetStatus *status);
                        HRESULT ( STDMETHODCALLTYPE *get_Subdirectory )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *folder);
                        HRESULT ( STDMETHODCALLTYPE *put_Subdirectory )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR folder);
                        HRESULT ( STDMETHODCALLTYPE *get_SubdirectoryFormat )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_SubdirectoryFormat )(
            __RPC__in IDataCollectorSet * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_SubdirectoryFormatPattern )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_SubdirectoryFormatPattern )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_Task )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *task);
                        HRESULT ( STDMETHODCALLTYPE *put_Task )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR task);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskRunAsSelf )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out VARIANT_BOOL *RunAsSelf);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskRunAsSelf )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL RunAsSelf);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskArguments )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *task);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskArguments )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR task);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskUserTextArguments )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *UserText);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskUserTextArguments )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR UserText);
                        HRESULT ( STDMETHODCALLTYPE *get_Schedules )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt IScheduleCollection **ppSchedules);
                        HRESULT ( STDMETHODCALLTYPE *get_SchedulesEnabled )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out VARIANT_BOOL *enabled);
                        HRESULT ( STDMETHODCALLTYPE *put_SchedulesEnabled )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL enabled);
                        HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *user);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *xml);
                        HRESULT ( STDMETHODCALLTYPE *get_Security )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt BSTR *pbstrSecurity);
                        HRESULT ( STDMETHODCALLTYPE *put_Security )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR bstrSecurity);
                        HRESULT ( STDMETHODCALLTYPE *get_StopOnCompletion )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__out VARIANT_BOOL *Stop);
                        HRESULT ( STDMETHODCALLTYPE *put_StopOnCompletion )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL Stop);
                        HRESULT ( STDMETHODCALLTYPE *get_DataManager )(
            __RPC__in IDataCollectorSet * This,
                                __RPC__deref_out_opt IDataManager **DataManager);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IDataCollectorSet * This,
            __RPC__in BSTR user,
            __RPC__in BSTR password);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR name,
                               __RPC__in_opt BSTR server);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR name,
                               __RPC__in_opt BSTR server,
            CommitMode mode,
                                __RPC__deref_out_opt IValueMap **validation);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IDataCollectorSet * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL Synchronous);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IDataCollectorSet * This,
                       VARIANT_BOOL Synchronous);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IDataCollectorSet * This,
                       __RPC__in BSTR xml,
                                __RPC__deref_out_opt IValueMap **validation);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IDataCollectorSet * This,
            __RPC__in BSTR key,
            __RPC__in BSTR value);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IDataCollectorSet * This,
            __RPC__in BSTR key,
                                __RPC__deref_out_opt BSTR *value);
        END_INTERFACE
    } IDataCollectorSetVtbl;
    interface IDataCollectorSet
    {
        CONST_VTBL struct IDataCollectorSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectors(This,collectors) )
    ( (This)->lpVtbl -> get_Duration(This,seconds) )
    ( (This)->lpVtbl -> put_Duration(This,seconds) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> get_DescriptionUnresolved(This,Descr) )
    ( (This)->lpVtbl -> get_DisplayName(This,DisplayName) )
    ( (This)->lpVtbl -> put_DisplayName(This,DisplayName) )
    ( (This)->lpVtbl -> get_DisplayNameUnresolved(This,name) )
    ( (This)->lpVtbl -> get_Keywords(This,keywords) )
    ( (This)->lpVtbl -> put_Keywords(This,keywords) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_RootPath(This,folder) )
    ( (This)->lpVtbl -> put_RootPath(This,folder) )
    ( (This)->lpVtbl -> get_Segment(This,segment) )
    ( (This)->lpVtbl -> put_Segment(This,segment) )
    ( (This)->lpVtbl -> get_SegmentMaxDuration(This,seconds) )
    ( (This)->lpVtbl -> put_SegmentMaxDuration(This,seconds) )
    ( (This)->lpVtbl -> get_SegmentMaxSize(This,size) )
    ( (This)->lpVtbl -> put_SegmentMaxSize(This,size) )
    ( (This)->lpVtbl -> get_SerialNumber(This,index) )
    ( (This)->lpVtbl -> put_SerialNumber(This,index) )
    ( (This)->lpVtbl -> get_Server(This,server) )
    ( (This)->lpVtbl -> get_Status(This,status) )
    ( (This)->lpVtbl -> get_Subdirectory(This,folder) )
    ( (This)->lpVtbl -> put_Subdirectory(This,folder) )
    ( (This)->lpVtbl -> get_SubdirectoryFormat(This,format) )
    ( (This)->lpVtbl -> put_SubdirectoryFormat(This,format) )
    ( (This)->lpVtbl -> get_SubdirectoryFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_SubdirectoryFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_Task(This,task) )
    ( (This)->lpVtbl -> put_Task(This,task) )
    ( (This)->lpVtbl -> get_TaskRunAsSelf(This,RunAsSelf) )
    ( (This)->lpVtbl -> put_TaskRunAsSelf(This,RunAsSelf) )
    ( (This)->lpVtbl -> get_TaskArguments(This,task) )
    ( (This)->lpVtbl -> put_TaskArguments(This,task) )
    ( (This)->lpVtbl -> get_TaskUserTextArguments(This,UserText) )
    ( (This)->lpVtbl -> put_TaskUserTextArguments(This,UserText) )
    ( (This)->lpVtbl -> get_Schedules(This,ppSchedules) )
    ( (This)->lpVtbl -> get_SchedulesEnabled(This,enabled) )
    ( (This)->lpVtbl -> put_SchedulesEnabled(This,enabled) )
    ( (This)->lpVtbl -> get_UserAccount(This,user) )
    ( (This)->lpVtbl -> get_Xml(This,xml) )
    ( (This)->lpVtbl -> get_Security(This,pbstrSecurity) )
    ( (This)->lpVtbl -> put_Security(This,bstrSecurity) )
    ( (This)->lpVtbl -> get_StopOnCompletion(This,Stop) )
    ( (This)->lpVtbl -> put_StopOnCompletion(This,Stop) )
    ( (This)->lpVtbl -> get_DataManager(This,DataManager) )
    ( (This)->lpVtbl -> SetCredentials(This,user,password) )
    ( (This)->lpVtbl -> Query(This,name,server) )
    ( (This)->lpVtbl -> Commit(This,name,server,mode,validation) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Start(This,Synchronous) )
    ( (This)->lpVtbl -> Stop(This,Synchronous) )
    ( (This)->lpVtbl -> SetXml(This,xml,validation) )
    ( (This)->lpVtbl -> SetValue(This,key,value) )
    ( (This)->lpVtbl -> GetValue(This,key,value) )
EXTERN_C const IID IID_IDataManager;
    typedef struct IDataManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IDataManager * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IDataManager * This,
                       VARIANT_BOOL fEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_CheckBeforeRunning )(
            __RPC__in IDataManager * This,
                                __RPC__out VARIANT_BOOL *pfCheck);
                        HRESULT ( STDMETHODCALLTYPE *put_CheckBeforeRunning )(
            __RPC__in IDataManager * This,
                       VARIANT_BOOL fCheck);
                        HRESULT ( STDMETHODCALLTYPE *get_MinFreeDisk )(
            __RPC__in IDataManager * This,
                                __RPC__out ULONG *MinFreeDisk);
                        HRESULT ( STDMETHODCALLTYPE *put_MinFreeDisk )(
            __RPC__in IDataManager * This,
                       ULONG MinFreeDisk);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxSize )(
            __RPC__in IDataManager * This,
                                __RPC__out ULONG *pulMaxSize);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxSize )(
            __RPC__in IDataManager * This,
                       ULONG ulMaxSize);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxFolderCount )(
            __RPC__in IDataManager * This,
                                __RPC__out ULONG *pulMaxFolderCount);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxFolderCount )(
            __RPC__in IDataManager * This,
                       ULONG ulMaxFolderCount);
                        HRESULT ( STDMETHODCALLTYPE *get_ResourcePolicy )(
            __RPC__in IDataManager * This,
                                __RPC__out ResourcePolicy *pPolicy);
                        HRESULT ( STDMETHODCALLTYPE *put_ResourcePolicy )(
            __RPC__in IDataManager * This,
                       ResourcePolicy Policy);
                        HRESULT ( STDMETHODCALLTYPE *get_FolderActions )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt IFolderActionCollection **Actions);
                        HRESULT ( STDMETHODCALLTYPE *get_ReportSchema )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt BSTR *ReportSchema);
                        HRESULT ( STDMETHODCALLTYPE *put_ReportSchema )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR ReportSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_ReportFileName )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt BSTR *pbstrFilename);
                        HRESULT ( STDMETHODCALLTYPE *put_ReportFileName )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR pbstrFilename);
                        HRESULT ( STDMETHODCALLTYPE *get_RuleTargetFileName )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt BSTR *Filename);
                        HRESULT ( STDMETHODCALLTYPE *put_RuleTargetFileName )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR Filename);
                        HRESULT ( STDMETHODCALLTYPE *get_EventsFileName )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt BSTR *pbstrFilename);
                        HRESULT ( STDMETHODCALLTYPE *put_EventsFileName )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR pbstrFilename);
                        HRESULT ( STDMETHODCALLTYPE *get_Rules )(
            __RPC__in IDataManager * This,
                                __RPC__deref_out_opt BSTR *pbstrXml);
                        HRESULT ( STDMETHODCALLTYPE *put_Rules )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR bstrXml);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IDataManager * This,
                       DataManagerSteps Steps,
                       __RPC__in BSTR bstrFolder,
                                __RPC__deref_out_opt IValueMap **Errors);
        HRESULT ( STDMETHODCALLTYPE *Extract )(
            __RPC__in IDataManager * This,
                       __RPC__in BSTR CabFilename,
                       __RPC__in BSTR DestinationPath);
        END_INTERFACE
    } IDataManagerVtbl;
    interface IDataManager
    {
        CONST_VTBL struct IDataManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
    ( (This)->lpVtbl -> get_CheckBeforeRunning(This,pfCheck) )
    ( (This)->lpVtbl -> put_CheckBeforeRunning(This,fCheck) )
    ( (This)->lpVtbl -> get_MinFreeDisk(This,MinFreeDisk) )
    ( (This)->lpVtbl -> put_MinFreeDisk(This,MinFreeDisk) )
    ( (This)->lpVtbl -> get_MaxSize(This,pulMaxSize) )
    ( (This)->lpVtbl -> put_MaxSize(This,ulMaxSize) )
    ( (This)->lpVtbl -> get_MaxFolderCount(This,pulMaxFolderCount) )
    ( (This)->lpVtbl -> put_MaxFolderCount(This,ulMaxFolderCount) )
    ( (This)->lpVtbl -> get_ResourcePolicy(This,pPolicy) )
    ( (This)->lpVtbl -> put_ResourcePolicy(This,Policy) )
    ( (This)->lpVtbl -> get_FolderActions(This,Actions) )
    ( (This)->lpVtbl -> get_ReportSchema(This,ReportSchema) )
    ( (This)->lpVtbl -> put_ReportSchema(This,ReportSchema) )
    ( (This)->lpVtbl -> get_ReportFileName(This,pbstrFilename) )
    ( (This)->lpVtbl -> put_ReportFileName(This,pbstrFilename) )
    ( (This)->lpVtbl -> get_RuleTargetFileName(This,Filename) )
    ( (This)->lpVtbl -> put_RuleTargetFileName(This,Filename) )
    ( (This)->lpVtbl -> get_EventsFileName(This,pbstrFilename) )
    ( (This)->lpVtbl -> put_EventsFileName(This,pbstrFilename) )
    ( (This)->lpVtbl -> get_Rules(This,pbstrXml) )
    ( (This)->lpVtbl -> put_Rules(This,bstrXml) )
    ( (This)->lpVtbl -> Run(This,Steps,bstrFolder,Errors) )
    ( (This)->lpVtbl -> Extract(This,CabFilename,DestinationPath) )
EXTERN_C const IID IID_IFolderAction;
    typedef struct IFolderActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFolderAction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFolderAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFolderAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFolderAction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFolderAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFolderAction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFolderAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Age )(
            __RPC__in IFolderAction * This,
                                __RPC__out ULONG *pulAge);
                        HRESULT ( STDMETHODCALLTYPE *put_Age )(
            __RPC__in IFolderAction * This,
                       ULONG ulAge);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFolderAction * This,
                                __RPC__out ULONG *pulAge);
                        HRESULT ( STDMETHODCALLTYPE *put_Size )(
            __RPC__in IFolderAction * This,
                       ULONG ulAge);
                        HRESULT ( STDMETHODCALLTYPE *get_Actions )(
            __RPC__in IFolderAction * This,
                                __RPC__out FolderActionSteps *Steps);
                        HRESULT ( STDMETHODCALLTYPE *put_Actions )(
            __RPC__in IFolderAction * This,
                       FolderActionSteps Steps);
                        HRESULT ( STDMETHODCALLTYPE *get_SendCabTo )(
            __RPC__in IFolderAction * This,
                                __RPC__deref_out_opt BSTR *pbstrDestination);
                        HRESULT ( STDMETHODCALLTYPE *put_SendCabTo )(
            __RPC__in IFolderAction * This,
                       __RPC__in BSTR bstrDestination);
        END_INTERFACE
    } IFolderActionVtbl;
    interface IFolderAction
    {
        CONST_VTBL struct IFolderActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Age(This,pulAge) )
    ( (This)->lpVtbl -> put_Age(This,ulAge) )
    ( (This)->lpVtbl -> get_Size(This,pulAge) )
    ( (This)->lpVtbl -> put_Size(This,ulAge) )
    ( (This)->lpVtbl -> get_Actions(This,Steps) )
    ( (This)->lpVtbl -> put_Actions(This,Steps) )
    ( (This)->lpVtbl -> get_SendCabTo(This,pbstrDestination) )
    ( (This)->lpVtbl -> put_SendCabTo(This,bstrDestination) )
EXTERN_C const IID IID_IFolderActionCollection;
    typedef struct IFolderActionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFolderActionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFolderActionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFolderActionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFolderActionCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFolderActionCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFolderActionCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFolderActionCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFolderActionCollection * This,
                                __RPC__out ULONG *Count);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFolderActionCollection * This,
                       VARIANT Index,
                                __RPC__deref_out_opt IFolderAction **Action);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFolderActionCollection * This,
                                __RPC__deref_out_opt IUnknown **Enum);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFolderActionCollection * This,
            __RPC__in_opt IFolderAction *Action);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFolderActionCollection * This,
            VARIANT Index);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IFolderActionCollection * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IFolderActionCollection * This,
            __RPC__in_opt IFolderActionCollection *Actions);
        HRESULT ( STDMETHODCALLTYPE *CreateFolderAction )(
            __RPC__in IFolderActionCollection * This,
                                __RPC__deref_out_opt IFolderAction **FolderAction);
        END_INTERFACE
    } IFolderActionCollectionVtbl;
    interface IFolderActionCollection
    {
        CONST_VTBL struct IFolderActionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get_Item(This,Index,Action) )
    ( (This)->lpVtbl -> get__NewEnum(This,Enum) )
    ( (This)->lpVtbl -> Add(This,Action) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,Actions) )
    ( (This)->lpVtbl -> CreateFolderAction(This,FolderAction) )
EXTERN_C const IID IID_IDataCollector;
    typedef struct IDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in IDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in IDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in IDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in IDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in IDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in IDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in IDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in IDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in IDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in IDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in IDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in IDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in IDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
        END_INTERFACE
    } IDataCollectorVtbl;
    interface IDataCollector
    {
        CONST_VTBL struct IDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
EXTERN_C const IID IID_IPerformanceCounterDataCollector;
    typedef struct IPerformanceCounterDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPerformanceCounterDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPerformanceCounterDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPerformanceCounterDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPerformanceCounterDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
                        HRESULT ( STDMETHODCALLTYPE *get_DataSourceName )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt BSTR *dsn);
                        HRESULT ( STDMETHODCALLTYPE *put_DataSourceName )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in BSTR dsn);
                        HRESULT ( STDMETHODCALLTYPE *get_PerformanceCounters )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *counters);
                        HRESULT ( STDMETHODCALLTYPE *put_PerformanceCounters )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       __RPC__in SAFEARRAY * counters);
                        HRESULT ( STDMETHODCALLTYPE *get_LogFileFormat )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out FileFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_LogFileFormat )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       FileFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_SampleInterval )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out unsigned long *interval);
                        HRESULT ( STDMETHODCALLTYPE *put_SampleInterval )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       unsigned long interval);
                        HRESULT ( STDMETHODCALLTYPE *get_SegmentMaxRecords )(
            __RPC__in IPerformanceCounterDataCollector * This,
                                __RPC__out unsigned long *records);
                        HRESULT ( STDMETHODCALLTYPE *put_SegmentMaxRecords )(
            __RPC__in IPerformanceCounterDataCollector * This,
                       unsigned long records);
        END_INTERFACE
    } IPerformanceCounterDataCollectorVtbl;
    interface IPerformanceCounterDataCollector
    {
        CONST_VTBL struct IPerformanceCounterDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
    ( (This)->lpVtbl -> get_DataSourceName(This,dsn) )
    ( (This)->lpVtbl -> put_DataSourceName(This,dsn) )
    ( (This)->lpVtbl -> get_PerformanceCounters(This,counters) )
    ( (This)->lpVtbl -> put_PerformanceCounters(This,counters) )
    ( (This)->lpVtbl -> get_LogFileFormat(This,format) )
    ( (This)->lpVtbl -> put_LogFileFormat(This,format) )
    ( (This)->lpVtbl -> get_SampleInterval(This,interval) )
    ( (This)->lpVtbl -> put_SampleInterval(This,interval) )
    ( (This)->lpVtbl -> get_SegmentMaxRecords(This,records) )
    ( (This)->lpVtbl -> put_SegmentMaxRecords(This,records) )
EXTERN_C const IID IID_ITraceDataCollector;
    typedef struct ITraceDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITraceDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITraceDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITraceDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITraceDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITraceDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in ITraceDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in ITraceDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
                        HRESULT ( STDMETHODCALLTYPE *get_BufferSize )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *size);
                        HRESULT ( STDMETHODCALLTYPE *put_BufferSize )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long size);
                        HRESULT ( STDMETHODCALLTYPE *get_BuffersLost )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                                            HRESULT ( STDMETHODCALLTYPE *put_BuffersLost )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_BuffersWritten )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                                            HRESULT ( STDMETHODCALLTYPE *put_BuffersWritten )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_ClockType )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out ClockType *clock);
                        HRESULT ( STDMETHODCALLTYPE *put_ClockType )(
            __RPC__in ITraceDataCollector * This,
                       ClockType clock);
                        HRESULT ( STDMETHODCALLTYPE *get_EventsLost )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *events);
                                            HRESULT ( STDMETHODCALLTYPE *put_EventsLost )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long events);
                        HRESULT ( STDMETHODCALLTYPE *get_ExtendedModes )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *mode);
                        HRESULT ( STDMETHODCALLTYPE *put_ExtendedModes )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long mode);
                        HRESULT ( STDMETHODCALLTYPE *get_FlushTimer )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *seconds);
                        HRESULT ( STDMETHODCALLTYPE *put_FlushTimer )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long seconds);
                        HRESULT ( STDMETHODCALLTYPE *get_FreeBuffers )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                                            HRESULT ( STDMETHODCALLTYPE *put_FreeBuffers )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out GUID *guid);
                        HRESULT ( STDMETHODCALLTYPE *put_Guid )(
            __RPC__in ITraceDataCollector * This,
                       GUID guid);
                        HRESULT ( STDMETHODCALLTYPE *get_IsKernelTrace )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *kernel);
                        HRESULT ( STDMETHODCALLTYPE *get_MaximumBuffers )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                        HRESULT ( STDMETHODCALLTYPE *put_MaximumBuffers )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_MinimumBuffers )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                        HRESULT ( STDMETHODCALLTYPE *put_MinimumBuffers )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfBuffers )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                        HRESULT ( STDMETHODCALLTYPE *put_NumberOfBuffers )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_PreallocateFile )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *allocate);
                        HRESULT ( STDMETHODCALLTYPE *put_PreallocateFile )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL allocate);
                        HRESULT ( STDMETHODCALLTYPE *get_ProcessMode )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out VARIANT_BOOL *process);
                        HRESULT ( STDMETHODCALLTYPE *put_ProcessMode )(
            __RPC__in ITraceDataCollector * This,
                       VARIANT_BOOL process);
                        HRESULT ( STDMETHODCALLTYPE *get_RealTimeBuffersLost )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *buffers);
                                            HRESULT ( STDMETHODCALLTYPE *put_RealTimeBuffersLost )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long buffers);
                        HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out ULONG64 *id);
                                            HRESULT ( STDMETHODCALLTYPE *put_SessionId )(
            __RPC__in ITraceDataCollector * This,
                       ULONG64 id);
                        HRESULT ( STDMETHODCALLTYPE *get_SessionName )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_SessionName )(
            __RPC__in ITraceDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_SessionThreadId )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out unsigned long *tid);
                                            HRESULT ( STDMETHODCALLTYPE *put_SessionThreadId )(
            __RPC__in ITraceDataCollector * This,
                       unsigned long tid);
                        HRESULT ( STDMETHODCALLTYPE *get_StreamMode )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__out StreamMode *mode);
                        HRESULT ( STDMETHODCALLTYPE *put_StreamMode )(
            __RPC__in ITraceDataCollector * This,
                       StreamMode mode);
                        HRESULT ( STDMETHODCALLTYPE *get_TraceDataProviders )(
            __RPC__in ITraceDataCollector * This,
                                __RPC__deref_out_opt ITraceDataProviderCollection **providers);
        END_INTERFACE
    } ITraceDataCollectorVtbl;
    interface ITraceDataCollector
    {
        CONST_VTBL struct ITraceDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
    ( (This)->lpVtbl -> get_BufferSize(This,size) )
    ( (This)->lpVtbl -> put_BufferSize(This,size) )
    ( (This)->lpVtbl -> get_BuffersLost(This,buffers) )
    ( (This)->lpVtbl -> put_BuffersLost(This,buffers) )
    ( (This)->lpVtbl -> get_BuffersWritten(This,buffers) )
    ( (This)->lpVtbl -> put_BuffersWritten(This,buffers) )
    ( (This)->lpVtbl -> get_ClockType(This,clock) )
    ( (This)->lpVtbl -> put_ClockType(This,clock) )
    ( (This)->lpVtbl -> get_EventsLost(This,events) )
    ( (This)->lpVtbl -> put_EventsLost(This,events) )
    ( (This)->lpVtbl -> get_ExtendedModes(This,mode) )
    ( (This)->lpVtbl -> put_ExtendedModes(This,mode) )
    ( (This)->lpVtbl -> get_FlushTimer(This,seconds) )
    ( (This)->lpVtbl -> put_FlushTimer(This,seconds) )
    ( (This)->lpVtbl -> get_FreeBuffers(This,buffers) )
    ( (This)->lpVtbl -> put_FreeBuffers(This,buffers) )
    ( (This)->lpVtbl -> get_Guid(This,guid) )
    ( (This)->lpVtbl -> put_Guid(This,guid) )
    ( (This)->lpVtbl -> get_IsKernelTrace(This,kernel) )
    ( (This)->lpVtbl -> get_MaximumBuffers(This,buffers) )
    ( (This)->lpVtbl -> put_MaximumBuffers(This,buffers) )
    ( (This)->lpVtbl -> get_MinimumBuffers(This,buffers) )
    ( (This)->lpVtbl -> put_MinimumBuffers(This,buffers) )
    ( (This)->lpVtbl -> get_NumberOfBuffers(This,buffers) )
    ( (This)->lpVtbl -> put_NumberOfBuffers(This,buffers) )
    ( (This)->lpVtbl -> get_PreallocateFile(This,allocate) )
    ( (This)->lpVtbl -> put_PreallocateFile(This,allocate) )
    ( (This)->lpVtbl -> get_ProcessMode(This,process) )
    ( (This)->lpVtbl -> put_ProcessMode(This,process) )
    ( (This)->lpVtbl -> get_RealTimeBuffersLost(This,buffers) )
    ( (This)->lpVtbl -> put_RealTimeBuffersLost(This,buffers) )
    ( (This)->lpVtbl -> get_SessionId(This,id) )
    ( (This)->lpVtbl -> put_SessionId(This,id) )
    ( (This)->lpVtbl -> get_SessionName(This,name) )
    ( (This)->lpVtbl -> put_SessionName(This,name) )
    ( (This)->lpVtbl -> get_SessionThreadId(This,tid) )
    ( (This)->lpVtbl -> put_SessionThreadId(This,tid) )
    ( (This)->lpVtbl -> get_StreamMode(This,mode) )
    ( (This)->lpVtbl -> put_StreamMode(This,mode) )
    ( (This)->lpVtbl -> get_TraceDataProviders(This,providers) )
EXTERN_C const IID IID_IConfigurationDataCollector;
    typedef struct IConfigurationDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConfigurationDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConfigurationDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IConfigurationDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IConfigurationDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IConfigurationDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in IConfigurationDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in IConfigurationDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in IConfigurationDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in IConfigurationDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in IConfigurationDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in IConfigurationDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
                        HRESULT ( STDMETHODCALLTYPE *get_FileMaxCount )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out unsigned long *count);
                        HRESULT ( STDMETHODCALLTYPE *put_FileMaxCount )(
            __RPC__in IConfigurationDataCollector * This,
                       unsigned long count);
                        HRESULT ( STDMETHODCALLTYPE *get_FileMaxRecursiveDepth )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out unsigned long *depth);
                        HRESULT ( STDMETHODCALLTYPE *put_FileMaxRecursiveDepth )(
            __RPC__in IConfigurationDataCollector * This,
                       unsigned long depth);
                        HRESULT ( STDMETHODCALLTYPE *get_FileMaxTotalSize )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out unsigned long *size);
                        HRESULT ( STDMETHODCALLTYPE *put_FileMaxTotalSize )(
            __RPC__in IConfigurationDataCollector * This,
                       unsigned long size);
                        HRESULT ( STDMETHODCALLTYPE *get_Files )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *Files);
                        HRESULT ( STDMETHODCALLTYPE *put_Files )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in SAFEARRAY * Files);
                        HRESULT ( STDMETHODCALLTYPE *get_ManagementQueries )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *Queries);
                        HRESULT ( STDMETHODCALLTYPE *put_ManagementQueries )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in SAFEARRAY * Queries);
                        HRESULT ( STDMETHODCALLTYPE *get_QueryNetworkAdapters )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out VARIANT_BOOL *network);
                        HRESULT ( STDMETHODCALLTYPE *put_QueryNetworkAdapters )(
            __RPC__in IConfigurationDataCollector * This,
                       VARIANT_BOOL network);
                        HRESULT ( STDMETHODCALLTYPE *get_RegistryKeys )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *query);
                        HRESULT ( STDMETHODCALLTYPE *put_RegistryKeys )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in SAFEARRAY * query);
                        HRESULT ( STDMETHODCALLTYPE *get_RegistryMaxRecursiveDepth )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__out unsigned long *depth);
                        HRESULT ( STDMETHODCALLTYPE *put_RegistryMaxRecursiveDepth )(
            __RPC__in IConfigurationDataCollector * This,
                       unsigned long depth);
                        HRESULT ( STDMETHODCALLTYPE *get_SystemStateFile )(
            __RPC__in IConfigurationDataCollector * This,
                                __RPC__deref_out_opt BSTR *FileName);
                        HRESULT ( STDMETHODCALLTYPE *put_SystemStateFile )(
            __RPC__in IConfigurationDataCollector * This,
                       __RPC__in BSTR FileName);
        END_INTERFACE
    } IConfigurationDataCollectorVtbl;
    interface IConfigurationDataCollector
    {
        CONST_VTBL struct IConfigurationDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
    ( (This)->lpVtbl -> get_FileMaxCount(This,count) )
    ( (This)->lpVtbl -> put_FileMaxCount(This,count) )
    ( (This)->lpVtbl -> get_FileMaxRecursiveDepth(This,depth) )
    ( (This)->lpVtbl -> put_FileMaxRecursiveDepth(This,depth) )
    ( (This)->lpVtbl -> get_FileMaxTotalSize(This,size) )
    ( (This)->lpVtbl -> put_FileMaxTotalSize(This,size) )
    ( (This)->lpVtbl -> get_Files(This,Files) )
    ( (This)->lpVtbl -> put_Files(This,Files) )
    ( (This)->lpVtbl -> get_ManagementQueries(This,Queries) )
    ( (This)->lpVtbl -> put_ManagementQueries(This,Queries) )
    ( (This)->lpVtbl -> get_QueryNetworkAdapters(This,network) )
    ( (This)->lpVtbl -> put_QueryNetworkAdapters(This,network) )
    ( (This)->lpVtbl -> get_RegistryKeys(This,query) )
    ( (This)->lpVtbl -> put_RegistryKeys(This,query) )
    ( (This)->lpVtbl -> get_RegistryMaxRecursiveDepth(This,depth) )
    ( (This)->lpVtbl -> put_RegistryMaxRecursiveDepth(This,depth) )
    ( (This)->lpVtbl -> get_SystemStateFile(This,FileName) )
    ( (This)->lpVtbl -> put_SystemStateFile(This,FileName) )
EXTERN_C const IID IID_IAlertDataCollector;
    typedef struct IAlertDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAlertDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAlertDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAlertDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAlertDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAlertDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in IAlertDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in IAlertDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
                        HRESULT ( STDMETHODCALLTYPE *get_AlertThresholds )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *alerts);
                        HRESULT ( STDMETHODCALLTYPE *put_AlertThresholds )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in SAFEARRAY * alerts);
                        HRESULT ( STDMETHODCALLTYPE *get_EventLog )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out VARIANT_BOOL *log);
                        HRESULT ( STDMETHODCALLTYPE *put_EventLog )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL log);
                        HRESULT ( STDMETHODCALLTYPE *get_SampleInterval )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out unsigned long *interval);
                        HRESULT ( STDMETHODCALLTYPE *put_SampleInterval )(
            __RPC__in IAlertDataCollector * This,
                       unsigned long interval);
                        HRESULT ( STDMETHODCALLTYPE *get_Task )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *task);
                        HRESULT ( STDMETHODCALLTYPE *put_Task )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR task);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskRunAsSelf )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__out VARIANT_BOOL *RunAsSelf);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskRunAsSelf )(
            __RPC__in IAlertDataCollector * This,
                       VARIANT_BOOL RunAsSelf);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskArguments )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *task);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskArguments )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR task);
                        HRESULT ( STDMETHODCALLTYPE *get_TaskUserTextArguments )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *task);
                        HRESULT ( STDMETHODCALLTYPE *put_TaskUserTextArguments )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR task);
                        HRESULT ( STDMETHODCALLTYPE *get_TriggerDataCollectorSet )(
            __RPC__in IAlertDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_TriggerDataCollectorSet )(
            __RPC__in IAlertDataCollector * This,
                       __RPC__in BSTR name);
        END_INTERFACE
    } IAlertDataCollectorVtbl;
    interface IAlertDataCollector
    {
        CONST_VTBL struct IAlertDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
    ( (This)->lpVtbl -> get_AlertThresholds(This,alerts) )
    ( (This)->lpVtbl -> put_AlertThresholds(This,alerts) )
    ( (This)->lpVtbl -> get_EventLog(This,log) )
    ( (This)->lpVtbl -> put_EventLog(This,log) )
    ( (This)->lpVtbl -> get_SampleInterval(This,interval) )
    ( (This)->lpVtbl -> put_SampleInterval(This,interval) )
    ( (This)->lpVtbl -> get_Task(This,task) )
    ( (This)->lpVtbl -> put_Task(This,task) )
    ( (This)->lpVtbl -> get_TaskRunAsSelf(This,RunAsSelf) )
    ( (This)->lpVtbl -> put_TaskRunAsSelf(This,RunAsSelf) )
    ( (This)->lpVtbl -> get_TaskArguments(This,task) )
    ( (This)->lpVtbl -> put_TaskArguments(This,task) )
    ( (This)->lpVtbl -> get_TaskUserTextArguments(This,task) )
    ( (This)->lpVtbl -> put_TaskUserTextArguments(This,task) )
    ( (This)->lpVtbl -> get_TriggerDataCollectorSet(This,name) )
    ( (This)->lpVtbl -> put_TriggerDataCollectorSet(This,name) )
EXTERN_C const IID IID_IApiTracingDataCollector;
    typedef struct IApiTracingDataCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApiTracingDataCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApiTracingDataCollector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IApiTracingDataCollector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IApiTracingDataCollector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IApiTracingDataCollector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorSet )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt IDataCollectorSet **group);
                                            HRESULT ( STDMETHODCALLTYPE *put_DataCollectorSet )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in_opt IDataCollectorSet *group);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCollectorType )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out DataCollectorType *type);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormat )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out AutoPathFormat *format);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormat )(
            __RPC__in IApiTracingDataCollector * This,
                       AutoPathFormat format);
                        HRESULT ( STDMETHODCALLTYPE *get_FileNameFormatPattern )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *pattern);
                        HRESULT ( STDMETHODCALLTYPE *put_FileNameFormatPattern )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR pattern);
                        HRESULT ( STDMETHODCALLTYPE *get_LatestOutputLocation )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *put_LatestOutputLocation )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR path);
                        HRESULT ( STDMETHODCALLTYPE *get_LogAppend )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out VARIANT_BOOL *append);
                        HRESULT ( STDMETHODCALLTYPE *put_LogAppend )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL append);
                        HRESULT ( STDMETHODCALLTYPE *get_LogCircular )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out VARIANT_BOOL *circular);
                        HRESULT ( STDMETHODCALLTYPE *put_LogCircular )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL circular);
                        HRESULT ( STDMETHODCALLTYPE *get_LogOverwrite )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                        HRESULT ( STDMETHODCALLTYPE *put_LogOverwrite )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL overwrite);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputLocation )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *path);
                        HRESULT ( STDMETHODCALLTYPE *get_Index )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out long *index);
                                            HRESULT ( STDMETHODCALLTYPE *put_Index )(
            __RPC__in IApiTracingDataCollector * This,
                       long index);
                        HRESULT ( STDMETHODCALLTYPE *get_Xml )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *Xml);
        HRESULT ( STDMETHODCALLTYPE *SetXml )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR Xml,
                                __RPC__deref_out_opt IValueMap **Validation);
        HRESULT ( STDMETHODCALLTYPE *CreateOutputLocation )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL Latest,
                                __RPC__deref_out_opt BSTR *Location);
                        HRESULT ( STDMETHODCALLTYPE *get_LogApiNamesOnly )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out VARIANT_BOOL *logapinames);
                        HRESULT ( STDMETHODCALLTYPE *put_LogApiNamesOnly )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL logapinames);
                        HRESULT ( STDMETHODCALLTYPE *get_LogApisRecursively )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__out VARIANT_BOOL *logrecursively);
                        HRESULT ( STDMETHODCALLTYPE *put_LogApisRecursively )(
            __RPC__in IApiTracingDataCollector * This,
                       VARIANT_BOOL logrecursively);
                        HRESULT ( STDMETHODCALLTYPE *get_ExePath )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *exepath);
                        HRESULT ( STDMETHODCALLTYPE *put_ExePath )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR exepath);
                        HRESULT ( STDMETHODCALLTYPE *get_LogFilePath )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt BSTR *logfilepath);
                        HRESULT ( STDMETHODCALLTYPE *put_LogFilePath )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in BSTR logfilepath);
                        HRESULT ( STDMETHODCALLTYPE *get_IncludeModules )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *includemodules);
                        HRESULT ( STDMETHODCALLTYPE *put_IncludeModules )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in SAFEARRAY * includemodules);
                        HRESULT ( STDMETHODCALLTYPE *get_IncludeApis )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *includeapis);
                        HRESULT ( STDMETHODCALLTYPE *put_IncludeApis )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in SAFEARRAY * includeapis);
                        HRESULT ( STDMETHODCALLTYPE *get_ExcludeApis )(
            __RPC__in IApiTracingDataCollector * This,
                                __RPC__deref_out_opt SAFEARRAY * *excludeapis);
                        HRESULT ( STDMETHODCALLTYPE *put_ExcludeApis )(
            __RPC__in IApiTracingDataCollector * This,
                       __RPC__in SAFEARRAY * excludeapis);
        END_INTERFACE
    } IApiTracingDataCollectorVtbl;
    interface IApiTracingDataCollector
    {
        CONST_VTBL struct IApiTracingDataCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
    ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
    ( (This)->lpVtbl -> get_FileName(This,name) )
    ( (This)->lpVtbl -> put_FileName(This,name) )
    ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
    ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
    ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
    ( (This)->lpVtbl -> get_LogAppend(This,append) )
    ( (This)->lpVtbl -> put_LogAppend(This,append) )
    ( (This)->lpVtbl -> get_LogCircular(This,circular) )
    ( (This)->lpVtbl -> put_LogCircular(This,circular) )
    ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_OutputLocation(This,path) )
    ( (This)->lpVtbl -> get_Index(This,index) )
    ( (This)->lpVtbl -> put_Index(This,index) )
    ( (This)->lpVtbl -> get_Xml(This,Xml) )
    ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
    ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
    ( (This)->lpVtbl -> get_LogApiNamesOnly(This,logapinames) )
    ( (This)->lpVtbl -> put_LogApiNamesOnly(This,logapinames) )
    ( (This)->lpVtbl -> get_LogApisRecursively(This,logrecursively) )
    ( (This)->lpVtbl -> put_LogApisRecursively(This,logrecursively) )
    ( (This)->lpVtbl -> get_ExePath(This,exepath) )
    ( (This)->lpVtbl -> put_ExePath(This,exepath) )
    ( (This)->lpVtbl -> get_LogFilePath(This,logfilepath) )
    ( (This)->lpVtbl -> put_LogFilePath(This,logfilepath) )
    ( (This)->lpVtbl -> get_IncludeModules(This,includemodules) )
    ( (This)->lpVtbl -> put_IncludeModules(This,includemodules) )
    ( (This)->lpVtbl -> get_IncludeApis(This,includeapis) )
    ( (This)->lpVtbl -> put_IncludeApis(This,includeapis) )
    ( (This)->lpVtbl -> get_ExcludeApis(This,excludeapis) )
    ( (This)->lpVtbl -> put_ExcludeApis(This,excludeapis) )
EXTERN_C const IID IID_IDataCollectorCollection;
    typedef struct IDataCollectorCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataCollectorCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataCollectorCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataCollectorCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataCollectorCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataCollectorCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataCollectorCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataCollectorCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IDataCollectorCollection * This,
                                __RPC__out long *retVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IDataCollectorCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt IDataCollector **collector);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IDataCollectorCollection * This,
                                __RPC__deref_out_opt IUnknown **retVal);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IDataCollectorCollection * This,
            __RPC__in_opt IDataCollector *collector);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDataCollectorCollection * This,
            VARIANT collector);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IDataCollectorCollection * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IDataCollectorCollection * This,
            __RPC__in_opt IDataCollectorCollection *collectors);
        HRESULT ( STDMETHODCALLTYPE *CreateDataCollectorFromXml )(
            __RPC__in IDataCollectorCollection * This,
                       __RPC__in BSTR bstrXml,
                        __RPC__deref_out_opt IValueMap **pValidation,
                                __RPC__deref_out_opt IDataCollector **pCollector);
        HRESULT ( STDMETHODCALLTYPE *CreateDataCollector )(
            __RPC__in IDataCollectorCollection * This,
                       DataCollectorType Type,
                                __RPC__deref_out_opt IDataCollector **Collector);
        END_INTERFACE
    } IDataCollectorCollectionVtbl;
    interface IDataCollectorCollection
    {
        CONST_VTBL struct IDataCollectorCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retVal) )
    ( (This)->lpVtbl -> get_Item(This,index,collector) )
    ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
    ( (This)->lpVtbl -> Add(This,collector) )
    ( (This)->lpVtbl -> Remove(This,collector) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,collectors) )
    ( (This)->lpVtbl -> CreateDataCollectorFromXml(This,bstrXml,pValidation,pCollector) )
    ( (This)->lpVtbl -> CreateDataCollector(This,Type,Collector) )
EXTERN_C const IID IID_IDataCollectorSetCollection;
    typedef struct IDataCollectorSetCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataCollectorSetCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataCollectorSetCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataCollectorSetCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDataCollectorSetCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDataCollectorSetCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDataCollectorSetCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDataCollectorSetCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IDataCollectorSetCollection * This,
                                __RPC__out long *retVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IDataCollectorSetCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt IDataCollectorSet **set);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IDataCollectorSetCollection * This,
                                __RPC__deref_out_opt IUnknown **retVal);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IDataCollectorSetCollection * This,
            __RPC__in_opt IDataCollectorSet *set);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDataCollectorSetCollection * This,
            VARIANT set);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IDataCollectorSetCollection * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IDataCollectorSetCollection * This,
            __RPC__in_opt IDataCollectorSetCollection *sets);
        HRESULT ( STDMETHODCALLTYPE *GetDataCollectorSets )(
            __RPC__in IDataCollectorSetCollection * This,
                               __RPC__in_opt BSTR server,
                               __RPC__in_opt BSTR filter);
        END_INTERFACE
    } IDataCollectorSetCollectionVtbl;
    interface IDataCollectorSetCollection
    {
        CONST_VTBL struct IDataCollectorSetCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retVal) )
    ( (This)->lpVtbl -> get_Item(This,index,set) )
    ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
    ( (This)->lpVtbl -> Add(This,set) )
    ( (This)->lpVtbl -> Remove(This,set) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,sets) )
    ( (This)->lpVtbl -> GetDataCollectorSets(This,server,filter) )
EXTERN_C const IID IID_ITraceDataProvider;
    typedef struct ITraceDataProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITraceDataProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITraceDataProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITraceDataProvider * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITraceDataProvider * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITraceDataProvider * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt BSTR *name);
                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in BSTR name);
                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__out GUID *guid);
                        HRESULT ( STDMETHODCALLTYPE *put_Guid )(
            __RPC__in ITraceDataProvider * This,
                       GUID guid);
                        HRESULT ( STDMETHODCALLTYPE *get_Level )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt IValueMap **ppLevel);
                        HRESULT ( STDMETHODCALLTYPE *get_KeywordsAny )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt IValueMap **ppKeywords);
                        HRESULT ( STDMETHODCALLTYPE *get_KeywordsAll )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt IValueMap **ppKeywords);
                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt IValueMap **ppProperties);
                        HRESULT ( STDMETHODCALLTYPE *get_FilterEnabled )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__out VARIANT_BOOL *FilterEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_FilterEnabled )(
            __RPC__in ITraceDataProvider * This,
                       VARIANT_BOOL FilterEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_FilterType )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__out ULONG *pulType);
                        HRESULT ( STDMETHODCALLTYPE *put_FilterType )(
            __RPC__in ITraceDataProvider * This,
                       ULONG ulType);
                        HRESULT ( STDMETHODCALLTYPE *get_FilterData )(
            __RPC__in ITraceDataProvider * This,
                                __RPC__deref_out_opt SAFEARRAY * *ppData);
                        HRESULT ( STDMETHODCALLTYPE *put_FilterData )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in SAFEARRAY * pData);
        HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in BSTR bstrName,
                               __RPC__in_opt BSTR bstrServer);
        HRESULT ( STDMETHODCALLTYPE *Resolve )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in_opt IDispatch *pFrom);
        HRESULT ( STDMETHODCALLTYPE *SetSecurity )(
            __RPC__in ITraceDataProvider * This,
                       __RPC__in BSTR Sddl);
        HRESULT ( STDMETHODCALLTYPE *GetSecurity )(
            __RPC__in ITraceDataProvider * This,
                       ULONG SecurityInfo,
                                __RPC__deref_out_opt BSTR *Sddl);
        HRESULT ( STDMETHODCALLTYPE *GetRegisteredProcesses )(
            __RPC__in ITraceDataProvider * This,
                        __RPC__deref_out_opt IValueMap **Processes);
        END_INTERFACE
    } ITraceDataProviderVtbl;
    interface ITraceDataProvider
    {
        CONST_VTBL struct ITraceDataProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,name) )
    ( (This)->lpVtbl -> put_DisplayName(This,name) )
    ( (This)->lpVtbl -> get_Guid(This,guid) )
    ( (This)->lpVtbl -> put_Guid(This,guid) )
    ( (This)->lpVtbl -> get_Level(This,ppLevel) )
    ( (This)->lpVtbl -> get_KeywordsAny(This,ppKeywords) )
    ( (This)->lpVtbl -> get_KeywordsAll(This,ppKeywords) )
    ( (This)->lpVtbl -> get_Properties(This,ppProperties) )
    ( (This)->lpVtbl -> get_FilterEnabled(This,FilterEnabled) )
    ( (This)->lpVtbl -> put_FilterEnabled(This,FilterEnabled) )
    ( (This)->lpVtbl -> get_FilterType(This,pulType) )
    ( (This)->lpVtbl -> put_FilterType(This,ulType) )
    ( (This)->lpVtbl -> get_FilterData(This,ppData) )
    ( (This)->lpVtbl -> put_FilterData(This,pData) )
    ( (This)->lpVtbl -> Query(This,bstrName,bstrServer) )
    ( (This)->lpVtbl -> Resolve(This,pFrom) )
    ( (This)->lpVtbl -> SetSecurity(This,Sddl) )
    ( (This)->lpVtbl -> GetSecurity(This,SecurityInfo,Sddl) )
    ( (This)->lpVtbl -> GetRegisteredProcesses(This,Processes) )
EXTERN_C const IID IID_ITraceDataProviderCollection;
    typedef struct ITraceDataProviderCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITraceDataProviderCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITraceDataProviderCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITraceDataProviderCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITraceDataProviderCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITraceDataProviderCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITraceDataProviderCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITraceDataProviderCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITraceDataProviderCollection * This,
                                __RPC__out long *retVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITraceDataProviderCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt ITraceDataProvider **ppProvider);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITraceDataProviderCollection * This,
                                __RPC__deref_out_opt IUnknown **retVal);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITraceDataProviderCollection * This,
            __RPC__in_opt ITraceDataProvider *pProvider);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ITraceDataProviderCollection * This,
            VARIANT vProvider);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ITraceDataProviderCollection * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in ITraceDataProviderCollection * This,
            __RPC__in_opt ITraceDataProviderCollection *providers);
        HRESULT ( STDMETHODCALLTYPE *CreateTraceDataProvider )(
            __RPC__in ITraceDataProviderCollection * This,
                                __RPC__deref_out_opt ITraceDataProvider **Provider);
        HRESULT ( STDMETHODCALLTYPE *GetTraceDataProviders )(
            __RPC__in ITraceDataProviderCollection * This,
                               __RPC__in_opt BSTR server);
        HRESULT ( STDMETHODCALLTYPE *GetTraceDataProvidersByProcess )(
            __RPC__in ITraceDataProviderCollection * This,
                               __RPC__in_opt BSTR Server,
                       ULONG Pid);
        END_INTERFACE
    } ITraceDataProviderCollectionVtbl;
    interface ITraceDataProviderCollection
    {
        CONST_VTBL struct ITraceDataProviderCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retVal) )
    ( (This)->lpVtbl -> get_Item(This,index,ppProvider) )
    ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
    ( (This)->lpVtbl -> Add(This,pProvider) )
    ( (This)->lpVtbl -> Remove(This,vProvider) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,providers) )
    ( (This)->lpVtbl -> CreateTraceDataProvider(This,Provider) )
    ( (This)->lpVtbl -> GetTraceDataProviders(This,server) )
    ( (This)->lpVtbl -> GetTraceDataProvidersByProcess(This,Server,Pid) )
EXTERN_C const IID IID_ISchedule;
    typedef struct IScheduleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISchedule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISchedule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISchedule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISchedule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISchedule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISchedule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchedule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_StartDate )(
            __RPC__in ISchedule * This,
                                __RPC__out VARIANT *start);
                        HRESULT ( STDMETHODCALLTYPE *put_StartDate )(
            __RPC__in ISchedule * This,
                       VARIANT start);
                        HRESULT ( STDMETHODCALLTYPE *get_EndDate )(
            __RPC__in ISchedule * This,
                                __RPC__out VARIANT *end);
                        HRESULT ( STDMETHODCALLTYPE *put_EndDate )(
            __RPC__in ISchedule * This,
                       VARIANT end);
                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in ISchedule * This,
                                __RPC__out VARIANT *start);
                        HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in ISchedule * This,
                       VARIANT start);
                        HRESULT ( STDMETHODCALLTYPE *get_Days )(
            __RPC__in ISchedule * This,
                                __RPC__out WeekDays *days);
                        HRESULT ( STDMETHODCALLTYPE *put_Days )(
            __RPC__in ISchedule * This,
                       WeekDays days);
        END_INTERFACE
    } IScheduleVtbl;
    interface ISchedule
    {
        CONST_VTBL struct IScheduleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartDate(This,start) )
    ( (This)->lpVtbl -> put_StartDate(This,start) )
    ( (This)->lpVtbl -> get_EndDate(This,end) )
    ( (This)->lpVtbl -> put_EndDate(This,end) )
    ( (This)->lpVtbl -> get_StartTime(This,start) )
    ( (This)->lpVtbl -> put_StartTime(This,start) )
    ( (This)->lpVtbl -> get_Days(This,days) )
    ( (This)->lpVtbl -> put_Days(This,days) )
EXTERN_C const IID IID_IScheduleCollection;
    typedef struct IScheduleCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScheduleCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScheduleCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScheduleCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IScheduleCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IScheduleCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IScheduleCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IScheduleCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IScheduleCollection * This,
                                __RPC__out long *retVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IScheduleCollection * This,
                       VARIANT index,
                                __RPC__deref_out_opt ISchedule **ppSchedule);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IScheduleCollection * This,
                                __RPC__deref_out_opt IUnknown **ienum);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IScheduleCollection * This,
            __RPC__in_opt ISchedule *pSchedule);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IScheduleCollection * This,
            VARIANT vSchedule);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IScheduleCollection * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IScheduleCollection * This,
            __RPC__in_opt IScheduleCollection *pSchedules);
        HRESULT ( STDMETHODCALLTYPE *CreateSchedule )(
            __RPC__in IScheduleCollection * This,
                                __RPC__deref_out_opt ISchedule **Schedule);
        END_INTERFACE
    } IScheduleCollectionVtbl;
    interface IScheduleCollection
    {
        CONST_VTBL struct IScheduleCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retVal) )
    ( (This)->lpVtbl -> get_Item(This,index,ppSchedule) )
    ( (This)->lpVtbl -> get__NewEnum(This,ienum) )
    ( (This)->lpVtbl -> Add(This,pSchedule) )
    ( (This)->lpVtbl -> Remove(This,vSchedule) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,pSchedules) )
    ( (This)->lpVtbl -> CreateSchedule(This,Schedule) )
EXTERN_C const IID IID_IValueMapItem;
    typedef struct IValueMapItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IValueMapItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IValueMapItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IValueMapItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IValueMapItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IValueMapItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IValueMapItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IValueMapItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IValueMapItem * This,
                                __RPC__deref_out_opt BSTR *description);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IValueMapItem * This,
                       __RPC__in BSTR description);
                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IValueMapItem * This,
                                __RPC__out VARIANT_BOOL *enabled);
                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IValueMapItem * This,
                       VARIANT_BOOL enabled);
                        HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IValueMapItem * This,
                                __RPC__deref_out_opt BSTR *key);
                        HRESULT ( STDMETHODCALLTYPE *put_Key )(
            __RPC__in IValueMapItem * This,
                       __RPC__in BSTR key);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IValueMapItem * This,
                                __RPC__out VARIANT *Value);
                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IValueMapItem * This,
                       VARIANT Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ValueMapType )(
            __RPC__in IValueMapItem * This,
                                __RPC__out ValueMapType *type);
                        HRESULT ( STDMETHODCALLTYPE *put_ValueMapType )(
            __RPC__in IValueMapItem * This,
                       ValueMapType type);
        END_INTERFACE
    } IValueMapItemVtbl;
    interface IValueMapItem
    {
        CONST_VTBL struct IValueMapItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> put_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,Value) )
    ( (This)->lpVtbl -> put_Value(This,Value) )
    ( (This)->lpVtbl -> get_ValueMapType(This,type) )
    ( (This)->lpVtbl -> put_ValueMapType(This,type) )
EXTERN_C const IID IID_IValueMap;
    typedef struct IValueMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IValueMap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IValueMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IValueMap * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IValueMap * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IValueMap * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IValueMap * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IValueMap * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IValueMap * This,
                                __RPC__out long *retVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IValueMap * This,
                       VARIANT index,
                                __RPC__deref_out_opt IValueMapItem **value);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IValueMap * This,
                                __RPC__deref_out_opt IUnknown **retVal);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IValueMap * This,
                                __RPC__deref_out_opt BSTR *description);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IValueMap * This,
                       __RPC__in BSTR description);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IValueMap * This,
                                __RPC__out VARIANT *Value);
                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IValueMap * This,
                       VARIANT Value);
                        HRESULT ( STDMETHODCALLTYPE *get_ValueMapType )(
            __RPC__in IValueMap * This,
                                __RPC__out ValueMapType *type);
                        HRESULT ( STDMETHODCALLTYPE *put_ValueMapType )(
            __RPC__in IValueMap * This,
                       ValueMapType type);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IValueMap * This,
            VARIANT value);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IValueMap * This,
            VARIANT value);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IValueMap * This);
        HRESULT ( STDMETHODCALLTYPE *AddRange )(
            __RPC__in IValueMap * This,
            __RPC__in_opt IValueMap *map);
        HRESULT ( STDMETHODCALLTYPE *CreateValueMapItem )(
            __RPC__in IValueMap * This,
                                __RPC__deref_out_opt IValueMapItem **Item);
        END_INTERFACE
    } IValueMapVtbl;
    interface IValueMap
    {
        CONST_VTBL struct IValueMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,retVal) )
    ( (This)->lpVtbl -> get_Item(This,index,value) )
    ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> get_Value(This,Value) )
    ( (This)->lpVtbl -> put_Value(This,Value) )
    ( (This)->lpVtbl -> get_ValueMapType(This,type) )
    ( (This)->lpVtbl -> put_ValueMapType(This,type) )
    ( (This)->lpVtbl -> Add(This,value) )
    ( (This)->lpVtbl -> Remove(This,value) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddRange(This,map) )
    ( (This)->lpVtbl -> CreateValueMapItem(This,Item) )
EXTERN_C const CLSID CLSID_DataCollectorSet;
class DECLSPEC_UUID("03837521-098b-11d8-9414-505054503030")
DataCollectorSet;
EXTERN_C const CLSID CLSID_TraceSession;
class DECLSPEC_UUID("0383751c-098b-11d8-9414-505054503030")
TraceSession;
EXTERN_C const CLSID CLSID_TraceSessionCollection;
class DECLSPEC_UUID("03837530-098b-11d8-9414-505054503030")
TraceSessionCollection;
EXTERN_C const CLSID CLSID_TraceDataProvider;
class DECLSPEC_UUID("03837513-098b-11d8-9414-505054503030")
TraceDataProvider;
EXTERN_C const CLSID CLSID_TraceDataProviderCollection;
class DECLSPEC_UUID("03837511-098b-11d8-9414-505054503030")
TraceDataProviderCollection;
EXTERN_C const CLSID CLSID_DataCollectorSetCollection;
class DECLSPEC_UUID("03837525-098b-11d8-9414-505054503030")
DataCollectorSetCollection;
EXTERN_C const CLSID CLSID_LegacyDataCollectorSet;
class DECLSPEC_UUID("03837526-098b-11d8-9414-505054503030")
LegacyDataCollectorSet;
EXTERN_C const CLSID CLSID_LegacyDataCollectorSetCollection;
class DECLSPEC_UUID("03837527-098b-11d8-9414-505054503030")
LegacyDataCollectorSetCollection;
EXTERN_C const CLSID CLSID_LegacyTraceSession;
class DECLSPEC_UUID("03837528-098b-11d8-9414-505054503030")
LegacyTraceSession;
EXTERN_C const CLSID CLSID_LegacyTraceSessionCollection;
class DECLSPEC_UUID("03837529-098b-11d8-9414-505054503030")
LegacyTraceSessionCollection;
EXTERN_C const CLSID CLSID_ServerDataCollectorSet;
class DECLSPEC_UUID("03837531-098b-11d8-9414-505054503030")
ServerDataCollectorSet;
EXTERN_C const CLSID CLSID_ServerDataCollectorSetCollection;
class DECLSPEC_UUID("03837532-098b-11d8-9414-505054503030")
ServerDataCollectorSetCollection;
EXTERN_C const CLSID CLSID_SystemDataCollectorSet;
class DECLSPEC_UUID("03837546-098b-11d8-9414-505054503030")
SystemDataCollectorSet;
EXTERN_C const CLSID CLSID_SystemDataCollectorSetCollection;
class DECLSPEC_UUID("03837547-098b-11d8-9414-505054503030")
SystemDataCollectorSetCollection;
EXTERN_C const CLSID CLSID_BootTraceSession;
class DECLSPEC_UUID("03837538-098b-11d8-9414-505054503030")
BootTraceSession;
EXTERN_C const CLSID CLSID_BootTraceSessionCollection;
class DECLSPEC_UUID("03837539-098b-11d8-9414-505054503030")
BootTraceSessionCollection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_pla_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pla_0000_0001_v0_0_s_ifspec;
}

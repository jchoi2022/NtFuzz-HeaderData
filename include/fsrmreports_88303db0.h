#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFsrmReportManager IFsrmReportManager;
typedef interface IFsrmReportJob IFsrmReportJob;
typedef interface IFsrmReport IFsrmReport;
typedef interface IFsrmReportScheduler IFsrmReportScheduler;
typedef interface IFsrmFileManagementJobManager IFsrmFileManagementJobManager;
typedef interface IFsrmFileManagementJob IFsrmFileManagementJob;
typedef interface IFsrmPropertyCondition IFsrmPropertyCondition;
typedef interface IFsrmFileCondition IFsrmFileCondition;
typedef interface IFsrmFileConditionProperty IFsrmFileConditionProperty;
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsrmReportManager;
    typedef struct IFsrmReportManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmReportManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmReportManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmReportManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmReportManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmReportManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmReportManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmReportManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *EnumReportJobs )(
            __RPC__in IFsrmReportManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **reportJobs);
                               HRESULT ( STDMETHODCALLTYPE *CreateReportJob )(
            __RPC__in IFsrmReportManager * This,
                                __RPC__deref_out_opt IFsrmReportJob **reportJob);
                               HRESULT ( STDMETHODCALLTYPE *GetReportJob )(
            __RPC__in IFsrmReportManager * This,
                       __RPC__in BSTR taskName,
                                __RPC__deref_out_opt IFsrmReportJob **reportJob);
                               HRESULT ( STDMETHODCALLTYPE *GetOutputDirectory )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportGenerationContext context,
                                __RPC__deref_out_opt BSTR *path);
                               HRESULT ( STDMETHODCALLTYPE *SetOutputDirectory )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportGenerationContext context,
                       __RPC__in BSTR path);
                               HRESULT ( STDMETHODCALLTYPE *IsFilterValidForReportType )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportType reportType,
                       FsrmReportFilter filter,
                                __RPC__out VARIANT_BOOL *valid);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultFilter )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportType reportType,
                       FsrmReportFilter filter,
                                __RPC__out VARIANT *filterValue);
                               HRESULT ( STDMETHODCALLTYPE *SetDefaultFilter )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportType reportType,
                       FsrmReportFilter filter,
                       VARIANT filterValue);
                               HRESULT ( STDMETHODCALLTYPE *GetReportSizeLimit )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportLimit limit,
                                __RPC__out VARIANT *limitValue);
                               HRESULT ( STDMETHODCALLTYPE *SetReportSizeLimit )(
            __RPC__in IFsrmReportManager * This,
                       FsrmReportLimit limit,
                       VARIANT limitValue);
        END_INTERFACE
    } IFsrmReportManagerVtbl;
    interface IFsrmReportManager
    {
        CONST_VTBL struct IFsrmReportManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EnumReportJobs(This,options,reportJobs) )
    ( (This)->lpVtbl -> CreateReportJob(This,reportJob) )
    ( (This)->lpVtbl -> GetReportJob(This,taskName,reportJob) )
    ( (This)->lpVtbl -> GetOutputDirectory(This,context,path) )
    ( (This)->lpVtbl -> SetOutputDirectory(This,context,path) )
    ( (This)->lpVtbl -> IsFilterValidForReportType(This,reportType,filter,valid) )
    ( (This)->lpVtbl -> GetDefaultFilter(This,reportType,filter,filterValue) )
    ( (This)->lpVtbl -> SetDefaultFilter(This,reportType,filter,filterValue) )
    ( (This)->lpVtbl -> GetReportSizeLimit(This,limit,limitValue) )
    ( (This)->lpVtbl -> SetReportSizeLimit(This,limit,limitValue) )
EXTERN_C const IID IID_IFsrmReportJob;
    typedef struct IFsrmReportJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmReportJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmReportJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmReportJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmReportJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmReportJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmReportJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmReportJob * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Task )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt BSTR *taskName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Task )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in BSTR taskName);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceRoots )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *put_NamespaceRoots )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in SAFEARRAY * namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *get_Formats )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *formats);
                                        HRESULT ( STDMETHODCALLTYPE *put_Formats )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in SAFEARRAY * formats);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailTo )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailTo )(
            __RPC__in IFsrmReportJob * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunningStatus )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__out FsrmReportRunningStatus *runningStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastRun )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__out DATE *lastRun);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastError )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt BSTR *lastError);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastGeneratedInDirectory )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt BSTR *path);
                               HRESULT ( STDMETHODCALLTYPE *EnumReports )(
            __RPC__in IFsrmReportJob * This,
                                __RPC__deref_out_opt IFsrmCollection **reports);
                               HRESULT ( STDMETHODCALLTYPE *CreateReport )(
            __RPC__in IFsrmReportJob * This,
                       FsrmReportType reportType,
                                __RPC__deref_out_opt IFsrmReport **report);
                               HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IFsrmReportJob * This,
                       FsrmReportGenerationContext context);
                               HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IFsrmReportJob * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFsrmReportJob * This);
        END_INTERFACE
    } IFsrmReportJobVtbl;
    interface IFsrmReportJob
    {
        CONST_VTBL struct IFsrmReportJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Task(This,taskName) )
    ( (This)->lpVtbl -> put_Task(This,taskName) )
    ( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> get_Formats(This,formats) )
    ( (This)->lpVtbl -> put_Formats(This,formats) )
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_RunningStatus(This,runningStatus) )
    ( (This)->lpVtbl -> get_LastRun(This,lastRun) )
    ( (This)->lpVtbl -> get_LastError(This,lastError) )
    ( (This)->lpVtbl -> get_LastGeneratedInDirectory(This,path) )
    ( (This)->lpVtbl -> EnumReports(This,reports) )
    ( (This)->lpVtbl -> CreateReport(This,reportType,report) )
    ( (This)->lpVtbl -> Run(This,context) )
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IFsrmReport;
    typedef struct IFsrmReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmReport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmReport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmReport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmReport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmReport * This,
                                __RPC__out FsrmReportType *reportType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmReport * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmReport * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmReport * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmReport * This,
                       __RPC__in BSTR description);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastGeneratedFileNamePrefix )(
            __RPC__in IFsrmReport * This,
                                __RPC__deref_out_opt BSTR *prefix);
                               HRESULT ( STDMETHODCALLTYPE *GetFilter )(
            __RPC__in IFsrmReport * This,
                       FsrmReportFilter filter,
                                __RPC__out VARIANT *filterValue);
                               HRESULT ( STDMETHODCALLTYPE *SetFilter )(
            __RPC__in IFsrmReport * This,
                       FsrmReportFilter filter,
                       VARIANT filterValue);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmReport * This);
        END_INTERFACE
    } IFsrmReportVtbl;
    interface IFsrmReport
    {
        CONST_VTBL struct IFsrmReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,reportType) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> get_LastGeneratedFileNamePrefix(This,prefix) )
    ( (This)->lpVtbl -> GetFilter(This,filter,filterValue) )
    ( (This)->lpVtbl -> SetFilter(This,filter,filterValue) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFsrmReportScheduler;
    typedef struct IFsrmReportSchedulerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmReportScheduler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmReportScheduler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmReportScheduler * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmReportScheduler * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmReportScheduler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *VerifyNamespaces )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in VARIANT *namespacesSafeArray);
                               HRESULT ( STDMETHODCALLTYPE *CreateScheduleTask )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in BSTR taskName,
                       __RPC__in VARIANT *namespacesSafeArray,
                       __RPC__in BSTR serializedTask);
                               HRESULT ( STDMETHODCALLTYPE *ModifyScheduleTask )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in BSTR taskName,
                       __RPC__in VARIANT *namespacesSafeArray,
                       __RPC__in BSTR serializedTask);
                               HRESULT ( STDMETHODCALLTYPE *DeleteScheduleTask )(
            __RPC__in IFsrmReportScheduler * This,
                       __RPC__in BSTR taskName);
        END_INTERFACE
    } IFsrmReportSchedulerVtbl;
    interface IFsrmReportScheduler
    {
        CONST_VTBL struct IFsrmReportSchedulerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> VerifyNamespaces(This,namespacesSafeArray) )
    ( (This)->lpVtbl -> CreateScheduleTask(This,taskName,namespacesSafeArray,serializedTask) )
    ( (This)->lpVtbl -> ModifyScheduleTask(This,taskName,namespacesSafeArray,serializedTask) )
    ( (This)->lpVtbl -> DeleteScheduleTask(This,taskName) )
EXTERN_C const IID IID_IFsrmFileManagementJobManager;
    typedef struct IFsrmFileManagementJobManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileManagementJobManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileManagementJobManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileManagementJobManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileManagementJobManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileManagementJobManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileManagementJobManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileManagementJobManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariables )(
            __RPC__in IFsrmFileManagementJobManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *variables);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariableDescriptions )(
            __RPC__in IFsrmFileManagementJobManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *descriptions);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileManagementJobs )(
            __RPC__in IFsrmFileManagementJobManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **fileManagementJobs);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileManagementJob )(
            __RPC__in IFsrmFileManagementJobManager * This,
                                __RPC__deref_out_opt IFsrmFileManagementJob **fileManagementJob);
                               HRESULT ( STDMETHODCALLTYPE *GetFileManagementJob )(
            __RPC__in IFsrmFileManagementJobManager * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmFileManagementJob **fileManagementJob);
        END_INTERFACE
    } IFsrmFileManagementJobManagerVtbl;
    interface IFsrmFileManagementJobManager
    {
        CONST_VTBL struct IFsrmFileManagementJobManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ActionVariables(This,variables) )
    ( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
    ( (This)->lpVtbl -> EnumFileManagementJobs(This,options,fileManagementJobs) )
    ( (This)->lpVtbl -> CreateFileManagementJob(This,fileManagementJob) )
    ( (This)->lpVtbl -> GetFileManagementJob(This,name,fileManagementJob) )
EXTERN_C const IID IID_IFsrmFileManagementJob;
    typedef struct IFsrmFileManagementJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileManagementJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileManagementJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileManagementJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileManagementJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileManagementJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileManagementJob * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileManagementJob * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceRoots )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *put_NamespaceRoots )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in SAFEARRAY * namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out VARIANT_BOOL *enabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IFsrmFileManagementJob * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_OperationType )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out FsrmFileManagementType *operationType);
                                        HRESULT ( STDMETHODCALLTYPE *put_OperationType )(
            __RPC__in IFsrmFileManagementJob * This,
                       FsrmFileManagementType operationType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExpirationDirectory )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *expirationDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExpirationDirectory )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR expirationDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *get_CustomAction )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt IFsrmActionCommand **action);
                                        HRESULT ( STDMETHODCALLTYPE *get_Notifications )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *notifications);
                                        HRESULT ( STDMETHODCALLTYPE *get_Logging )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out long *loggingFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_Logging )(
            __RPC__in IFsrmFileManagementJob * This,
                       long loggingFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportEnabled )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out VARIANT_BOOL *reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportEnabled )(
            __RPC__in IFsrmFileManagementJob * This,
                       VARIANT_BOOL reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Formats )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *formats);
                                        HRESULT ( STDMETHODCALLTYPE *put_Formats )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in SAFEARRAY * formats);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailTo )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailTo )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysSinceFileCreated )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out long *daysSinceCreation);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysSinceFileCreated )(
            __RPC__in IFsrmFileManagementJob * This,
                       long daysSinceCreation);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysSinceFileLastAccessed )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out long *daysSinceAccess);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysSinceFileLastAccessed )(
            __RPC__in IFsrmFileManagementJob * This,
                       long daysSinceAccess);
                                        HRESULT ( STDMETHODCALLTYPE *get_DaysSinceFileLastModified )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out long *daysSinceModify);
                                        HRESULT ( STDMETHODCALLTYPE *put_DaysSinceFileLastModified )(
            __RPC__in IFsrmFileManagementJob * This,
                       long daysSinceModify);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyConditions )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt IFsrmCollection **propertyConditions);
                                        HRESULT ( STDMETHODCALLTYPE *get_FromDate )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out DATE *fromDate);
                                        HRESULT ( STDMETHODCALLTYPE *put_FromDate )(
            __RPC__in IFsrmFileManagementJob * This,
                       DATE fromDate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Task )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *taskName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Task )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR taskName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunningStatus )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out FsrmReportRunningStatus *runningStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastError )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *lastError);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastReportPathWithoutExtension )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastRun )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__out DATE *lastRun);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileNamePattern )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt BSTR *fileNamePattern);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileNamePattern )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR fileNamePattern);
                               HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IFsrmFileManagementJob * This,
                       FsrmReportGenerationContext context);
                               HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IFsrmFileManagementJob * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFsrmFileManagementJob * This);
                               HRESULT ( STDMETHODCALLTYPE *AddNotification )(
            __RPC__in IFsrmFileManagementJob * This,
                       long days);
                               HRESULT ( STDMETHODCALLTYPE *DeleteNotification )(
            __RPC__in IFsrmFileManagementJob * This,
                       long days);
                               HRESULT ( STDMETHODCALLTYPE *ModifyNotification )(
            __RPC__in IFsrmFileManagementJob * This,
                       long days,
                       long newDays);
                               HRESULT ( STDMETHODCALLTYPE *CreateNotificationAction )(
            __RPC__in IFsrmFileManagementJob * This,
                       long days,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumNotificationActions )(
            __RPC__in IFsrmFileManagementJob * This,
                       long days,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                               HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )(
            __RPC__in IFsrmFileManagementJob * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmPropertyCondition **propertyCondition);
                               HRESULT ( STDMETHODCALLTYPE *CreateCustomAction )(
            __RPC__in IFsrmFileManagementJob * This,
                                __RPC__deref_out_opt IFsrmActionCommand **customAction);
        END_INTERFACE
    } IFsrmFileManagementJobVtbl;
    interface IFsrmFileManagementJob
    {
        CONST_VTBL struct IFsrmFileManagementJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_OperationType(This,operationType) )
    ( (This)->lpVtbl -> put_OperationType(This,operationType) )
    ( (This)->lpVtbl -> get_ExpirationDirectory(This,expirationDirectory) )
    ( (This)->lpVtbl -> put_ExpirationDirectory(This,expirationDirectory) )
    ( (This)->lpVtbl -> get_CustomAction(This,action) )
    ( (This)->lpVtbl -> get_Notifications(This,notifications) )
    ( (This)->lpVtbl -> get_Logging(This,loggingFlags) )
    ( (This)->lpVtbl -> put_Logging(This,loggingFlags) )
    ( (This)->lpVtbl -> get_ReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> put_ReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> get_Formats(This,formats) )
    ( (This)->lpVtbl -> put_Formats(This,formats) )
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_DaysSinceFileCreated(This,daysSinceCreation) )
    ( (This)->lpVtbl -> put_DaysSinceFileCreated(This,daysSinceCreation) )
    ( (This)->lpVtbl -> get_DaysSinceFileLastAccessed(This,daysSinceAccess) )
    ( (This)->lpVtbl -> put_DaysSinceFileLastAccessed(This,daysSinceAccess) )
    ( (This)->lpVtbl -> get_DaysSinceFileLastModified(This,daysSinceModify) )
    ( (This)->lpVtbl -> put_DaysSinceFileLastModified(This,daysSinceModify) )
    ( (This)->lpVtbl -> get_PropertyConditions(This,propertyConditions) )
    ( (This)->lpVtbl -> get_FromDate(This,fromDate) )
    ( (This)->lpVtbl -> put_FromDate(This,fromDate) )
    ( (This)->lpVtbl -> get_Task(This,taskName) )
    ( (This)->lpVtbl -> put_Task(This,taskName) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_RunningStatus(This,runningStatus) )
    ( (This)->lpVtbl -> get_LastError(This,lastError) )
    ( (This)->lpVtbl -> get_LastReportPathWithoutExtension(This,path) )
    ( (This)->lpVtbl -> get_LastRun(This,lastRun) )
    ( (This)->lpVtbl -> get_FileNamePattern(This,fileNamePattern) )
    ( (This)->lpVtbl -> put_FileNamePattern(This,fileNamePattern) )
    ( (This)->lpVtbl -> Run(This,context) )
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> AddNotification(This,days) )
    ( (This)->lpVtbl -> DeleteNotification(This,days) )
    ( (This)->lpVtbl -> ModifyNotification(This,days,newDays) )
    ( (This)->lpVtbl -> CreateNotificationAction(This,days,actionType,action) )
    ( (This)->lpVtbl -> EnumNotificationActions(This,days,actions) )
    ( (This)->lpVtbl -> CreatePropertyCondition(This,name,propertyCondition) )
    ( (This)->lpVtbl -> CreateCustomAction(This,customAction) )
EXTERN_C const IID IID_IFsrmPropertyCondition;
    typedef struct IFsrmPropertyConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyCondition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyCondition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyCondition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyCondition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyCondition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyCondition * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmPropertyCondition * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmPropertyCondition * This,
                                __RPC__out FsrmPropertyConditionType *type);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IFsrmPropertyCondition * This,
                       FsrmPropertyConditionType type);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IFsrmPropertyCondition * This,
                                __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IFsrmPropertyCondition * This,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmPropertyCondition * This);
        END_INTERFACE
    } IFsrmPropertyConditionVtbl;
    interface IFsrmPropertyCondition
    {
        CONST_VTBL struct IFsrmPropertyConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Type(This,type) )
    ( (This)->lpVtbl -> put_Type(This,type) )
    ( (This)->lpVtbl -> get_Value(This,value) )
    ( (This)->lpVtbl -> put_Value(This,value) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFsrmFileCondition;
    typedef struct IFsrmFileConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileCondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileCondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileCondition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileCondition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileCondition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileCondition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileCondition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmFileCondition * This,
                                __RPC__out FsrmFileConditionType *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileCondition * This);
        END_INTERFACE
    } IFsrmFileConditionVtbl;
    interface IFsrmFileCondition
    {
        CONST_VTBL struct IFsrmFileConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFsrmFileConditionProperty;
    typedef struct IFsrmFileConditionPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileConditionProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileConditionProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileConditionProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileConditionProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileConditionProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileConditionProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileConditionProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__out FsrmFileConditionType *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileConditionProperty * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyName )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PropertyName )(
            __RPC__in IFsrmFileConditionProperty * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__out FsrmFileSystemPropertyId *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PropertyId )(
            __RPC__in IFsrmFileConditionProperty * This,
                       FsrmFileSystemPropertyId newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Operator )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__out FsrmPropertyConditionType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Operator )(
            __RPC__in IFsrmFileConditionProperty * This,
                       FsrmPropertyConditionType newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueType )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__out FsrmPropertyValueType *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ValueType )(
            __RPC__in IFsrmFileConditionProperty * This,
                       FsrmPropertyValueType newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IFsrmFileConditionProperty * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IFsrmFileConditionProperty * This,
                       VARIANT newVal);
        END_INTERFACE
    } IFsrmFileConditionPropertyVtbl;
    interface IFsrmFileConditionProperty
    {
        CONST_VTBL struct IFsrmFileConditionPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_PropertyName(This,pVal) )
    ( (This)->lpVtbl -> put_PropertyName(This,newVal) )
    ( (This)->lpVtbl -> get_PropertyId(This,pVal) )
    ( (This)->lpVtbl -> put_PropertyId(This,newVal) )
    ( (This)->lpVtbl -> get_Operator(This,pVal) )
    ( (This)->lpVtbl -> put_Operator(This,newVal) )
    ( (This)->lpVtbl -> get_ValueType(This,pVal) )
    ( (This)->lpVtbl -> put_ValueType(This,newVal) )
    ( (This)->lpVtbl -> get_Value(This,pVal) )
    ( (This)->lpVtbl -> put_Value(This,newVal) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0009_v0_0_s_ifspec;
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

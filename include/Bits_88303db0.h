#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyFile IBackgroundCopyFile;
typedef interface IEnumBackgroundCopyFiles IEnumBackgroundCopyFiles;
typedef interface IBackgroundCopyError IBackgroundCopyError;
typedef interface IBackgroundCopyJob IBackgroundCopyJob;
typedef interface IEnumBackgroundCopyJobs IEnumBackgroundCopyJobs;
typedef interface IBackgroundCopyCallback IBackgroundCopyCallback;
typedef interface AsyncIBackgroundCopyCallback AsyncIBackgroundCopyCallback;
typedef interface IBackgroundCopyManager IBackgroundCopyManager;
typedef class BackgroundCopyManager BackgroundCopyManager;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "bitsmsg.h"
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0000_v0_0_s_ifspec;
typedef struct _BG_FILE_PROGRESS
    {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
    BOOL Completed;
    } BG_FILE_PROGRESS;
EXTERN_C const IID IID_IBackgroundCopyFile;
    typedef struct IBackgroundCopyFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        END_INTERFACE
    } IBackgroundCopyFileVtbl;
    interface IBackgroundCopyFile
    {
        CONST_VTBL struct IBackgroundCopyFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRemoteName(This,pVal) )
    ( (This)->lpVtbl -> GetLocalName(This,pVal) )
    ( (This)->lpVtbl -> GetProgress(This,pVal) )
EXTERN_C const IID IID_IEnumBackgroundCopyFiles;
    typedef struct IEnumBackgroundCopyFilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBackgroundCopyFiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBackgroundCopyFiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBackgroundCopyFiles * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBackgroundCopyFiles * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, pceltFetched ? *pceltFetched : celt) IBackgroundCopyFile **rgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBackgroundCopyFiles * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBackgroundCopyFiles * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBackgroundCopyFiles * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBackgroundCopyFiles * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBackgroundCopyFilesVtbl;
    interface IEnumBackgroundCopyFiles
    {
        CONST_VTBL struct IEnumBackgroundCopyFilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
typedef
enum BG_ERROR_CONTEXT
    {
        BG_ERROR_CONTEXT_NONE = 0,
        BG_ERROR_CONTEXT_UNKNOWN = 1,
        BG_ERROR_CONTEXT_GENERAL_QUEUE_MANAGER = 2,
        BG_ERROR_CONTEXT_QUEUE_MANAGER_NOTIFICATION = 3,
        BG_ERROR_CONTEXT_LOCAL_FILE = 4,
        BG_ERROR_CONTEXT_REMOTE_FILE = 5,
        BG_ERROR_CONTEXT_GENERAL_TRANSPORT = 6,
        BG_ERROR_CONTEXT_REMOTE_APPLICATION = 7,
        BG_ERROR_CONTEXT_SERVER_CERTIFICATE_CALLBACK = 8
    } BG_ERROR_CONTEXT;
EXTERN_C const IID IID_IBackgroundCopyError;
    typedef struct IBackgroundCopyErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyError * This);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyError * This,
                             __RPC__out BG_ERROR_CONTEXT *pContext,
                             __RPC__out HRESULT *pCode);
        HRESULT ( STDMETHODCALLTYPE *GetFile )(
            __RPC__in IBackgroundCopyError * This,
                        __RPC__deref_out_opt IBackgroundCopyFile **pVal);
        HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )(
            __RPC__in IBackgroundCopyError * This,
                       DWORD LanguageId,
                             __RPC__deref_out_opt LPWSTR *pErrorDescription);
        HRESULT ( STDMETHODCALLTYPE *GetErrorContextDescription )(
            __RPC__in IBackgroundCopyError * This,
                       DWORD LanguageId,
                             __RPC__deref_out_opt LPWSTR *pContextDescription);
        HRESULT ( STDMETHODCALLTYPE *GetProtocol )(
            __RPC__in IBackgroundCopyError * This,
                             __RPC__deref_out_opt LPWSTR *pProtocol);
        END_INTERFACE
    } IBackgroundCopyErrorVtbl;
    interface IBackgroundCopyError
    {
        CONST_VTBL struct IBackgroundCopyErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetError(This,pContext,pCode) )
    ( (This)->lpVtbl -> GetFile(This,pVal) )
    ( (This)->lpVtbl -> GetErrorDescription(This,LanguageId,pErrorDescription) )
    ( (This)->lpVtbl -> GetErrorContextDescription(This,LanguageId,pContextDescription) )
    ( (This)->lpVtbl -> GetProtocol(This,pProtocol) )
typedef struct _BG_FILE_INFO
    {
    LPWSTR RemoteName;
    LPWSTR LocalName;
    } BG_FILE_INFO;
typedef struct _BG_JOB_PROGRESS
    {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
    ULONG FilesTotal;
    ULONG FilesTransferred;
    } BG_JOB_PROGRESS;
typedef struct _BG_JOB_TIMES
    {
    FILETIME CreationTime;
    FILETIME ModificationTime;
    FILETIME TransferCompletionTime;
    } BG_JOB_TIMES;
typedef
enum BG_JOB_PRIORITY
    {
        BG_JOB_PRIORITY_FOREGROUND = 0,
        BG_JOB_PRIORITY_HIGH = ( BG_JOB_PRIORITY_FOREGROUND + 1 ) ,
        BG_JOB_PRIORITY_NORMAL = ( BG_JOB_PRIORITY_HIGH + 1 ) ,
        BG_JOB_PRIORITY_LOW = ( BG_JOB_PRIORITY_NORMAL + 1 )
    } BG_JOB_PRIORITY;
typedef
enum BG_JOB_STATE
    {
        BG_JOB_STATE_QUEUED = 0,
        BG_JOB_STATE_CONNECTING = ( BG_JOB_STATE_QUEUED + 1 ) ,
        BG_JOB_STATE_TRANSFERRING = ( BG_JOB_STATE_CONNECTING + 1 ) ,
        BG_JOB_STATE_SUSPENDED = ( BG_JOB_STATE_TRANSFERRING + 1 ) ,
        BG_JOB_STATE_ERROR = ( BG_JOB_STATE_SUSPENDED + 1 ) ,
        BG_JOB_STATE_TRANSIENT_ERROR = ( BG_JOB_STATE_ERROR + 1 ) ,
        BG_JOB_STATE_TRANSFERRED = ( BG_JOB_STATE_TRANSIENT_ERROR + 1 ) ,
        BG_JOB_STATE_ACKNOWLEDGED = ( BG_JOB_STATE_TRANSFERRED + 1 ) ,
        BG_JOB_STATE_CANCELLED = ( BG_JOB_STATE_ACKNOWLEDGED + 1 )
    } BG_JOB_STATE;
typedef
enum BG_JOB_TYPE
    {
        BG_JOB_TYPE_DOWNLOAD = 0,
        BG_JOB_TYPE_UPLOAD = ( BG_JOB_TYPE_DOWNLOAD + 1 ) ,
        BG_JOB_TYPE_UPLOAD_REPLY = ( BG_JOB_TYPE_UPLOAD + 1 )
    } BG_JOB_TYPE;
typedef
enum BG_JOB_PROXY_USAGE
    {
        BG_JOB_PROXY_USAGE_PRECONFIG = 0,
        BG_JOB_PROXY_USAGE_NO_PROXY = ( BG_JOB_PROXY_USAGE_PRECONFIG + 1 ) ,
        BG_JOB_PROXY_USAGE_OVERRIDE = ( BG_JOB_PROXY_USAGE_NO_PROXY + 1 ) ,
        BG_JOB_PROXY_USAGE_AUTODETECT = ( BG_JOB_PROXY_USAGE_OVERRIDE + 1 )
    } BG_JOB_PROXY_USAGE;
EXTERN_C const IID IID_IBackgroundCopyJob;
    typedef struct IBackgroundCopyJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob * This);
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )(
            __RPC__in IBackgroundCopyJob * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) BG_FILE_INFO *pFileSet);
        HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IBackgroundCopyJob * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **pEnum);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBackgroundCopyJob * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBackgroundCopyJob * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IBackgroundCopyJob * This);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IBackgroundCopyJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_TYPE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_TIMES *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_STATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt IBackgroundCopyError **ppError);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            __RPC__in IBackgroundCopyJob * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IBackgroundCopyJob * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBackgroundCopyJob * This,
                       BG_JOB_PRIORITY Val);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_PRIORITY *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IBackgroundCopyJob * This,
                       ULONG Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )(
            __RPC__in IBackgroundCopyJob * This,
                       __RPC__in_opt IUnknown *Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__deref_out_opt IUnknown **pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out ULONG *Errors);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            __RPC__in IBackgroundCopyJob * This,
                       BG_JOB_PROXY_USAGE ProxyUsage,
                                       __RPC__in_opt_string const WCHAR *ProxyList,
                                       __RPC__in_opt_string const WCHAR *ProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            __RPC__in IBackgroundCopyJob * This,
                        __RPC__out BG_JOB_PROXY_USAGE *pProxyUsage,
                        __RPC__deref_out_opt LPWSTR *pProxyList,
                        __RPC__deref_out_opt LPWSTR *pProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in IBackgroundCopyJob * This);
        END_INTERFACE
    } IBackgroundCopyJobVtbl;
    interface IBackgroundCopyJob
    {
        CONST_VTBL struct IBackgroundCopyJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFileSet(This,cFileCount,pFileSet) )
    ( (This)->lpVtbl -> AddFile(This,RemoteUrl,LocalName) )
    ( (This)->lpVtbl -> EnumFiles(This,pEnum) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Complete(This) )
    ( (This)->lpVtbl -> GetId(This,pVal) )
    ( (This)->lpVtbl -> GetType(This,pVal) )
    ( (This)->lpVtbl -> GetProgress(This,pVal) )
    ( (This)->lpVtbl -> GetTimes(This,pVal) )
    ( (This)->lpVtbl -> GetState(This,pVal) )
    ( (This)->lpVtbl -> GetError(This,ppError) )
    ( (This)->lpVtbl -> GetOwner(This,pVal) )
    ( (This)->lpVtbl -> SetDisplayName(This,Val) )
    ( (This)->lpVtbl -> GetDisplayName(This,pVal) )
    ( (This)->lpVtbl -> SetDescription(This,Val) )
    ( (This)->lpVtbl -> GetDescription(This,pVal) )
    ( (This)->lpVtbl -> SetPriority(This,Val) )
    ( (This)->lpVtbl -> GetPriority(This,pVal) )
    ( (This)->lpVtbl -> SetNotifyFlags(This,Val) )
    ( (This)->lpVtbl -> GetNotifyFlags(This,pVal) )
    ( (This)->lpVtbl -> SetNotifyInterface(This,Val) )
    ( (This)->lpVtbl -> GetNotifyInterface(This,pVal) )
    ( (This)->lpVtbl -> SetMinimumRetryDelay(This,Seconds) )
    ( (This)->lpVtbl -> GetMinimumRetryDelay(This,Seconds) )
    ( (This)->lpVtbl -> SetNoProgressTimeout(This,Seconds) )
    ( (This)->lpVtbl -> GetNoProgressTimeout(This,Seconds) )
    ( (This)->lpVtbl -> GetErrorCount(This,Errors) )
    ( (This)->lpVtbl -> SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) )
    ( (This)->lpVtbl -> GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) )
    ( (This)->lpVtbl -> TakeOwnership(This) )
EXTERN_C const IID IID_IEnumBackgroundCopyJobs;
    typedef struct IEnumBackgroundCopyJobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBackgroundCopyJobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBackgroundCopyJobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBackgroundCopyJobs * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBackgroundCopyJobs * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, pceltFetched ? *pceltFetched : celt) IBackgroundCopyJob **rgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBackgroundCopyJobs * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBackgroundCopyJobs * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBackgroundCopyJobs * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyJobs **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBackgroundCopyJobs * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBackgroundCopyJobsVtbl;
    interface IEnumBackgroundCopyJobs
    {
        CONST_VTBL struct IEnumBackgroundCopyJobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyCallback;
    typedef struct IBackgroundCopyCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyCallback * This);
        HRESULT ( STDMETHODCALLTYPE *JobTransferred )(
            __RPC__in IBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob);
        HRESULT ( STDMETHODCALLTYPE *JobError )(
            __RPC__in IBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyError *pError);
        HRESULT ( STDMETHODCALLTYPE *JobModification )(
            __RPC__in IBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       DWORD dwReserved);
        END_INTERFACE
    } IBackgroundCopyCallbackVtbl;
    interface IBackgroundCopyCallback
    {
        CONST_VTBL struct IBackgroundCopyCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> JobTransferred(This,pJob) )
    ( (This)->lpVtbl -> JobError(This,pJob,pError) )
    ( (This)->lpVtbl -> JobModification(This,pJob,dwReserved) )
EXTERN_C const IID IID_AsyncIBackgroundCopyCallback;
    typedef struct AsyncIBackgroundCopyCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIBackgroundCopyCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIBackgroundCopyCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIBackgroundCopyCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_JobTransferred )(
            __RPC__in AsyncIBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob);
        HRESULT ( STDMETHODCALLTYPE *Finish_JobTransferred )(
            __RPC__in AsyncIBackgroundCopyCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_JobError )(
            __RPC__in AsyncIBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyError *pError);
        HRESULT ( STDMETHODCALLTYPE *Finish_JobError )(
            __RPC__in AsyncIBackgroundCopyCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_JobModification )(
            __RPC__in AsyncIBackgroundCopyCallback * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Finish_JobModification )(
            __RPC__in AsyncIBackgroundCopyCallback * This);
        END_INTERFACE
    } AsyncIBackgroundCopyCallbackVtbl;
    interface AsyncIBackgroundCopyCallback
    {
        CONST_VTBL struct AsyncIBackgroundCopyCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_JobTransferred(This,pJob) )
    ( (This)->lpVtbl -> Finish_JobTransferred(This) )
    ( (This)->lpVtbl -> Begin_JobError(This,pJob,pError) )
    ( (This)->lpVtbl -> Finish_JobError(This) )
    ( (This)->lpVtbl -> Begin_JobModification(This,pJob,dwReserved) )
    ( (This)->lpVtbl -> Finish_JobModification(This) )
EXTERN_C const IID IID_IBackgroundCopyManager;
    typedef struct IBackgroundCopyManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateJob )(
            __RPC__in IBackgroundCopyManager * This,
                       __RPC__in LPCWSTR DisplayName,
                       BG_JOB_TYPE Type,
                        __RPC__out GUID *pJobId,
                        __RPC__deref_out_opt IBackgroundCopyJob **ppJob);
        HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IBackgroundCopyManager * This,
                       __RPC__in REFGUID jobID,
                        __RPC__deref_out_opt IBackgroundCopyJob **ppJob);
        HRESULT ( STDMETHODCALLTYPE *EnumJobs )(
            __RPC__in IBackgroundCopyManager * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IEnumBackgroundCopyJobs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )(
            __RPC__in IBackgroundCopyManager * This,
                       HRESULT hResult,
                       DWORD LanguageId,
                        __RPC__deref_out_opt LPWSTR *pErrorDescription);
        END_INTERFACE
    } IBackgroundCopyManagerVtbl;
    interface IBackgroundCopyManager
    {
        CONST_VTBL struct IBackgroundCopyManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateJob(This,DisplayName,Type,pJobId,ppJob) )
    ( (This)->lpVtbl -> GetJob(This,jobID,ppJob) )
    ( (This)->lpVtbl -> EnumJobs(This,dwFlags,ppEnum) )
    ( (This)->lpVtbl -> GetErrorDescription(This,hResult,LanguageId,pErrorDescription) )
EXTERN_C const IID LIBID_BackgroundCopyManager;
EXTERN_C const CLSID CLSID_BackgroundCopyManager;
class DECLSPEC_UUID("4991d34b-80a1-4291-83b6-3328366b9097")
BackgroundCopyManager;
#include "bits1_5.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits_0000_0008_v0_0_s_ifspec;
}

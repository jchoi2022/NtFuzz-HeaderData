#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITaskTrigger ITaskTrigger;
typedef interface IScheduledWorkItem IScheduledWorkItem;
typedef interface ITask ITask;
typedef interface IEnumWorkItems IEnumWorkItems;
typedef interface ITaskScheduler ITaskScheduler;
typedef interface IProvideTaskPage IProvideTaskPage;
#include "oaidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _TASK_TRIGGER_TYPE
    {
        TASK_TIME_TRIGGER_ONCE = 0,
        TASK_TIME_TRIGGER_DAILY = 1,
        TASK_TIME_TRIGGER_WEEKLY = 2,
        TASK_TIME_TRIGGER_MONTHLYDATE = 3,
        TASK_TIME_TRIGGER_MONTHLYDOW = 4,
        TASK_EVENT_TRIGGER_ON_IDLE = 5,
        TASK_EVENT_TRIGGER_AT_SYSTEMSTART = 6,
        TASK_EVENT_TRIGGER_AT_LOGON = 7
    } TASK_TRIGGER_TYPE;
typedef enum _TASK_TRIGGER_TYPE *PTASK_TRIGGER_TYPE;
typedef struct _DAILY
    {
    WORD DaysInterval;
    } DAILY;
typedef struct _WEEKLY
    {
    WORD WeeksInterval;
    WORD rgfDaysOfTheWeek;
    } WEEKLY;
typedef struct _MONTHLYDATE
    {
    DWORD rgfDays;
    WORD rgfMonths;
    } MONTHLYDATE;
typedef struct _MONTHLYDOW
    {
    WORD wWhichWeek;
    WORD rgfDaysOfTheWeek;
    WORD rgfMonths;
    } MONTHLYDOW;
typedef union _TRIGGER_TYPE_UNION
    {
    DAILY Daily;
    WEEKLY Weekly;
    MONTHLYDATE MonthlyDate;
    MONTHLYDOW MonthlyDOW;
    } TRIGGER_TYPE_UNION;
typedef struct _TASK_TRIGGER
    {
    WORD cbTriggerSize;
    WORD Reserved1;
    WORD wBeginYear;
    WORD wBeginMonth;
    WORD wBeginDay;
    WORD wEndYear;
    WORD wEndMonth;
    WORD wEndDay;
    WORD wStartHour;
    WORD wStartMinute;
    DWORD MinutesDuration;
    DWORD MinutesInterval;
    DWORD rgFlags;
    TASK_TRIGGER_TYPE TriggerType;
    TRIGGER_TYPE_UNION Type;
    WORD Reserved2;
    WORD wRandomMinutesInterval;
    } TASK_TRIGGER;
typedef struct _TASK_TRIGGER *PTASK_TRIGGER;
DEFINE_GUID(IID_ITaskTrigger, 0x148BD52BL, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITaskTrigger;
    typedef struct ITaskTriggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskTrigger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskTrigger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskTrigger * This);
        HRESULT ( STDMETHODCALLTYPE *SetTrigger )(
            ITaskTrigger * This,
                       const PTASK_TRIGGER pTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTrigger )(
            ITaskTrigger * This,
                        PTASK_TRIGGER pTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTriggerString )(
            ITaskTrigger * This,
            _Outptr_ LPWSTR *ppwszTrigger);
        END_INTERFACE
    } ITaskTriggerVtbl;
    interface ITaskTrigger
    {
        CONST_VTBL struct ITaskTriggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTrigger(This,pTrigger) )
    ( (This)->lpVtbl -> GetTrigger(This,pTrigger) )
    ( (This)->lpVtbl -> GetTriggerString(This,ppwszTrigger) )
DEFINE_GUID(IID_IScheduledWorkItem, 0xa6b952f0L, 0xa4b1, 0x11d0, 0x99, 0x7d, 0x00, 0xaa, 0x00, 0x68, 0x87, 0xec);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IScheduledWorkItem;
    typedef struct IScheduledWorkItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IScheduledWorkItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IScheduledWorkItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IScheduledWorkItem * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTrigger )(
            IScheduledWorkItem * This,
                        WORD *piNewTrigger,
                        ITaskTrigger **ppTrigger);
        HRESULT ( STDMETHODCALLTYPE *DeleteTrigger )(
            IScheduledWorkItem * This,
                       WORD iTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTriggerCount )(
            IScheduledWorkItem * This,
                        WORD *pwCount);
        HRESULT ( STDMETHODCALLTYPE *GetTrigger )(
            IScheduledWorkItem * This,
                       WORD iTrigger,
                        ITaskTrigger **ppTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTriggerString )(
            IScheduledWorkItem * This,
                       WORD iTrigger,
            _Outptr_ LPWSTR *ppwszTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetRunTimes )(
            IScheduledWorkItem * This,
                       const LPSYSTEMTIME pstBegin,
                       const LPSYSTEMTIME pstEnd,
                            WORD *pCount,
                        LPSYSTEMTIME *rgstTaskTimes);
        HRESULT ( STDMETHODCALLTYPE *GetNextRunTime )(
            IScheduledWorkItem * This,
                            SYSTEMTIME *pstNextRun);
        HRESULT ( STDMETHODCALLTYPE *SetIdleWait )(
            IScheduledWorkItem * This,
                       WORD wIdleMinutes,
                       WORD wDeadlineMinutes);
        HRESULT ( STDMETHODCALLTYPE *GetIdleWait )(
            IScheduledWorkItem * This,
                        WORD *pwIdleMinutes,
                        WORD *pwDeadlineMinutes);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IScheduledWorkItem * This);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            IScheduledWorkItem * This);
        HRESULT ( STDMETHODCALLTYPE *EditWorkItem )(
            IScheduledWorkItem * This,
                       HWND hParent,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetMostRecentRunTime )(
            IScheduledWorkItem * This,
                        SYSTEMTIME *pstLastRun);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IScheduledWorkItem * This,
                        HRESULT *phrStatus);
        HRESULT ( STDMETHODCALLTYPE *GetExitCode )(
            IScheduledWorkItem * This,
                        DWORD *pdwExitCode);
        HRESULT ( STDMETHODCALLTYPE *SetComment )(
            IScheduledWorkItem * This,
                       LPCWSTR pwszComment);
        HRESULT ( STDMETHODCALLTYPE *GetComment )(
            IScheduledWorkItem * This,
            _Outptr_ LPWSTR *ppwszComment);
        HRESULT ( STDMETHODCALLTYPE *SetCreator )(
            IScheduledWorkItem * This,
                       LPCWSTR pwszCreator);
        HRESULT ( STDMETHODCALLTYPE *GetCreator )(
            IScheduledWorkItem * This,
            _Outptr_ LPWSTR *ppwszCreator);
        HRESULT ( STDMETHODCALLTYPE *SetWorkItemData )(
            IScheduledWorkItem * This,
                       WORD cbData,
                       BYTE rgbData[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetWorkItemData )(
            IScheduledWorkItem * This,
                        WORD *pcbData,
                        BYTE **prgbData);
        HRESULT ( STDMETHODCALLTYPE *SetErrorRetryCount )(
            IScheduledWorkItem * This,
                       WORD wRetryCount);
        HRESULT ( STDMETHODCALLTYPE *GetErrorRetryCount )(
            IScheduledWorkItem * This,
                        WORD *pwRetryCount);
        HRESULT ( STDMETHODCALLTYPE *SetErrorRetryInterval )(
            IScheduledWorkItem * This,
                       WORD wRetryInterval);
        HRESULT ( STDMETHODCALLTYPE *GetErrorRetryInterval )(
            IScheduledWorkItem * This,
                        WORD *pwRetryInterval);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IScheduledWorkItem * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IScheduledWorkItem * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetAccountInformation )(
            IScheduledWorkItem * This,
                       LPCWSTR pwszAccountName,
                       LPCWSTR pwszPassword);
        HRESULT ( STDMETHODCALLTYPE *GetAccountInformation )(
            IScheduledWorkItem * This,
            _Outptr_ LPWSTR *ppwszAccountName);
        END_INTERFACE
    } IScheduledWorkItemVtbl;
    interface IScheduledWorkItem
    {
        CONST_VTBL struct IScheduledWorkItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTrigger(This,piNewTrigger,ppTrigger) )
    ( (This)->lpVtbl -> DeleteTrigger(This,iTrigger) )
    ( (This)->lpVtbl -> GetTriggerCount(This,pwCount) )
    ( (This)->lpVtbl -> GetTrigger(This,iTrigger,ppTrigger) )
    ( (This)->lpVtbl -> GetTriggerString(This,iTrigger,ppwszTrigger) )
    ( (This)->lpVtbl -> GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes) )
    ( (This)->lpVtbl -> GetNextRunTime(This,pstNextRun) )
    ( (This)->lpVtbl -> SetIdleWait(This,wIdleMinutes,wDeadlineMinutes) )
    ( (This)->lpVtbl -> GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Terminate(This) )
    ( (This)->lpVtbl -> EditWorkItem(This,hParent,dwReserved) )
    ( (This)->lpVtbl -> GetMostRecentRunTime(This,pstLastRun) )
    ( (This)->lpVtbl -> GetStatus(This,phrStatus) )
    ( (This)->lpVtbl -> GetExitCode(This,pdwExitCode) )
    ( (This)->lpVtbl -> SetComment(This,pwszComment) )
    ( (This)->lpVtbl -> GetComment(This,ppwszComment) )
    ( (This)->lpVtbl -> SetCreator(This,pwszCreator) )
    ( (This)->lpVtbl -> GetCreator(This,ppwszCreator) )
    ( (This)->lpVtbl -> SetWorkItemData(This,cbData,rgbData) )
    ( (This)->lpVtbl -> GetWorkItemData(This,pcbData,prgbData) )
    ( (This)->lpVtbl -> SetErrorRetryCount(This,wRetryCount) )
    ( (This)->lpVtbl -> GetErrorRetryCount(This,pwRetryCount) )
    ( (This)->lpVtbl -> SetErrorRetryInterval(This,wRetryInterval) )
    ( (This)->lpVtbl -> GetErrorRetryInterval(This,pwRetryInterval) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> SetAccountInformation(This,pwszAccountName,pwszPassword) )
    ( (This)->lpVtbl -> GetAccountInformation(This,ppwszAccountName) )
DEFINE_GUID(IID_ITask, 0x148BD524L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ITask;
    typedef struct ITaskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITask * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITask * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITask * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTrigger )(
            ITask * This,
                        WORD *piNewTrigger,
                        ITaskTrigger **ppTrigger);
        HRESULT ( STDMETHODCALLTYPE *DeleteTrigger )(
            ITask * This,
                       WORD iTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTriggerCount )(
            ITask * This,
                        WORD *pwCount);
        HRESULT ( STDMETHODCALLTYPE *GetTrigger )(
            ITask * This,
                       WORD iTrigger,
                        ITaskTrigger **ppTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetTriggerString )(
            ITask * This,
                       WORD iTrigger,
            _Outptr_ LPWSTR *ppwszTrigger);
        HRESULT ( STDMETHODCALLTYPE *GetRunTimes )(
            ITask * This,
                       const LPSYSTEMTIME pstBegin,
                       const LPSYSTEMTIME pstEnd,
                            WORD *pCount,
                        LPSYSTEMTIME *rgstTaskTimes);
        HRESULT ( STDMETHODCALLTYPE *GetNextRunTime )(
            ITask * This,
                            SYSTEMTIME *pstNextRun);
        HRESULT ( STDMETHODCALLTYPE *SetIdleWait )(
            ITask * This,
                       WORD wIdleMinutes,
                       WORD wDeadlineMinutes);
        HRESULT ( STDMETHODCALLTYPE *GetIdleWait )(
            ITask * This,
                        WORD *pwIdleMinutes,
                        WORD *pwDeadlineMinutes);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            ITask * This);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            ITask * This);
        HRESULT ( STDMETHODCALLTYPE *EditWorkItem )(
            ITask * This,
                       HWND hParent,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetMostRecentRunTime )(
            ITask * This,
                        SYSTEMTIME *pstLastRun);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ITask * This,
                        HRESULT *phrStatus);
        HRESULT ( STDMETHODCALLTYPE *GetExitCode )(
            ITask * This,
                        DWORD *pdwExitCode);
        HRESULT ( STDMETHODCALLTYPE *SetComment )(
            ITask * This,
                       LPCWSTR pwszComment);
        HRESULT ( STDMETHODCALLTYPE *GetComment )(
            ITask * This,
            _Outptr_ LPWSTR *ppwszComment);
        HRESULT ( STDMETHODCALLTYPE *SetCreator )(
            ITask * This,
                       LPCWSTR pwszCreator);
        HRESULT ( STDMETHODCALLTYPE *GetCreator )(
            ITask * This,
            _Outptr_ LPWSTR *ppwszCreator);
        HRESULT ( STDMETHODCALLTYPE *SetWorkItemData )(
            ITask * This,
                       WORD cbData,
                       BYTE rgbData[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetWorkItemData )(
            ITask * This,
                        WORD *pcbData,
                        BYTE **prgbData);
        HRESULT ( STDMETHODCALLTYPE *SetErrorRetryCount )(
            ITask * This,
                       WORD wRetryCount);
        HRESULT ( STDMETHODCALLTYPE *GetErrorRetryCount )(
            ITask * This,
                        WORD *pwRetryCount);
        HRESULT ( STDMETHODCALLTYPE *SetErrorRetryInterval )(
            ITask * This,
                       WORD wRetryInterval);
        HRESULT ( STDMETHODCALLTYPE *GetErrorRetryInterval )(
            ITask * This,
                        WORD *pwRetryInterval);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            ITask * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            ITask * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetAccountInformation )(
            ITask * This,
                       LPCWSTR pwszAccountName,
                       LPCWSTR pwszPassword);
        HRESULT ( STDMETHODCALLTYPE *GetAccountInformation )(
            ITask * This,
            _Outptr_ LPWSTR *ppwszAccountName);
        HRESULT ( STDMETHODCALLTYPE *SetApplicationName )(
            ITask * This,
                       LPCWSTR pwszApplicationName);
        HRESULT ( STDMETHODCALLTYPE *GetApplicationName )(
            ITask * This,
                        LPWSTR *ppwszApplicationName);
        HRESULT ( STDMETHODCALLTYPE *SetParameters )(
            ITask * This,
                       LPCWSTR pwszParameters);
        HRESULT ( STDMETHODCALLTYPE *GetParameters )(
            ITask * This,
                        LPWSTR *ppwszParameters);
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )(
            ITask * This,
                       LPCWSTR pwszWorkingDirectory);
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )(
            ITask * This,
                        LPWSTR *ppwszWorkingDirectory);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            ITask * This,
                       DWORD dwPriority);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            ITask * This,
                        DWORD *pdwPriority);
        HRESULT ( STDMETHODCALLTYPE *SetTaskFlags )(
            ITask * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetTaskFlags )(
            ITask * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetMaxRunTime )(
            ITask * This,
                       DWORD dwMaxRunTimeMS);
        HRESULT ( STDMETHODCALLTYPE *GetMaxRunTime )(
            ITask * This,
                        DWORD *pdwMaxRunTimeMS);
        END_INTERFACE
    } ITaskVtbl;
    interface ITask
    {
        CONST_VTBL struct ITaskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTrigger(This,piNewTrigger,ppTrigger) )
    ( (This)->lpVtbl -> DeleteTrigger(This,iTrigger) )
    ( (This)->lpVtbl -> GetTriggerCount(This,pwCount) )
    ( (This)->lpVtbl -> GetTrigger(This,iTrigger,ppTrigger) )
    ( (This)->lpVtbl -> GetTriggerString(This,iTrigger,ppwszTrigger) )
    ( (This)->lpVtbl -> GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes) )
    ( (This)->lpVtbl -> GetNextRunTime(This,pstNextRun) )
    ( (This)->lpVtbl -> SetIdleWait(This,wIdleMinutes,wDeadlineMinutes) )
    ( (This)->lpVtbl -> GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Terminate(This) )
    ( (This)->lpVtbl -> EditWorkItem(This,hParent,dwReserved) )
    ( (This)->lpVtbl -> GetMostRecentRunTime(This,pstLastRun) )
    ( (This)->lpVtbl -> GetStatus(This,phrStatus) )
    ( (This)->lpVtbl -> GetExitCode(This,pdwExitCode) )
    ( (This)->lpVtbl -> SetComment(This,pwszComment) )
    ( (This)->lpVtbl -> GetComment(This,ppwszComment) )
    ( (This)->lpVtbl -> SetCreator(This,pwszCreator) )
    ( (This)->lpVtbl -> GetCreator(This,ppwszCreator) )
    ( (This)->lpVtbl -> SetWorkItemData(This,cbData,rgbData) )
    ( (This)->lpVtbl -> GetWorkItemData(This,pcbData,prgbData) )
    ( (This)->lpVtbl -> SetErrorRetryCount(This,wRetryCount) )
    ( (This)->lpVtbl -> GetErrorRetryCount(This,pwRetryCount) )
    ( (This)->lpVtbl -> SetErrorRetryInterval(This,wRetryInterval) )
    ( (This)->lpVtbl -> GetErrorRetryInterval(This,pwRetryInterval) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> SetAccountInformation(This,pwszAccountName,pwszPassword) )
    ( (This)->lpVtbl -> GetAccountInformation(This,ppwszAccountName) )
    ( (This)->lpVtbl -> SetApplicationName(This,pwszApplicationName) )
    ( (This)->lpVtbl -> GetApplicationName(This,ppwszApplicationName) )
    ( (This)->lpVtbl -> SetParameters(This,pwszParameters) )
    ( (This)->lpVtbl -> GetParameters(This,ppwszParameters) )
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pwszWorkingDirectory) )
    ( (This)->lpVtbl -> GetWorkingDirectory(This,ppwszWorkingDirectory) )
    ( (This)->lpVtbl -> SetPriority(This,dwPriority) )
    ( (This)->lpVtbl -> GetPriority(This,pdwPriority) )
    ( (This)->lpVtbl -> SetTaskFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetTaskFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> SetMaxRunTime(This,dwMaxRunTimeMS) )
    ( (This)->lpVtbl -> GetMaxRunTime(This,pdwMaxRunTimeMS) )
DEFINE_GUID(IID_IEnumWorkItems, 0x148BD528L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumWorkItems;
    typedef struct IEnumWorkItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumWorkItems * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumWorkItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumWorkItems * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumWorkItems * This,
                       ULONG celt,
                        LPWSTR **rgpwszNames,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumWorkItems * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumWorkItems * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumWorkItems * This,
                        IEnumWorkItems **ppEnumWorkItems);
        END_INTERFACE
    } IEnumWorkItemsVtbl;
    interface IEnumWorkItems
    {
        CONST_VTBL struct IEnumWorkItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgpwszNames,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnumWorkItems) )
DEFINE_GUID(IID_ITaskScheduler, 0x148BD527L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ITaskScheduler;
    typedef struct ITaskSchedulerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITaskScheduler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITaskScheduler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITaskScheduler * This);
        HRESULT ( STDMETHODCALLTYPE *SetTargetComputer )(
            ITaskScheduler * This,
                       LPCWSTR pwszComputer);
        HRESULT ( STDMETHODCALLTYPE *GetTargetComputer )(
            ITaskScheduler * This,
                        LPWSTR *ppwszComputer);
        HRESULT ( STDMETHODCALLTYPE *Enum )(
            ITaskScheduler * This,
                        IEnumWorkItems **ppEnumWorkItems);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            ITaskScheduler * This,
                       LPCWSTR pwszName,
                       REFIID riid,
                        IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            ITaskScheduler * This,
                       LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *NewWorkItem )(
            ITaskScheduler * This,
                       LPCWSTR pwszTaskName,
                       REFCLSID rclsid,
                       REFIID riid,
                        IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *AddWorkItem )(
            ITaskScheduler * This,
                       LPCWSTR pwszTaskName,
                       IScheduledWorkItem *pWorkItem);
        HRESULT ( STDMETHODCALLTYPE *IsOfType )(
            ITaskScheduler * This,
                       LPCWSTR pwszName,
                       REFIID riid);
        END_INTERFACE
    } ITaskSchedulerVtbl;
    interface ITaskScheduler
    {
        CONST_VTBL struct ITaskSchedulerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTargetComputer(This,pwszComputer) )
    ( (This)->lpVtbl -> GetTargetComputer(This,ppwszComputer) )
    ( (This)->lpVtbl -> Enum(This,ppEnumWorkItems) )
    ( (This)->lpVtbl -> Activate(This,pwszName,riid,ppUnk) )
    ( (This)->lpVtbl -> Delete(This,pwszName) )
    ( (This)->lpVtbl -> NewWorkItem(This,pwszTaskName,rclsid,riid,ppUnk) )
    ( (This)->lpVtbl -> AddWorkItem(This,pwszTaskName,pWorkItem) )
    ( (This)->lpVtbl -> IsOfType(This,pwszName,riid) )
EXTERN_C const CLSID CLSID_CTask;
EXTERN_C const CLSID CLSID_CTaskScheduler;
DEFINE_GUID(CLSID_CTask, 0x148BD520, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
DEFINE_GUID(CLSID_CTaskScheduler, 0x148BD52A, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
typedef struct _PSP *HPROPSHEETPAGE;
typedef
enum _TASKPAGE
    {
        TASKPAGE_TASK = 0,
        TASKPAGE_SCHEDULE = 1,
        TASKPAGE_SETTINGS = 2
    } TASKPAGE;
DEFINE_GUID(IID_IProvideTaskPage, 0x4086658aL, 0xcbbb, 0x11cf, 0xb6, 0x04, 0x00, 0xc0, 0x4f, 0xd8, 0xd5, 0x65);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IProvideTaskPage;
    typedef struct IProvideTaskPageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IProvideTaskPage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IProvideTaskPage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IProvideTaskPage * This);
        HRESULT ( STDMETHODCALLTYPE *GetPage )(
            IProvideTaskPage * This,
                       TASKPAGE tpType,
                       BOOL fPersistChanges,
                        HPROPSHEETPAGE *phPage);
        END_INTERFACE
    } IProvideTaskPageVtbl;
    interface IProvideTaskPage
    {
        CONST_VTBL struct IProvideTaskPageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPage(This,tpType,fPersistChanges,phPage) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0006_v0_0_s_ifspec;
}

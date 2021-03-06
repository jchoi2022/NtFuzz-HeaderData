#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef void (__stdcall *RTWQPERIODICCALLBACK)(IUnknown* context);
typedef unsigned __int64 RTWQWORKITEM_KEY;
typedef enum
{
    RTWQ_STANDARD_WORKQUEUE = 0,
    RTWQ_WINDOW_WORKQUEUE = 1,
    RTWQ_MULTITHREADED_WORKQUEUE = 2,
} RTWQ_WORKQUEUE_TYPE;
interface DECLSPEC_UUID("ac6b7889-0740-4d51-8619-905994a55cc6") DECLSPEC_NOVTABLE
    IRtwqAsyncResult : public IUnknown
{
    STDMETHOD(GetState)( _Out_ IUnknown** ppunkState);
    STDMETHOD(GetStatus)();
    STDMETHOD(SetStatus)( HRESULT hrStatus);
    STDMETHOD(GetObject)( _Out_ IUnknown ** ppObject);
    STDMETHOD_(IUnknown *, GetStateNoAddRef)();
};
interface DECLSPEC_UUID("a27003cf-2354-4f2a-8d6a-ab7cff15437e") DECLSPEC_NOVTABLE
    IRtwqAsyncCallback : public IUnknown
{
    STDMETHOD(GetParameters)( _Out_ DWORD* pdwFlags, _Out_ DWORD* pdwQueue );
    STDMETHOD(Invoke)( _In_ IRtwqAsyncResult* pAsyncResult );
};
typedef struct tagRTWQASYNCRESULT : public IRtwqAsyncResult
{
    OVERLAPPED overlapped;
    IRtwqAsyncCallback * pCallback;
    HRESULT hrStatusResult;
    DWORD dwBytesTransferred;
    HANDLE hEvent;
} RTWQASYNCRESULT;
STDAPI RtwqStartup();
STDAPI RtwqShutdown();
STDAPI RtwqLockWorkQueue(_In_ DWORD workQueueId);
STDAPI RtwqUnlockWorkQueue(_In_ DWORD workQueueId);
STDAPI RtwqLockSharedWorkQueue(_In_ PCWSTR usageClass, _In_ LONG basePriority, _Inout_ DWORD* taskId, _Out_ DWORD* id);
STDAPI RtwqJoinWorkQueue(DWORD workQueueId, HANDLE hFile, _Out_ HANDLE* out);
STDAPI RtwqUnjoinWorkQueue(DWORD workQueueId, HANDLE hFile);
STDAPI RtwqCreateAsyncResult(_In_ IUnknown* appObject, _In_ IRtwqAsyncCallback* callback, _In_ IUnknown* appState, _Out_ IRtwqAsyncResult** asyncResult);
STDAPI RtwqInvokeCallback(IRtwqAsyncResult* result);
STDAPI RtwqLockPlatform();
STDAPI RtwqUnlockPlatform();
STDAPI RtwqRegisterPlatformWithMMCSS(_In_ PCWSTR usageClass, _Inout_ DWORD* taskId, _In_ LONG lPriority);
STDAPI RtwqUnregisterPlatformFromMMCSS();
STDAPI RtwqPutWorkItem(DWORD dwQueue, LONG lPriority, _In_ IRtwqAsyncResult* result);
STDAPI RtwqPutWaitingWorkItem(HANDLE hEvent, LONG lPriority, _In_ IRtwqAsyncResult* result, _Out_opt_ RTWQWORKITEM_KEY* key);
STDAPI RtwqAllocateSerialWorkQueue(_In_ DWORD workQueueIdIn, _Out_ DWORD* workQueueIdOut);
STDAPI RtwqScheduleWorkItem(IRtwqAsyncResult* result, INT64 Timeout, _Out_opt_ RTWQWORKITEM_KEY* key);
STDAPI RtwqAddPeriodicCallback(RTWQPERIODICCALLBACK Callback, IUnknown* context, _Out_opt_ DWORD* key);
STDAPI RtwqRemovePeriodicCallback(DWORD dwKey);
STDAPI RtwqCancelWorkItem(RTWQWORKITEM_KEY Key);
STDAPI RtwqAllocateWorkQueue(_In_ RTWQ_WORKQUEUE_TYPE WorkQueueType, _Out_ DWORD* workQueueId);
STDAPI RtwqBeginRegisterWorkQueueWithMMCSS(DWORD workQueueId, _In_ PCWSTR usageClass, DWORD dwTaskId, LONG lPriority, _In_ IRtwqAsyncCallback* doneCallback, _In_ IUnknown* doneState);
STDAPI RtwqBeginUnregisterWorkQueueWithMMCSS(DWORD workQueueId, _In_ IRtwqAsyncCallback* doneCallback, _In_ IUnknown* doneState);
STDAPI RtwqEndRegisterWorkQueueWithMMCSS(_In_ IRtwqAsyncResult* result, _Out_ DWORD* taskId);
STDAPI RtwqGetWorkQueueMMCSSClass(DWORD workQueueId, _Out_writes_to_opt_(*usageClassLength,*usageClassLength) PWSTR usageClass, _Inout_ DWORD* usageClassLength);
STDAPI RtwqGetWorkQueueMMCSSTaskId(DWORD workQueueId, _Out_ DWORD* taskId);
STDAPI RtwqGetWorkQueueMMCSSPriority(DWORD workQueueId, _Out_ LONG* priority);
interface DECLSPEC_UUID("63d9255a-7ff1-4b61-8faf-ed6460dacf2b") DECLSPEC_NOVTABLE
    IRtwqPlatformEvents : public IUnknown
{
    STDMETHOD(InitializationComplete)()=0;
    STDMETHOD(ShutdownStart)()=0;
    STDMETHOD(ShutdownComplete)()=0;
};
STDAPI RtwqRegisterPlatformEvents(_In_ IRtwqPlatformEvents* platformEvents);
STDAPI RtwqUnregisterPlatformEvents(_In_ IRtwqPlatformEvents* platformEvents);
STDAPI RtwqSetLongRunning(DWORD workQueueId, BOOL enable);
STDAPI RtwqSetDeadline(DWORD workQueueId, LONGLONG deadlineInHNS, _Out_ HANDLE* pRequest);
STDAPI RtwqSetDeadline2(DWORD workQueueId, LONGLONG deadlineInHNS, LONGLONG preDeadlineInHNS, _Out_ HANDLE* pRequest);
STDAPI RtwqCancelDeadline(_In_ HANDLE pRequest);
#endif
#pragma endregion

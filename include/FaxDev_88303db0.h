#include <commctrl.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _FAX_SEND {
    DWORD SizeOfStruct;
    LPWSTR FileName;
    LPWSTR CallerName;
    LPWSTR CallerNumber;
    LPWSTR ReceiverName;
    LPWSTR ReceiverNumber;
    BOOL Branding;
    HCALL CallHandle;
    DWORD Reserved[3];
} FAX_SEND, *PFAX_SEND;
typedef struct _FAX_RECEIVE {
    DWORD SizeOfStruct;
    LPWSTR FileName;
    LPWSTR ReceiverName;
    LPWSTR ReceiverNumber;
    DWORD Reserved[4];
} FAX_RECEIVE, *PFAX_RECEIVE;
typedef _Struct_size_bytes_(SizeOfStruct) struct _FAX_DEV_STATUS {
    DWORD SizeOfStruct;
    DWORD StatusId;
    DWORD StringId;
    DWORD PageCount;
    LPWSTR CSI;
    LPWSTR CallerId;
    LPWSTR RoutingInfo;
    DWORD ErrorCode;
    DWORD Reserved[3];
} FAX_DEV_STATUS, *PFAX_DEV_STATUS;
typedef BOOL
(CALLBACK *PFAX_SERVICE_CALLBACK)(
    IN HANDLE FaxHandle,
    IN DWORD DeviceId,
    IN DWORD_PTR Param1,
    IN DWORD_PTR Param2,
    IN DWORD_PTR Param3
    );
typedef void
(CALLBACK *PFAX_LINECALLBACK)(
    IN HANDLE FaxHandle,
    IN DWORD hDevice,
    IN DWORD dwMessage,
    IN DWORD_PTR dwInstance,
    IN DWORD_PTR dwParam1,
    IN DWORD_PTR dwParam2,
    IN DWORD_PTR dwParam3
    );
BOOL WINAPI
FaxDevInitialize(
    IN HLINEAPP LineAppHandle,
    IN HANDLE HeapHandle,
    OUT PFAX_LINECALLBACK *LineCallbackFunction,
    IN PFAX_SERVICE_CALLBACK FaxServiceCallback
    );
HRESULT WINAPI FaxDevShutdown(
    void
);
BOOL WINAPI
FaxDevVirtualDeviceCreation(
    OUT LPDWORD DeviceCount,
    _Out_writes_(128) LPWSTR DeviceNamePrefix,
    OUT LPDWORD DeviceIdPrefix,
    IN HANDLE CompletionPort,
    IN ULONG_PTR CompletionKey
    );
BOOL WINAPI
FaxDevStartJob(
    IN HLINE LineHandle,
    IN DWORD DeviceId,
    OUT PHANDLE FaxHandle,
    IN HANDLE CompletionPortHandle,
    IN ULONG_PTR CompletionKey
    );
BOOL WINAPI
FaxDevEndJob(
    IN HANDLE FaxHandle
    );
typedef BOOL
(CALLBACK *PFAX_SEND_CALLBACK)(
    IN HANDLE FaxHandle,
    IN HCALL CallHandle,
    IN DWORD Reserved1,
    IN DWORD Reserved2
    );
BOOL WINAPI
FaxDevSend(
    IN HANDLE FaxHandle,
    IN PFAX_SEND FaxSend,
    IN PFAX_SEND_CALLBACK FaxSendCallback
    );
BOOL WINAPI
FaxDevReceive(
    IN HANDLE FaxHandle,
    IN HCALL CallHandle,
    IN OUT PFAX_RECEIVE FaxReceive
    );
BOOL WINAPI
FaxDevReportStatus(
    IN HANDLE FaxHandle OPTIONAL,
    OUT PFAX_DEV_STATUS FaxStatus,
    IN DWORD FaxStatusSize,
    OUT LPDWORD FaxStatusSizeRequired
    );
BOOL WINAPI
FaxDevAbortOperation(
    IN HANDLE FaxHandle
    );
BOOL WINAPI
FaxDevConfigure(
    OUT HPROPSHEETPAGE *PropSheetPage
    );
typedef BOOL (WINAPI *PFAXDEVINITIALIZE) (HLINEAPP,HANDLE,PFAX_LINECALLBACK*,PFAX_SERVICE_CALLBACK);
typedef BOOL (WINAPI *PFAXDEVVIRTUALDEVICECREATION) (LPDWORD DeviceCount,
                                                                                                            _Out_writes_(128) LPWSTR DeviceNamePrefix,
                                                                                                            LPDWORD DeviceIdPrefix,
                                                                                                            HANDLE CompletionPort,
                                                                                                            ULONG_PTR CompletionKey);
typedef BOOL (WINAPI *PFAXDEVSTARTJOB) (HLINE,DWORD,PHANDLE,HANDLE,ULONG_PTR);
typedef BOOL (WINAPI *PFAXDEVENDJOB) (HANDLE);
typedef BOOL (WINAPI *PFAXDEVSEND) (HANDLE,PFAX_SEND,PFAX_SEND_CALLBACK);
typedef BOOL (WINAPI *PFAXDEVRECEIVE) (HANDLE,HCALL,PFAX_RECEIVE);
typedef BOOL (WINAPI *PFAXDEVREPORTSTATUS) (HANDLE,PFAX_DEV_STATUS,DWORD,LPDWORD);
typedef BOOL (WINAPI *PFAXDEVABORTOPERATION) (HANDLE);
typedef BOOL (WINAPI *PFAXDEVCONFIGURE) (HPROPSHEETPAGE*);
typedef HRESULT (WINAPI * PFAXDEVSHUTDOWN) (void);
}
#endif
#pragma endregion

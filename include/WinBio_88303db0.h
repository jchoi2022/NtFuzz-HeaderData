#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "winbio_types.h"
#include "winbio_err.h"
extern "C"{
typedef enum _WINBIO_ASYNC_NOTIFICATION_METHOD
{
    WINBIO_ASYNC_NOTIFY_NONE = 0,
    WINBIO_ASYNC_NOTIFY_CALLBACK,
    WINBIO_ASYNC_NOTIFY_MESSAGE,
    WINBIO_ASYNC_NOTIFY_MAXIMUM_VALUE
} WINBIO_ASYNC_NOTIFICATION_METHOD, *PWINBIO_ASYNC_NOTIFICATION_METHOD;
typedef struct _WINBIO_ASYNC_RESULT {
    WINBIO_SESSION_HANDLE SessionHandle;
    WINBIO_OPERATION_TYPE Operation;
    ULONGLONG SequenceNumber;
    LONGLONG TimeStamp;
    HRESULT ApiStatus;
    WINBIO_UNIT_ID UnitId;
    PVOID UserData;
    union {
        struct {
            BOOLEAN Match;
            WINBIO_REJECT_DETAIL RejectDetail;
        } Verify;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            WINBIO_REJECT_DETAIL RejectDetail;
        }Identify;
        struct {
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
        } EnrollBegin;
        struct {
            WINBIO_REJECT_DETAIL RejectDetail;
        } EnrollCapture;
        struct {
            WINBIO_IDENTITY Identity;
            BOOLEAN IsNewTemplate;
        } EnrollCommit;
        struct {
            WINBIO_IDENTITY Identity;
            SIZE_T SubFactorCount;
            WINBIO_BIOMETRIC_SUBTYPE *SubFactorArray;
        } EnumEnrollments;
        struct {
            PWINBIO_BIR Sample;
            SIZE_T SampleSize;
            WINBIO_REJECT_DETAIL RejectDetail;
        } CaptureSample;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
        } DeleteTemplate;
        struct {
            WINBIO_PROPERTY_TYPE PropertyType;
            WINBIO_PROPERTY_ID PropertyId;
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            SIZE_T PropertyBufferSize;
            PVOID PropertyBuffer;
        } GetProperty;
        struct {
            WINBIO_PROPERTY_TYPE PropertyType;
            WINBIO_PROPERTY_ID PropertyId;
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            SIZE_T PropertyBufferSize;
            PVOID PropertyBuffer;
        } SetProperty;
        struct {
            WINBIO_EVENT Event;
        } GetEvent;
        struct {
            WINBIO_COMPONENT Component;
            ULONG ControlCode;
            ULONG OperationStatus;
            PUCHAR SendBuffer;
            SIZE_T SendBufferSize;
            PUCHAR ReceiveBuffer;
            SIZE_T ReceiveBufferSize;
            SIZE_T ReceiveDataSize;
        } ControlUnit;
        struct {
            SIZE_T BspCount;
            WINBIO_BSP_SCHEMA *BspSchemaArray;
        } EnumServiceProviders;
        struct {
            SIZE_T UnitCount;
            WINBIO_UNIT_SCHEMA *UnitSchemaArray;
        } EnumBiometricUnits;
        struct {
            SIZE_T StorageCount;
            WINBIO_STORAGE_SCHEMA *StorageSchemaArray;
        } EnumDatabases;
        struct {
            BOOLEAN Match;
            WINBIO_REJECT_DETAIL RejectDetail;
            WINBIO_PROTECTION_TICKET Ticket;
        } VerifyAndReleaseTicket;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            WINBIO_REJECT_DETAIL RejectDetail;
            WINBIO_PROTECTION_TICKET Ticket;
        } IdentifyAndReleaseTicket;
        struct {
            ULONGLONG SelectorValue;
        } EnrollSelect;
        struct {
            WINBIO_PRESENCE_CHANGE ChangeType;
            SIZE_T PresenceCount;
            WINBIO_PRESENCE *PresenceArray;
        } MonitorPresence;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_PROTECTION_POLICY Policy;
        } GetProtectionPolicy;
        struct {
            WINBIO_EXTENDED_UNIT_STATUS ExtendedStatus;
        } NotifyUnitStatusChange;
    } Parameters;
} WINBIO_ASYNC_RESULT, *PWINBIO_ASYNC_RESULT;
typedef
VOID
(CALLBACK *PWINBIO_ASYNC_COMPLETION_CALLBACK)(
    _In_ PWINBIO_ASYNC_RESULT AsyncResult
    );
HRESULT WINAPI
WinBioEnumServiceProviders(
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _Outptr_result_buffer_(*BspCount) WINBIO_BSP_SCHEMA **BspSchemaArray,
    _Out_ SIZE_T *BspCount
    );
HRESULT WINAPI
WinBioEnumBiometricUnits(
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _Outptr_result_buffer_(*UnitCount) WINBIO_UNIT_SCHEMA **UnitSchemaArray,
    _Out_ SIZE_T *UnitCount
    );
HRESULT WINAPI
WinBioEnumDatabases(
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _Outptr_result_buffer_(*StorageCount) WINBIO_STORAGE_SCHEMA **StorageSchemaArray,
    _Out_ SIZE_T *StorageCount
    );
HRESULT WINAPI
WinBioAsyncOpenFramework(
    _In_ WINBIO_ASYNC_NOTIFICATION_METHOD NotificationMethod,
    _In_opt_ HWND TargetWindow,
    _In_opt_ UINT MessageCode,
    _In_opt_ PWINBIO_ASYNC_COMPLETION_CALLBACK CallbackRoutine,
    _In_opt_ PVOID UserData,
    _In_ BOOL AsynchronousOpen,
    _Out_opt_ WINBIO_FRAMEWORK_HANDLE *FrameworkHandle
    );
HRESULT WINAPI
WinBioCloseFramework(
    _In_ WINBIO_FRAMEWORK_HANDLE FrameworkHandle
    );
HRESULT WINAPI
WinBioAsyncEnumServiceProviders(
    _In_ WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    _In_ WINBIO_BIOMETRIC_TYPE Factor
    );
HRESULT WINAPI
WinBioAsyncEnumBiometricUnits(
    _In_ WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    _In_ WINBIO_BIOMETRIC_TYPE Factor
    );
HRESULT WINAPI
WinBioAsyncEnumDatabases(
    _In_ WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    _In_ WINBIO_BIOMETRIC_TYPE Factor
    );
HRESULT WINAPI
WinBioAsyncMonitorFrameworkChanges(
    _In_ WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    _In_ WINBIO_FRAMEWORK_CHANGE_TYPE ChangeTypes
    );
HRESULT WINAPI
WinBioOpenSession(
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _In_ WINBIO_POOL_TYPE PoolType,
    _In_ WINBIO_SESSION_FLAGS Flags,
    _In_reads_opt_(UnitCount) WINBIO_UNIT_ID *UnitArray,
    _In_opt_ SIZE_T UnitCount,
    _In_opt_ GUID *DatabaseId,
    _Out_ WINBIO_SESSION_HANDLE *SessionHandle
    );
HRESULT WINAPI
WinBioAsyncOpenSession(
    _In_ WINBIO_BIOMETRIC_TYPE Factor,
    _In_ WINBIO_POOL_TYPE PoolType,
    _In_ WINBIO_SESSION_FLAGS Flags,
    _In_reads_opt_(UnitCount) WINBIO_UNIT_ID *UnitArray,
    _In_opt_ SIZE_T UnitCount,
    _In_opt_ GUID *DatabaseId,
    _In_ WINBIO_ASYNC_NOTIFICATION_METHOD NotificationMethod,
    _In_opt_ HWND TargetWindow,
    _In_opt_ UINT MessageCode,
    _In_opt_ PWINBIO_ASYNC_COMPLETION_CALLBACK CallbackRoutine,
    _In_opt_ PVOID UserData,
    _In_ BOOL AsynchronousOpen,
    _Out_opt_ WINBIO_SESSION_HANDLE *SessionHandle
    );
HRESULT WINAPI
WinBioCloseSession(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioVerify(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_IDENTITY *Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Out_opt_ WINBIO_UNIT_ID *UnitId,
    _Out_opt_ BOOLEAN *Match,
    _Out_opt_ WINBIO_REJECT_DETAIL *RejectDetail
    );
typedef
VOID
(CALLBACK *PWINBIO_VERIFY_CALLBACK)(
    _In_opt_ PVOID VerifyCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ BOOLEAN Match,
    _In_ WINBIO_REJECT_DETAIL RejectDetail
    );
HRESULT WINAPI
WinBioVerifyWithCallback(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_IDENTITY *Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_ PWINBIO_VERIFY_CALLBACK VerifyCallback,
    _In_opt_ PVOID VerifyCallbackContext
    );
HRESULT WINAPI
WinBioIdentify(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _Out_opt_ WINBIO_UNIT_ID *UnitId,
    _Out_opt_ WINBIO_IDENTITY *Identity,
    _Out_opt_ WINBIO_BIOMETRIC_SUBTYPE *SubFactor,
    _Out_opt_ WINBIO_REJECT_DETAIL *RejectDetail
    );
typedef
VOID
(CALLBACK *PWINBIO_IDENTIFY_CALLBACK)(
    _In_opt_ PVOID IdentifyCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ WINBIO_IDENTITY *Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_ WINBIO_REJECT_DETAIL RejectDetail
    );
HRESULT WINAPI
WinBioIdentifyWithCallback(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ PWINBIO_IDENTIFY_CALLBACK IdentifyCallback,
    _In_opt_ PVOID IdentifyCallbackContext
    );
HRESULT WINAPI
WinBioWait(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioCancel(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioLocateSensor(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _Out_opt_ WINBIO_UNIT_ID *UnitId
    );
typedef
VOID
(CALLBACK *PWINBIO_LOCATE_SENSOR_CALLBACK)(
    _In_opt_ PVOID LocateCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ WINBIO_UNIT_ID UnitId
    );
HRESULT WINAPI
WinBioLocateSensorWithCallback(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ PWINBIO_LOCATE_SENSOR_CALLBACK LocateCallback,
    _In_opt_ PVOID LocateCallbackContext
    );
HRESULT WINAPI
WinBioEnrollBegin(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_ WINBIO_UNIT_ID UnitId
    );
HRESULT WINAPI
WinBioEnrollSelect(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ ULONGLONG SelectorValue
    );
HRESULT WINAPI
WinBioEnrollCapture(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _Out_opt_ WINBIO_REJECT_DETAIL *RejectDetail
    );
typedef
VOID
(CALLBACK *PWINBIO_ENROLL_CAPTURE_CALLBACK)(
    _In_opt_ PVOID EnrollCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ WINBIO_REJECT_DETAIL RejectDetail
    );
HRESULT WINAPI
WinBioEnrollCaptureWithCallback(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ PWINBIO_ENROLL_CAPTURE_CALLBACK EnrollCallback,
    _In_opt_ PVOID EnrollCallbackContext
    );
HRESULT WINAPI
WinBioEnrollCommit(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _Out_opt_ WINBIO_IDENTITY *Identity,
    _Out_opt_ BOOLEAN *IsNewTemplate
    );
HRESULT WINAPI
WinBioEnrollDiscard(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioEnumEnrollments(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ WINBIO_IDENTITY *Identity,
    _Outptr_result_buffer_maybenull_(*SubFactorCount) WINBIO_BIOMETRIC_SUBTYPE **SubFactorArray,
    _Out_opt_ SIZE_T *SubFactorCount
    );
typedef
VOID
(CALLBACK *PWINBIO_EVENT_CALLBACK)(
    _In_opt_ PVOID EventCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ PWINBIO_EVENT Event
    );
HRESULT WINAPI
WinBioRegisterEventMonitor(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_EVENT_TYPE EventMask,
    _In_ PWINBIO_EVENT_CALLBACK EventCallback,
    _In_opt_ PVOID EventCallbackContext
    );
HRESULT WINAPI
WinBioUnregisterEventMonitor(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioMonitorPresence(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId
    );
HRESULT WINAPI
WinBioCaptureSample(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _Out_opt_ WINBIO_UNIT_ID *UnitId,
    _Outptr_result_bytebuffer_maybenull_(*SampleSize) PWINBIO_BIR *Sample,
    _Out_opt_ SIZE_T *SampleSize,
    _Out_opt_ WINBIO_REJECT_DETAIL *RejectDetail
    );
typedef
VOID
(CALLBACK *PWINBIO_CAPTURE_CALLBACK)(
    _In_opt_ PVOID CaptureCallbackContext,
    _In_ HRESULT OperationStatus,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_reads_bytes_(SampleSize) PWINBIO_BIR Sample,
    _In_ SIZE_T SampleSize,
    _In_ WINBIO_REJECT_DETAIL RejectDetail
    );
HRESULT WINAPI
WinBioCaptureSampleWithCallback(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_BIR_PURPOSE Purpose,
    _In_ WINBIO_BIR_DATA_FLAGS Flags,
    _In_ PWINBIO_CAPTURE_CALLBACK CaptureCallback,
    _In_opt_ PVOID CaptureCallbackContext
    );
HRESULT WINAPI
WinBioDeleteTemplate(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ WINBIO_IDENTITY *Identity,
    _In_ WINBIO_BIOMETRIC_SUBTYPE SubFactor
    );
HRESULT WINAPI
WinBioLockUnit(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId
    );
HRESULT WINAPI
WinBioUnlockUnit(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId
    );
HRESULT WINAPI
WinBioControlUnit(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ WINBIO_COMPONENT Component,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_range_(<=,ReceiveBufferSize) SIZE_T *ReceiveDataSize,
    _Out_opt_ ULONG *OperationStatus
    );
HRESULT WINAPI
WinBioControlUnitPrivileged(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_UNIT_ID UnitId,
    _In_ WINBIO_COMPONENT Component,
    _In_ ULONG ControlCode,
    _In_reads_bytes_(SendBufferSize) PUCHAR SendBuffer,
    _In_ SIZE_T SendBufferSize,
    _Out_writes_bytes_to_(ReceiveBufferSize,*ReceiveDataSize) PUCHAR ReceiveBuffer,
    _In_ SIZE_T ReceiveBufferSize,
    _Out_range_(<=,ReceiveBufferSize) SIZE_T *ReceiveDataSize,
    _Out_opt_ ULONG *OperationStatus
    );
HRESULT WINAPI
WinBioGetProperty(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_PROPERTY_TYPE PropertyType,
    _In_ WINBIO_PROPERTY_ID PropertyId,
    _In_opt_ WINBIO_UNIT_ID UnitId,
    _In_opt_ WINBIO_IDENTITY *Identity,
    _In_opt_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _Outptr_result_bytebuffer_maybenull_(*PropertyBufferSize) PVOID *PropertyBuffer,
    _Out_opt_ SIZE_T *PropertyBufferSize
    );
HRESULT WINAPI
WinBioSetProperty(
    _In_ WINBIO_SESSION_HANDLE SessionHandle,
    _In_ WINBIO_PROPERTY_TYPE PropertyType,
    _In_ WINBIO_PROPERTY_ID PropertyId,
    _In_opt_ WINBIO_UNIT_ID UnitId,
    _In_opt_ WINBIO_IDENTITY *Identity,
    _In_opt_ WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    _In_reads_bytes_(PropertyBufferSize) PVOID PropertyBuffer,
    _In_ SIZE_T PropertyBufferSize
    );
HRESULT WINAPI
WinBioFree(
    _In_ PVOID Address
    );
HRESULT WINAPI
WinBioSetCredential(
    _In_ WINBIO_CREDENTIAL_TYPE Type,
    _In_reads_bytes_(CredentialSize) PUCHAR Credential,
    _In_ SIZE_T CredentialSize,
    _In_ WINBIO_CREDENTIAL_FORMAT Format
    );
HRESULT WINAPI
WinBioRemoveCredential(
    _In_ WINBIO_IDENTITY Identity,
    _In_ WINBIO_CREDENTIAL_TYPE Type
    );
HRESULT WINAPI
WinBioRemoveAllCredentials(
    void
    );
HRESULT WINAPI
WinBioRemoveAllDomainCredentials(
    void
    );
HRESULT WINAPI
WinBioGetCredentialState(
    _In_ WINBIO_IDENTITY Identity,
    _In_ WINBIO_CREDENTIAL_TYPE Type,
    _Out_ WINBIO_CREDENTIAL_STATE *CredentialState
    );
HRESULT WINAPI
WinBioLogonIdentifiedUser(
    _In_ WINBIO_SESSION_HANDLE SessionHandle
    );
HRESULT WINAPI
WinBioGetEnrolledFactors(
    _In_ WINBIO_IDENTITY *AccountOwner,
    _Out_ WINBIO_BIOMETRIC_TYPE *EnrolledFactors
    );
VOID WINAPI
WinBioGetEnabledSetting(
    _Out_ BOOLEAN* Value,
    _Out_ PWINBIO_SETTING_SOURCE_TYPE Source
    );
VOID WINAPI
WinBioGetLogonSetting(
    _Out_ BOOLEAN* Value,
    _Out_ PWINBIO_SETTING_SOURCE_TYPE Source
    );
VOID WINAPI
WinBioGetDomainLogonSetting(
    _Out_ BOOLEAN* Value,
    _Out_ PWINBIO_SETTING_SOURCE_TYPE Source
    );
HRESULT WINAPI
WinBioAcquireFocus(
    void
    );
HRESULT WINAPI
WinBioReleaseFocus(
    void
    );
}
#endif
#pragma endregion

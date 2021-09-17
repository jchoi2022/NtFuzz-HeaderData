#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult;
typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult;
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult
{
    EasDisallowConvenienceLogonResult_NotEvaluated = 0,
    EasDisallowConvenienceLogonResult_Compliant = 1,
    EasDisallowConvenienceLogonResult_CanBeCompliant = 2,
    EasDisallowConvenienceLogonResult_RequestedPolicyIsStricter = 3,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType
{
    EasEncryptionProviderType_NotEvaluated = 0,
    EasEncryptionProviderType_WindowsEncryption = 1,
    EasEncryptionProviderType_OtherEncryption = 2,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult
{
    EasMaxInactivityTimeLockResult_NotEvaluated = 0,
    EasMaxInactivityTimeLockResult_Compliant = 1,
    EasMaxInactivityTimeLockResult_CanBeCompliant = 2,
    EasMaxInactivityTimeLockResult_RequestedPolicyIsStricter = 3,
    EasMaxInactivityTimeLockResult_InvalidParameter = 4,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult
{
    EasMaxPasswordFailedAttemptsResult_NotEvaluated = 0,
    EasMaxPasswordFailedAttemptsResult_Compliant = 1,
    EasMaxPasswordFailedAttemptsResult_CanBeCompliant = 2,
    EasMaxPasswordFailedAttemptsResult_RequestedPolicyIsStricter = 3,
    EasMaxPasswordFailedAttemptsResult_InvalidParameter = 4,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult
{
    EasMinPasswordComplexCharactersResult_NotEvaluated = 0,
    EasMinPasswordComplexCharactersResult_Compliant = 1,
    EasMinPasswordComplexCharactersResult_CanBeCompliant = 2,
    EasMinPasswordComplexCharactersResult_RequestedPolicyIsStricter = 3,
    EasMinPasswordComplexCharactersResult_RequestedPolicyNotEnforceable = 4,
    EasMinPasswordComplexCharactersResult_InvalidParameter = 5,
    EasMinPasswordComplexCharactersResult_CurrentUserHasBlankPassword = 6,
    EasMinPasswordComplexCharactersResult_AdminsHaveBlankPassword = 7,
    EasMinPasswordComplexCharactersResult_UserCannotChangePassword = 8,
    EasMinPasswordComplexCharactersResult_AdminsCannotChangePassword = 9,
    EasMinPasswordComplexCharactersResult_LocalControlledUsersCannotChangePassword = 10,
    EasMinPasswordComplexCharactersResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    EasMinPasswordComplexCharactersResult_ConnectedUserProviderPolicyIsWeak = 12,
    EasMinPasswordComplexCharactersResult_ChangeConnectedAdminsPassword = 13,
    EasMinPasswordComplexCharactersResult_ChangeConnectedUserPassword = 14,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult
{
    EasMinPasswordLengthResult_NotEvaluated = 0,
    EasMinPasswordLengthResult_Compliant = 1,
    EasMinPasswordLengthResult_CanBeCompliant = 2,
    EasMinPasswordLengthResult_RequestedPolicyIsStricter = 3,
    EasMinPasswordLengthResult_RequestedPolicyNotEnforceable = 4,
    EasMinPasswordLengthResult_InvalidParameter = 5,
    EasMinPasswordLengthResult_CurrentUserHasBlankPassword = 6,
    EasMinPasswordLengthResult_AdminsHaveBlankPassword = 7,
    EasMinPasswordLengthResult_UserCannotChangePassword = 8,
    EasMinPasswordLengthResult_AdminsCannotChangePassword = 9,
    EasMinPasswordLengthResult_LocalControlledUsersCannotChangePassword = 10,
    EasMinPasswordLengthResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    EasMinPasswordLengthResult_ConnectedUserProviderPolicyIsWeak = 12,
    EasMinPasswordLengthResult_ChangeConnectedAdminsPassword = 13,
    EasMinPasswordLengthResult_ChangeConnectedUserPassword = 14,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult
{
    EasPasswordExpirationResult_NotEvaluated = 0,
    EasPasswordExpirationResult_Compliant = 1,
    EasPasswordExpirationResult_CanBeCompliant = 2,
    EasPasswordExpirationResult_RequestedPolicyIsStricter = 3,
    EasPasswordExpirationResult_RequestedExpirationIncompatible = 4,
    EasPasswordExpirationResult_InvalidParameter = 5,
    EasPasswordExpirationResult_UserCannotChangePassword = 6,
    EasPasswordExpirationResult_AdminsCannotChangePassword = 7,
    EasPasswordExpirationResult_LocalControlledUsersCannotChangePassword = 8,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult
{
    EasPasswordHistoryResult_NotEvaluated = 0,
    EasPasswordHistoryResult_Compliant = 1,
    EasPasswordHistoryResult_CanBeCompliant = 2,
    EasPasswordHistoryResult_RequestedPolicyIsStricter = 3,
    EasPasswordHistoryResult_InvalidParameter = 4,
};
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult
{
    EasRequireEncryptionResult_NotEvaluated = 0,
    EasRequireEncryptionResult_Compliant = 1,
    EasRequireEncryptionResult_CanBeCompliant = 2,
    EasRequireEncryptionResult_NotProvisionedOnAllVolumes = 3,
    EasRequireEncryptionResult_DeFixedDataNotSupported
    DEPRECATEDENUMERATOR("DeFixedDataNotSupported may be altered or unavailable for releases after Windows 8.1. Instead, use FixedDataNotSupported.")
     = 4,
    EasRequireEncryptionResult_FixedDataNotSupported = 4,
    EasRequireEncryptionResult_DeHardwareNotCompliant
    DEPRECATEDENUMERATOR("DeHardwareNotCompliant may be altered or unavailable for releases after Windows 8.1. Instead, use HardwareNotCompliant.")
     = 5,
    EasRequireEncryptionResult_HardwareNotCompliant = 5,
    EasRequireEncryptionResult_DeWinReNotConfigured
    DEPRECATEDENUMERATOR("DeWinReNotConfigured may be altered or unavailable for releases after Windows 8.1. Instead, use LockNotConfigured.")
     = 6,
    EasRequireEncryptionResult_LockNotConfigured = 6,
    EasRequireEncryptionResult_DeProtectionSuspended
    DEPRECATEDENUMERATOR("DeProtectionSuspended may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionSuspended.")
     = 7,
    EasRequireEncryptionResult_ProtectionSuspended = 7,
    EasRequireEncryptionResult_DeOsVolumeNotProtected
    DEPRECATEDENUMERATOR("DeOsVolumeNotProtected may be altered or unavailable for releases after Windows 8.1. Instead, use OsVolumeNotProtected.")
     = 8,
    EasRequireEncryptionResult_OsVolumeNotProtected = 8,
    EasRequireEncryptionResult_DeProtectionNotYetEnabled
    DEPRECATEDENUMERATOR("DeProtectionNotYetEnabled may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionNotYetEnabled.")
     = 9,
    EasRequireEncryptionResult_ProtectionNotYetEnabled = 9,
    EasRequireEncryptionResult_NoFeatureLicense = 10,
    EasRequireEncryptionResult_OsNotProtected = 11,
    EasRequireEncryptionResult_UnexpectedFailure = 12,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation";
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OperatingSystem )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemManufacturer )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemProductName )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemSku )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl;
interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_OperatingSystem(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_SystemManufacturer(This,value) )
    ( (This)->lpVtbl->get_SystemProductName(This,value) )
    ( (This)->lpVtbl->get_SystemSku(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2";
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SystemHardwareVersion )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemFirmwareVersion )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl;
interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SystemHardwareVersion(This,value) )
    ( (This)->lpVtbl->get_SystemFirmwareVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy";
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequireEncryption )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequireEncryption )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPasswordLength )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinPasswordLength )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisallowConvenienceLogon )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisallowConvenienceLogon )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPasswordComplexCharacters )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinPasswordComplexCharacters )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PasswordExpiration )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PasswordExpiration )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PasswordHistory )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PasswordHistory )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPasswordFailedAttempts )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPasswordFailedAttempts )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxInactivityTimeLock )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxInactivityTimeLock )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckCompliance )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyAsync )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl;
interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequireEncryption(This,value) )
    ( (This)->lpVtbl->put_RequireEncryption(This,value) )
    ( (This)->lpVtbl->get_MinPasswordLength(This,value) )
    ( (This)->lpVtbl->put_MinPasswordLength(This,value) )
    ( (This)->lpVtbl->get_DisallowConvenienceLogon(This,value) )
    ( (This)->lpVtbl->put_DisallowConvenienceLogon(This,value) )
    ( (This)->lpVtbl->get_MinPasswordComplexCharacters(This,value) )
    ( (This)->lpVtbl->put_MinPasswordComplexCharacters(This,value) )
    ( (This)->lpVtbl->get_PasswordExpiration(This,value) )
    ( (This)->lpVtbl->put_PasswordExpiration(This,value) )
    ( (This)->lpVtbl->get_PasswordHistory(This,value) )
    ( (This)->lpVtbl->put_PasswordHistory(This,value) )
    ( (This)->lpVtbl->get_MaxPasswordFailedAttempts(This,value) )
    ( (This)->lpVtbl->put_MaxPasswordFailedAttempts(This,value) )
    ( (This)->lpVtbl->get_MaxInactivityTimeLock(This,value) )
    ( (This)->lpVtbl->put_MaxInactivityTimeLock(This,value) )
    ( (This)->lpVtbl->CheckCompliance(This,result) )
    ( (This)->lpVtbl->ApplyAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults";
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Compliant )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequireEncryptionResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPasswordLengthResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisallowConvenienceLogonResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPasswordComplexCharactersResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PasswordExpirationResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PasswordHistoryResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPasswordFailedAttemptsResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxInactivityTimeLockResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl;
interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Compliant(This,value) )
    ( (This)->lpVtbl->get_RequireEncryptionResult(This,value) )
    ( (This)->lpVtbl->get_MinPasswordLengthResult(This,value) )
    ( (This)->lpVtbl->get_DisallowConvenienceLogonResult(This,value) )
    ( (This)->lpVtbl->get_MinPasswordComplexCharactersResult(This,value) )
    ( (This)->lpVtbl->get_PasswordExpirationResult(This,value) )
    ( (This)->lpVtbl->get_PasswordHistoryResult(This,value) )
    ( (This)->lpVtbl->get_MaxPasswordFailedAttemptsResult(This,value) )
    ( (This)->lpVtbl->get_MaxInactivityTimeLockResult(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2";
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncryptionProviderType )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl;
interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncryptionProviderType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults";
       
       
#pragma clang diagnostic pop

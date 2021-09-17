       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum _EasEncryptProvProtectionStatus_
{
    EasEncryptProvDeviceStatusUnknown,
    EasEncryptProvDeviceNotProtected,
    EasEncryptProvDeviceProtected
} EasEncryptProvProtectionStatus;
typedef
HRESULT
(WINAPI *PFEnCrypQueryProtectionStatus) (
    _Out_ EasEncryptProvProtectionStatus *pDeviceStatus,
    _Out_ HRESULT *phrExtendedStatus
    );
typedef
HRESULT
(WINAPI *PFEncryptProvIsDeviceLockable) ();
typedef
HRESULT
(WINAPI *PFEncryptProvLockDevice) ();
typedef
HRESULT
(WINAPI *PFEncryptProvValidateDeviceLockoutState) ();
typedef
HRESULT
(WINAPI *pFEncryptProvDisableDeviceLockoutState) ();
typedef
HRESULT
(WINAPI *PFEncryptProvGetDeviceLockoutData) (
    _Out_writes_bytes_opt_(*pPerUserSize) PBYTE pPerUserData,
    _Inout_ ULONG *pPerUserSize
    );
typedef
HRESULT
(WINAPI *PFEncryptProvUpdateDeviceLockoutState) (
    _In_reads_bytes_(PerUserSize) PBYTE PerUserData,
    _In_ ULONG PerUserSize
    );
HRESULT
WINAPI
EasEncryptProvQueryProtectionStatus (
    _Out_ EasEncryptProvProtectionStatus *pDeviceStatus,
    _Out_ HRESULT *phrExtendedStatus
    );
HRESULT
WINAPI
EasEncryptProvIsDeviceLockable (
    );
HRESULT
WINAPI
EasEncryptProvLockDevice (
    );
HRESULT
WINAPI
EasEncryptProvGetDeviceLockoutData (
    _Out_writes_bytes_opt_(*pPerUserSize) PBYTE pPerUserData,
    _Inout_ ULONG *pPerUserSize
    );
HRESULT
WINAPI
EasEncryptProvValidateDeviceLockoutState (
    );
HRESULT
WINAPI
EasEncryptProvUpdateDeviceLockoutState (
    _In_reads_bytes_(PerUserSize) PBYTE PerUserData,
    _In_ ULONG PerUserSize
    );
HRESULT
WINAPI
EasEncryptProvDisableDeviceLockoutState (
    );
}
#endif
#pragma endregion

#include <apiset.h>
#include <apisetcconv.h>
#include <windows.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
VOID
(*PAPPSTATE_CHANGE_ROUTINE) (
    _In_ BOOLEAN Quiesced,
    _In_ PVOID Context
    );
typedef struct _APPSTATE_REGISTRATION *PAPPSTATE_REGISTRATION;
APICONTRACT
ULONG
NTAPI
RegisterAppStateChangeNotification(
    _In_ PAPPSTATE_CHANGE_ROUTINE Routine,
    _In_opt_ PVOID Context,
    _Out_ PAPPSTATE_REGISTRATION* Registration
    );
APICONTRACT
VOID
NTAPI
UnregisterAppStateChangeNotification(
    _Inout_ PAPPSTATE_REGISTRATION Registration
    );
typedef
VOID
(*PAPPCONSTRAIN_CHANGE_ROUTINE) (
    _In_ BOOLEAN Constrained,
    _In_ PVOID Context
);
typedef struct _APPCONSTRAIN_REGISTRATION *PAPPCONSTRAIN_REGISTRATION;
APICONTRACT
ULONG
NTAPI
RegisterAppConstrainedChangeNotification(
    _In_ PAPPCONSTRAIN_CHANGE_ROUTINE Routine,
    _In_opt_ PVOID Context,
    _Out_ PAPPCONSTRAIN_REGISTRATION* Registration
    );
APICONTRACT
VOID
NTAPI
UnregisterAppConstrainedChangeNotification(
    _Inout_ PAPPCONSTRAIN_REGISTRATION Registration
    );
#endif
#pragma endregion
}

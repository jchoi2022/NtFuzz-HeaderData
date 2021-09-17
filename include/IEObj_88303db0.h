#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
STDAPI IEAssociateThreadWithTab(_In_ DWORD dwTabThreadID,
                                _In_ DWORD dwAssociatedThreadID);
STDAPI IEDisassociateThreadWithTab(_In_ DWORD dwTabThreadID,
                                   _In_ DWORD dwAssociatedThreadID);
BOOL IEIsInPrivateBrowsing();
BOOL IEInPrivateFilteringEnabled();
BOOL IETrackingProtectionEnabled();
#endif
#pragma endregion

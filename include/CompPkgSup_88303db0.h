#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <hstring.h>
#include <inspectable.h>
#include <windows.foundation.h>
STDAPI InstantiateComponentFromPackage(_In_ HSTRING classId, _In_ HSTRING packageFullName, _COM_Outptr_ IInspectable** instance);
STDAPI RegisterServerForPMP(_In_ HSTRING serverClassId, _In_ IClassFactory *classFactory, _Out_ LPVOID *token);
STDAPI UnregisterServerForPMP(_In_ LPVOID token);
STDAPI GetServerForPMP(_In_ HSTRING serverClassId, _COM_Outptr_ IUnknown **unknown);
STDAPI AreDvdCodecsEnabled();
STDAPI RequireNetworkDuringMediaTaskCompletion(_In_ BOOL requireNetwork, _Out_opt_ DWORD* requireCount);
STDAPI_(DWORD) GetNetworkRequestCount();
STDAPI GetMediaExtensionCommunicationFactory(_Outptr_ LPVOID* factory);
STDAPI_(BOOL) IsMediaBehaviorEnabled(_In_ GUID mediaBehavior);
STDAPI GetMediaComponentPackageInfo( _In_ bool trustedOnly, _In_ HSTRING category,
    _COM_Outptr_ Windows::Foundation::Collections::IVector<Windows::Foundation::Collections::IPropertySet*> **codecPropertiesVector);
EXTERN_GUID(MEDIA_BEHAVIOR_MEDIAPLAYBACKLIST_AUTOPLAYBACKITEMRESET,
    0x45b17027, 0xe16c, 0x4f23, 0xa6, 0x2b, 0xb3, 0x71, 0x46, 0xb2, 0xc9, 0x64);
#endif
#pragma endregion

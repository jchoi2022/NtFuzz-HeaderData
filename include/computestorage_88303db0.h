       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
HRESULT
WINAPI
HcsImportLayer(
    _In_ PCWSTR layerPath,
    _In_ PCWSTR sourceFolderPath,
    _In_ PCWSTR layerData
    );
HRESULT
WINAPI
HcsExportLayer(
    _In_ PCWSTR layerPath,
    _In_ PCWSTR exportFolderPath,
    _In_ PCWSTR layerData,
    _In_ PCWSTR options
    );
HRESULT
WINAPI
HcsExportLegacyWritableLayer(
    _In_ PCWSTR writableLayerMountPath,
    _In_ PCWSTR writableLayerFolderPath,
    _In_ PCWSTR exportFolderPath,
    _In_ PCWSTR layerData
    );
HRESULT
WINAPI
HcsDestroyLayer(
    _In_ PCWSTR layerPath
    );
HRESULT
WINAPI
HcsSetupBaseOSLayer(
    _In_ PCWSTR layerPath,
    _In_ HANDLE vhdHandle,
    _In_ PCWSTR options
    );
HRESULT
WINAPI
HcsInitializeWritableLayer(
    _In_ PCWSTR writableLayerPath,
    _In_ PCWSTR layerData,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsInitializeLegacyWritableLayer(
    _In_ PCWSTR writableLayerMountPath,
    _In_ PCWSTR writableLayerFolderPath,
    _In_ PCWSTR layerData,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsAttachLayerStorageFilter(
    _In_ PCWSTR layerPath,
    _In_ PCWSTR layerData
    );
HRESULT
WINAPI
HcsDetachLayerStorageFilter(
    _In_ PCWSTR layerPath
    );
HRESULT
WINAPI
HcsFormatWritableLayerVhd(
    _In_ HANDLE vhdHandle
    );
HRESULT
WINAPI
HcsGetLayerVhdMountPath(
    _In_ HANDLE vhdHandle,
    _Outptr_ PWSTR* mountPath
    );
}
#endif
#pragma endregion
extern "C" {
BOOLEAN
__stdcall
IsHcsImportLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsExportLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsExportLegacyWritableLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsDestroyLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSetupBaseOSLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsInitializeWritableLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsInitializeLegacyWritableLayerPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsAttachLayerStorageFilterPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsDetachLayerStorageFilterPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsFormatWritableLayerVhdPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetLayerVhdMountPathPresent(
    VOID
    );
}

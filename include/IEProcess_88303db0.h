       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HMODULE (*IEGetProcessModule_t)();
typedef struct _TLS_IMMUTABLE_TABDATA
{
    LONG lTabId;
    DWORD dwTabThreadId;
} TLS_IMMUTABLE_TABDATA;
struct IE80TabWindowExports
{
    HRESULT (WINAPI *WaitForTabWindow)(
        _In_ bool allowUnknownThread,
        _In_ HWND proposedParentWindow,
        _Out_ HWND* pActualParentWindow);
    HRESULT (WINAPI *AcquireModalDialogLockAndParent)(
        _In_ HWND proposedParentWindow,
        _Out_ HWND* pActualParentWindow,
        _Out_ HANDLE* phModalDialogLock);
    void (WINAPI *ReleaseModalDialogLockAndParent)(
        _In_opt_ HANDLE hModalDialogLock);
    TLS_IMMUTABLE_TABDATA* (WINAPI *TLSGetImmutableTabData)();
    HRESULT (WINAPI *TLSSetImmutableTabData)(TLS_IMMUTABLE_TABDATA* tlsITD);
    void (WINAPI *TLSFreeImmutableTabData)();
};
typedef const IETabWindowExports* (*IEGetTabWindowExports_t)();
#endif
#pragma endregion

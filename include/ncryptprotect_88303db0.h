#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
DECLARE_HANDLE( NCRYPT_DESCRIPTOR_HANDLE );
SECURITY_STATUS
WINAPI
NCryptRegisterProtectionDescriptorName(
    _In_ LPCWSTR pwszName,
    _In_opt_ LPCWSTR pwszDescriptorString,
                    DWORD dwFlags
    );
SECURITY_STATUS
WINAPI
NCryptQueryProtectionDescriptorName(
    _In_ LPCWSTR pwszName,
    _Out_writes_to_opt_(*pcDescriptorString, *pcDescriptorString)
                    LPWSTR pwszDescriptorString,
    _Inout_ SIZE_T *pcDescriptorString,
                    DWORD dwFlags
    );
SECURITY_STATUS
WINAPI
NCryptCreateProtectionDescriptor(
    _In_ LPCWSTR pwszDescriptorString,
                    DWORD dwFlags,
    _Out_ NCRYPT_DESCRIPTOR_HANDLE *phDescriptor
    );
SECURITY_STATUS
WINAPI
NCryptCloseProtectionDescriptor(
    _In_ NCRYPT_DESCRIPTOR_HANDLE hDescriptor
    );
_When_(dwInfoType == NCRYPT_PROTECTION_INFO_TYPE_DESCRIPTOR_STRING,
       _At_((LPWSTR*)ppvInfo, _Out_))
SECURITY_STATUS
WINAPI
NCryptGetProtectionDescriptorInfo(
    _In_ NCRYPT_DESCRIPTOR_HANDLE hDescriptor,
    _In_opt_ const NCRYPT_ALLOC_PARA *pMemPara,
                    DWORD dwInfoType,
    _Outptr_ void* *ppvInfo
    );
SECURITY_STATUS
WINAPI
NCryptProtectSecret(
    _In_ NCRYPT_DESCRIPTOR_HANDLE hDescriptor,
                    DWORD dwFlags,
    _In_reads_bytes_(cbData)
                    const BYTE *pbData,
                    ULONG cbData,
    _In_opt_ const NCRYPT_ALLOC_PARA *pMemPara,
    _In_opt_ HWND hWnd,
    _Outptr_result_bytebuffer_(*pcbProtectedBlob)
                    BYTE **ppbProtectedBlob,
    _Out_ ULONG *pcbProtectedBlob
    );
SECURITY_STATUS
WINAPI
NCryptUnprotectSecret(
    _Out_opt_ NCRYPT_DESCRIPTOR_HANDLE *phDescriptor,
     _In_ DWORD dwFlags,
    _In_reads_bytes_(cbProtectedBlob)
                    const BYTE *pbProtectedBlob,
                    ULONG cbProtectedBlob,
    _In_opt_ const NCRYPT_ALLOC_PARA *pMemPara,
    _In_opt_ HWND hWnd,
    _Outptr_result_bytebuffer_(*pcbData)
                    BYTE **ppbData,
    _Out_ ULONG *pcbData
    );
DECLARE_HANDLE( NCRYPT_STREAM_HANDLE );
typedef
SECURITY_STATUS
(WINAPI *PFNCryptStreamOutputCallback)(
    _In_ void *pvCallbackCtxt,
    _In_reads_bytes_(cbData)
                    const BYTE *pbData,
                    SIZE_T cbData,
                    BOOL fFinal
    );
typedef struct NCRYPT_PROTECT_STREAM_INFO {
    PFNCryptStreamOutputCallback pfnStreamOutput;
    void *pvCallbackCtxt;
} NCRYPT_PROTECT_STREAM_INFO;
SECURITY_STATUS
WINAPI
NCryptStreamOpenToProtect(
    _In_ NCRYPT_DESCRIPTOR_HANDLE hDescriptor,
                    DWORD dwFlags,
    _In_opt_ HWND hWnd,
    _In_ NCRYPT_PROTECT_STREAM_INFO *pStreamInfo,
    _Out_ NCRYPT_STREAM_HANDLE *phStream
    );
SECURITY_STATUS
WINAPI
NCryptStreamOpenToUnprotect(
    _In_ NCRYPT_PROTECT_STREAM_INFO *pStreamInfo,
                    DWORD dwFlags,
    _In_opt_ HWND hWnd,
    _Out_ NCRYPT_STREAM_HANDLE *phStream
    );
typedef
SECURITY_STATUS
(WINAPI *PFNCryptStreamOutputCallbackEx)(
    _In_ void *pvCallbackCtxt,
    _In_reads_bytes_opt_(cbData)
                    const BYTE *pbData,
                    SIZE_T cbData,
    _In_ NCRYPT_DESCRIPTOR_HANDLE hDescriptor,
                    BOOL fFinal
);
typedef struct NCRYPT_PROTECT_STREAM_INFO_EX {
    PFNCryptStreamOutputCallbackEx pfnStreamOutput;
    void *pvCallbackCtxt;
} NCRYPT_PROTECT_STREAM_INFO_EX;
SECURITY_STATUS
WINAPI
NCryptStreamOpenToUnprotectEx(
    _In_ NCRYPT_PROTECT_STREAM_INFO_EX *pStreamInfo,
                    DWORD dwFlags,
    _In_opt_ HWND hWnd,
    _Out_ NCRYPT_STREAM_HANDLE *phStream
);
SECURITY_STATUS
WINAPI
NCryptStreamUpdate(
    _In_ NCRYPT_STREAM_HANDLE hStream,
    _In_reads_bytes_(cbData)
                    const BYTE *pbData,
                    SIZE_T cbData,
                    BOOL fFinal
    );
SECURITY_STATUS
WINAPI
NCryptStreamClose(
    _In_ NCRYPT_STREAM_HANDLE hStream
    );
}
#endif
#pragma endregion

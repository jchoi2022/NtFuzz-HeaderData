       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <strsafe.h>
typedef struct _BMP_IMAGE_INFO
{
    INT Width;
    INT Height;
    INT ByteWidth;
    INT Size;
} BMP_IMAGE_INFO, *PBMP_IMAGE_INFO;
typedef enum
{
    SKIP_OFF,
    SKIP_FILEHDR,
    SKIP_BOTHHDR
} SKIP_AMOUNT;
class CWiauFormatConverter
{
public:
    CWiauFormatConverter();
    ~CWiauFormatConverter();
    _Check_return_ HRESULT Init();
    _Check_return_ BOOL IsFormatSupported(_In_ const GUID *pguidFormat);
    _Check_return_ HRESULT ConvertToBmp(_In_ BYTE *pSource, INT iSourceSize,
                                       _Outptr_result_buffer_(*piDestSize) BYTE **ppDest,
                                       _Inout_ INT *piDestSize, _Out_ BMP_IMAGE_INFO *pBmpImageInfo,
                                       SKIP_AMOUNT iSkipAmt = SKIP_OFF);
private:
    ULONG_PTR m_Token;
    UINT m_EncoderCount;
    BYTE *m_pEncoderInfo;
    GUID m_guidCodecBmp;
};
class CWiauPropertyList
{
private:
    int m_NumAlloc;
    int m_NumProps;
    PROPID *m_pId;
    LPOLESTR *m_pNames;
    PROPVARIANT *m_pCurrent;
    PROPSPEC *m_pPropSpec;
    WIA_PROPERTY_INFO *m_pAttrib;
public:
    CWiauPropertyList();
    ~CWiauPropertyList();
    _Check_return_ HRESULT Init(INT NumProps);
    _Check_return_ HRESULT DefineProperty(_Inout_ int *pIdx, PROPID PropId,
                                         _In_ LPOLESTR PropName, ULONG Access,
                                         ULONG SubType);
    _Check_return_ HRESULT SendToWia(_In_ BYTE *pWiasContext);
    HRESULT SetAccessSubType(INT index, ULONG Access, ULONG SubType);
    HRESULT SetValidValues(INT index, LONG defaultValue, LONG currentValue, LONG validFlags);
    HRESULT SetValidValues(INT index, LONG defaultValue, LONG currentValue,
                           LONG minValue, LONG maxValue, LONG stepValue);
    HRESULT SetValidValues(INT index, LONG defaultValue, LONG currentValue,
                           INT numValues, _In_reads_(numValues) PLONG pValues);
    HRESULT SetValidValues(INT index, _In_ BSTR defaultValue, _In_ BSTR currentValue,
                           INT numValues, _In_reads_(numValues) BSTR *pValues);
    HRESULT SetValidValues(INT index, FLOAT defaultValue, FLOAT currentValue,
                           FLOAT minValue, FLOAT maxValue, FLOAT stepValue);
    HRESULT SetValidValues(INT index, FLOAT defaultValue, FLOAT currentValue,
                           INT numValues, _In_reads_(numValues) PFLOAT pValues);
    HRESULT SetValidValues(INT index, _In_ CLSID *defaultValue, _In_ CLSID *currentValue,
                           INT numValues, _In_reads_(numValues) CLSID **pValues);
    HRESULT SetCurrentValue(INT index, LONG value);
    HRESULT SetCurrentValue(INT index, _In_ BSTR value);
    HRESULT SetCurrentValue(INT index, FLOAT value);
    HRESULT SetCurrentValue(INT index, _In_ CLSID *pValue);
    HRESULT SetCurrentValue(INT index, _In_ PSYSTEMTIME value);
    HRESULT SetCurrentValue(INT index, _In_reads_opt_(size) BYTE *value, INT size);
    _Check_return_ PROPID GetPropId(INT index) { return m_pId[index]; }
    _Check_return_ INT LookupPropId(PROPID PropId);
};
    _Check_return_ HRESULT _stdcall wiauGetDrvItemContext(_In_ BYTE *pWiasContext, _Inout_ VOID **ppItemCtx,
        _Inout_opt_ IWiaDrvItem **ppDrvItem = NULL);
    _Check_return_ HRESULT _stdcall wiauSetImageItemSize(_In_ BYTE *pWiasContext, LONG lWidth,
        LONG lHeight, LONG lDepth, LONG lSize, _In_opt_ PWSTR pwszExt = NULL);
    _Check_return_ BOOL _stdcall wiauPropsInPropSpec(LONG NumPropSpecs,
        _In_reads_(NumPropSpecs) const PROPSPEC *pPropSpecs,
        int NumProps, _In_reads_(NumProps) PROPID *pProps);
    _Check_return_ BOOL _stdcall wiauPropInPropSpec(LONG NumPropSpecs,
        _In_reads_(NumPropSpecs) const PROPSPEC *pPropSpecs,
        PROPID PropId, _Out_opt_ int *pIdx = NULL);
    _Check_return_ HRESULT _stdcall wiauGetValidFormats(_In_ IWiaMiniDrv *pDrv, _In_ BYTE *pWiasContext,
        LONG TymedValue, _Out_ int *pNumFormats, _Out_writes_(*pNumFormats)GUID **ppFormatArray);
    _Check_return_ HRESULT _stdcall wiauGetResourceString(HINSTANCE hInst, LONG lResourceID, _Out_ BSTR *pbstrStr);
    _Check_return_ HRESULT _stdcall wiauRegOpenDataW(_In_ HKEY hkeyAncestor, _Inout_ HKEY *phkeyDeviceData);
    _Check_return_ HRESULT _stdcall wiauRegOpenDataA(_In_ HKEY hkeyAncestor, _Inout_ HKEY *phkeyDeviceData);
    _Check_return_ HRESULT _stdcall wiauRegGetStrW(_In_ HKEY hkKey, _In_ PCWSTR pwszValueName,
        _Out_writes_bytes_(*pdwLength) PWSTR pwszValue, _Inout_ DWORD *pdwLength);
    _Check_return_ HRESULT _stdcall wiauRegGetStrA(_In_ HKEY hkKey, _In_ PCSTR pszValueName,
        _Out_writes_bytes_(*pdwLength) PSTR pszValue, _Inout_ DWORD *pdwLength);
    _Check_return_ HRESULT _stdcall wiauRegGetDwordW(_In_ HKEY hkKey, _In_ PCWSTR pwszValueName, _Out_ DWORD *pdwValue);
    _Check_return_ HRESULT _stdcall wiauRegGetDwordA(_In_ HKEY hkKey, _In_ PCSTR pszValueName, _Out_ DWORD *pdwValue);
    _Check_return_ HRESULT _stdcall wiauStrW2C(_In_reads_bytes_(iSize) _Pre_z_ WCHAR *pwszSrc,
        _Out_writes_(iSize) CHAR *pszDst, INT iSize);
    _Check_return_ HRESULT _stdcall wiauStrC2W(_In_reads_bytes_(iSize) _Pre_z_ CHAR *pszSrc,
        _Out_writes_bytes_(iSize) WCHAR *pwszDst, INT iSize);
    _Check_return_ HRESULT _stdcall wiauStrW2W(_In_reads_bytes_(iSize) _Pre_z_ WCHAR *pwszSrc,
        _Out_writes_bytes_(iSize) WCHAR *pwszDst, INT iSize);
    _Check_return_ HRESULT _stdcall wiauStrC2C(_In_reads_z_(iSize) CHAR *pszSrc,
        _Out_writes_bytes_(iSize) CHAR *pszDst, INT iSize);
const DWORD WIAUDBG_ERRORS = 0x00000001;
const DWORD WIAUDBG_WARNINGS = 0x00000002;
const DWORD WIAUDBG_TRACES = 0x00000004;
const DWORD WIAUDBG_FNS = 0x00000008;
const DWORD WIAUDBG_DUMP = 0x00000010;
const DWORD WIAUDBG_PRINT_TIME = 0x08000000;
const DWORD WIAUDBG_PRINT_INFO = 0x10000000;
const DWORD WIAUDBG_DONT_LOG_TO_DEBUGGER = 0x20000000;
const DWORD WIAUDBG_DONT_LOG_TO_FILE = 0x40000000;
const DWORD WIAUDBG_BREAK_ON_ERRORS = 0x80000000;
const DWORD WIAUDBG_DONT_LOG = WIAUDBG_DONT_LOG_TO_FILE | WIAUDBG_DONT_LOG_TO_DEBUGGER;
const DWORD WIAUDBG_DEFAULT_FLAGS = WIAUDBG_ERRORS;
const DWORD WIAUDBG_MFMT_FLAGS = FORMAT_MESSAGE_IGNORE_INSERTS |
                                 FORMAT_MESSAGE_FROM_SYSTEM |
                                 FORMAT_MESSAGE_MAX_WIDTH_MASK;
extern "C" {
inline void wiauNull1(LPCSTR a, ...) {}
inline void wiauNull2(LPCSTR a, LPCSTR b,...) {}
inline void wiauNull2h(HINSTANCE hInstance, LPCSTR b,...) {}
inline void wiauNull3(LPCSTR a, LPCSTR b, LPCSTR c, ...) {}
inline void wiauNull3hr(HRESULT a, LPCSTR b, LPCSTR c, ...) {}
inline void wiauNull4(DWORD a, LPCSTR b, LPCSTR c, LPCSTR d, ...) {}
inline void wiauNullHHr(HINSTANCE hInstance, HRESULT hr) {}
        if (!(y)) { \
            WIAS_ERROR((x, (char*) TEXT("ASSERTION FAILED: %hs(%d): %hs"), __FILE__,__LINE__,#x)); \
            DebugBreak(); \
        }
    if (FAILED(hr)) { \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgErrorHr(hr, fname, msg); \
        goto Cleanup; \
    }
    if ((hr) != S_OK) { \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgErrorHr(hr, fname, msg); \
        goto Cleanup; \
    }
    if (args) { \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgError(fname, "Invalid arg"); \
        hr = E_INVALIDARG; \
        goto Cleanup; \
    }
    if (!(var)) { \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgError(fname, "Memory allocation failed on " #var); \
        hr = E_OUTOFMEMORY; \
        goto Cleanup; \
    }
    if ((handle) == NULL || (handle) == INVALID_HANDLE_VALUE) { \
        hr = HRESULT_FROM_WIN32(::GetLastError()); \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgErrorHr(hr, fname, msg); \
        goto Cleanup; \
    }
    if (!(ret)) { \
        hr = HRESULT_FROM_WIN32(::GetLastError()); \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgErrorHr(hr, fname, msg); \
        goto Cleanup; \
    }
    if ((err) != ERROR_SUCCESS) { \
        hr = HRESULT_FROM_WIN32(err); \
        if (g_dwDebugFlags & WIAUDBG_PRINT_INFO) { \
            DWORD threadId = GetCurrentThreadId(); \
            wiauDbgError(fname, "[%s(%d): Thread 0x%X (%d)]", __FILE__, __LINE__, threadId, threadId); \
        } \
        wiauDbgErrorHr(hr, fname, msg); \
        goto Cleanup; \
    }
}
#endif
#pragma endregion

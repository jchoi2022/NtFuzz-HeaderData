extern "C" {
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum tagEFaultRepRetVal
{
    frrvOk = 0,
    frrvOkManifest,
    frrvOkQueued,
    frrvErr,
    frrvErrNoDW,
    frrvErrTimeout,
    frrvLaunchDebugger,
    frrvOkHeadless,
    frrvErrAnotherInstance,
    frrvErrNoMemory,
    frrvErrDoubleFault,
} EFaultRepRetVal;
EFaultRepRetVal APIENTRY ReportFault(_In_ LPEXCEPTION_POINTERS pep, _In_ DWORD dwOpt);
BOOL APIENTRY AddERExcludedApplicationA(_In_ LPCSTR szApplication);
BOOL APIENTRY AddERExcludedApplicationW(_In_ LPCWSTR wszApplication);
typedef EFaultRepRetVal (APIENTRY *pfn_REPORTFAULT)(_In_ LPEXCEPTION_POINTERS, _In_ DWORD);
typedef EFaultRepRetVal (APIENTRY *pfn_ADDEREXCLUDEDAPPLICATIONA)(_In_ LPCSTR);
typedef EFaultRepRetVal (APIENTRY *pfn_ADDEREXCLUDEDAPPLICATIONW)(_In_ LPCWSTR);
HRESULT
WINAPI
WerReportHang(
    _In_ HWND hwndHungApp,
    _In_opt_ PCWSTR pwzHungApplicationName
    );
#endif
#pragma endregion
}

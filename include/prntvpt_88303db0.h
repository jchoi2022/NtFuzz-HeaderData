#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DECLARE_HANDLE(HPTPROVIDER);
typedef enum tagEDefaultDevmodeType
{
    kUserDefaultDevmode,
    kPrinterDefaultDevmode
} EDefaultDevmodeType;
typedef enum
{
    kPTPageScope,
    kPTDocumentScope,
    kPTJobScope
} EPrintTicketScope;
HRESULT WINAPI
PTQuerySchemaVersionSupport(
            _In_ PCWSTR pszPrinterName,
            _Out_ DWORD *pMaxVersion
            );
HRESULT WINAPI
PTOpenProvider(
            _In_ PCWSTR pszPrinterName,
                        DWORD dwVersion,
            _Out_ HPTPROVIDER *phProvider
            );
HRESULT WINAPI
PTOpenProviderEx(
            _In_ PCWSTR pszPrinterName,
                  DWORD dwMaxVersion,
                  DWORD dwPrefVersion,
            _Out_ HPTPROVIDER *phProvider,
            _Out_ DWORD *pUsedVersion
            );
HRESULT WINAPI
PTCloseProvider(
            _In_ HPTPROVIDER hProvider
            );
HRESULT WINAPI
PTReleaseMemory(
    _In_ PVOID pBuffer
    );
HRESULT WINAPI
PTGetPrintCapabilities(
            _In_ HPTPROVIDER hProvider,
            _In_opt_ IStream *pPrintTicket,
            _Inout_ IStream *pCapabilities,
            _Out_opt_ BSTR *pbstrErrorMessage
            );
HRESULT WINAPI
PTGetPrintDeviceCapabilities(
    _In_ HPTPROVIDER hProvider,
    _In_opt_ IStream *pPrintTicket,
    _Inout_ IStream *pDeviceCapabilities,
    _Out_opt_ BSTR *pbstrErrorMessage
    );
HRESULT WINAPI
PTGetPrintDeviceResources(
    _In_ HPTPROVIDER hProvider,
    _In_ LPCWSTR pszLocaleName,
    _In_opt_ IStream *pPrintTicket,
    _Inout_ IStream *pDeviceResources,
    _Out_opt_ BSTR *pbstrErrorMessage
);
HRESULT WINAPI
PTMergeAndValidatePrintTicket(
            _In_ HPTPROVIDER hProvider,
            _In_ IStream *pBaseTicket,
            _In_opt_ IStream *pDeltaTicket,
            _In_ EPrintTicketScope scope,
            _Inout_ IStream *pResultTicket,
            _Out_opt_ BSTR *pbstrErrorMessage
            );
HRESULT WINAPI
PTConvertPrintTicketToDevMode(
            _In_ HPTPROVIDER hProvider,
            _In_ IStream *pPrintTicket,
                                     EDefaultDevmodeType baseDevmodeType,
            _In_ EPrintTicketScope scope,
            _Out_ ULONG *pcbDevmode,
            _Outptr_result_bytebuffer_(*pcbDevmode) OUT PDEVMODE *ppDevmode,
            _Out_opt_ BSTR *pbstrErrorMessage
            );
HRESULT WINAPI
PTConvertDevModeToPrintTicket(
            _In_ HPTPROVIDER hProvider,
                        ULONG cbDevmode,
            _In_ PDEVMODE pDevmode,
            _In_ EPrintTicketScope scope,
            _Inout_ IStream *pPrintTicket
            );
}
#endif
#pragma endregion

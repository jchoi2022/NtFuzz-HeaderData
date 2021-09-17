       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
HRESULT WINAPI
WSDSetConfigurationOption(
    DWORD dwOption,
    _In_reads_bytes_(cbInBuffer) LPVOID pVoid,
    DWORD cbInBuffer);
HRESULT WINAPI
WSDGetConfigurationOption(
    DWORD dwOption,
    _Out_writes_bytes_(cbOutBuffer) LPVOID pVoid,
    DWORD cbOutBuffer);
void * WINAPI
WSDAllocateLinkedMemory(
    void* pParent,
    size_t cbSize);
void WINAPI
WSDFreeLinkedMemory(
    void *pVoid);
void WINAPI
WSDAttachLinkedMemory(
    void* pParent,
    void* pChild);
void WINAPI
WSDDetachLinkedMemory(
    void* pVoid);
typedef struct _WSDXML_ELEMENT WSDXML_ELEMENT;
HRESULT WINAPI
WSDXMLBuildAnyForSingleElement(
    WSDXML_NAME* pElementName,
    _In_opt_ LPCWSTR pszText,
    _Outptr_ WSDXML_ELEMENT** ppAny);
HRESULT WINAPI
WSDXMLGetValueFromAny(
    _In_ LPCWSTR pszNamespace,
    _In_ LPCWSTR pszName,
    WSDXML_ELEMENT* pAny,
    _Outptr_ LPCWSTR* ppszValue);
HRESULT WINAPI
WSDXMLAddSibling(
    WSDXML_ELEMENT* pFirst,
    WSDXML_ELEMENT* pSecond);
HRESULT WINAPI
WSDXMLAddChild(
    WSDXML_ELEMENT* pParent,
    WSDXML_ELEMENT* pChild);
HRESULT WINAPI
WSDXMLCleanupElement(
    WSDXML_ELEMENT* pAny);
HRESULT WINAPI
WSDGenerateFault(
    _In_ LPCWSTR pszCode,
    _In_opt_ LPCWSTR pszSubCode,
    _In_ LPCWSTR pszReason,
    _In_opt_ LPCWSTR pszDetail,
    _In_ IWSDXMLContext* pContext,
    _Outptr_ WSD_SOAP_FAULT** ppFault);
HRESULT WINAPI
WSDGenerateFaultEx(
    _In_ WSDXML_NAME* pCode,
    _In_opt_ WSDXML_NAME* pSubCode,
    _In_ WSD_LOCALIZED_STRING_LIST* pReasons,
    _In_opt_ LPCWSTR pszDetail,
    _Outptr_ WSD_SOAP_FAULT** ppFault);
HRESULT WINAPI
WSDUriEncode(
    _In_reads_(cchSource) LPCWSTR source,
    _In_ DWORD cchSource,
    _Out_writes_(*cchDestOut) LPWSTR *destOut,
    _Out_opt_ DWORD *cchDestOut);
HRESULT WINAPI
WSDUriDecode(
    _In_reads_(cchSource) LPCWSTR source,
    _In_ DWORD cchSource,
    _Out_writes_(*cchDestOut) LPWSTR *destOut,
    _Out_opt_ DWORD *cchDestOut);
};
#endif
#pragma endregion

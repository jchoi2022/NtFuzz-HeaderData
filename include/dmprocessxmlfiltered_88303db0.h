       
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#include <windows.h>
STDAPI DMProcessConfigXMLFiltered(
    _In_ PCWSTR pszXmlIn,
    _In_reads_(dwNumAllowedCspNodes) PCWSTR* rgszAllowedCspNodes,
    _In_ DWORD dwNumAllowedCspNodes,
    _Outptr_result_z_ BSTR* pbstrXmlOut);
#endif
#pragma endregion

       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct TMPROPINFO
{
    LPCWSTR pszName;
    SHORT sEnumVal;
    BYTE bPrimVal;
};
struct TMSCHEMAINFO
{
    DWORD dwSize;
    int iSchemaDefVersion;
    int iThemeMgrVersion;
    int iPropCount;
    const struct TMPROPINFO *pPropTable;
};
#endif
#pragma endregion

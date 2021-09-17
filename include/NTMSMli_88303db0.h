#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct
{
        WCHAR LabelType[NTMSMLI_MAXTYPE];
        DWORD LabelIDSize;
        BYTE LabelID[NTMSMLI_MAXIDSIZE];
        WCHAR LabelAppDescr[NTMSMLI_MAXAPPDESCR];
} MediaLabelInfo, *pMediaLabelInfo;
typedef DWORD ( WINAPI *MAXMEDIALABEL) (DWORD * const pMaxSize);
typedef DWORD ( WINAPI *CLAIMMEDIALABEL) (const BYTE * const pBuffer, const DWORD nBufferSize,
                                  MediaLabelInfo * const pLabelInfo);
typedef DWORD ( WINAPI *CLAIMMEDIALABELEX) (const BYTE * const pBuffer, const DWORD nBufferSize,
                                  MediaLabelInfo * const pLabelInfo, GUID * LabelGuid);
#endif
#pragma endregion

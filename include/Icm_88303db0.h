#include <winapifamily.h>
#pragma region Modern Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern "C" {
typedef char COLOR_NAME[32];
typedef COLOR_NAME *PCOLOR_NAME, *LPCOLOR_NAME;
typedef struct tagNAMED_PROFILE_INFO{
        DWORD dwFlags;
        DWORD dwCount;
        DWORD dwCountDevCoordinates;
        COLOR_NAME szPrefix;
        COLOR_NAME szSuffix;
} NAMED_PROFILE_INFO;
typedef NAMED_PROFILE_INFO *PNAMED_PROFILE_INFO, *LPNAMED_PROFILE_INFO;
struct GRAYCOLOR {
    WORD gray;
};
struct RGBCOLOR {
    WORD red;
    WORD green;
    WORD blue;
};
struct CMYKCOLOR {
    WORD cyan;
    WORD magenta;
    WORD yellow;
    WORD black;
};
struct XYZCOLOR {
    WORD X;
    WORD Y;
    WORD Z;
};
struct YxyCOLOR {
    WORD Y;
    WORD x;
    WORD y;
};
struct LabCOLOR {
    WORD L;
    WORD a;
    WORD b;
};
struct GENERIC3CHANNEL {
    WORD ch1;
    WORD ch2;
    WORD ch3;
};
struct NAMEDCOLOR {
    DWORD dwIndex;
};
struct HiFiCOLOR {
    BYTE channel[MAX_COLOR_CHANNELS];
};
typedef union tagCOLOR {
    struct GRAYCOLOR gray;
    struct RGBCOLOR rgb;
    struct CMYKCOLOR cmyk;
    struct XYZCOLOR XYZ;
    struct YxyCOLOR Yxy;
    struct LabCOLOR Lab;
    struct GENERIC3CHANNEL gen3ch;
    struct NAMEDCOLOR named;
    struct HiFiCOLOR hifi;
    struct {
        DWORD reserved1;
        VOID *reserved2;
    };
} COLOR;
typedef COLOR *PCOLOR, *LPCOLOR;
typedef enum {
    COLOR_GRAY = 1,
    COLOR_RGB,
    COLOR_XYZ,
    COLOR_Yxy,
    COLOR_Lab,
    COLOR_3_CHANNEL,
    COLOR_CMYK,
    COLOR_5_CHANNEL,
    COLOR_6_CHANNEL,
    COLOR_7_CHANNEL,
    COLOR_8_CHANNEL,
    COLOR_NAMED,
} COLORTYPE;
typedef COLORTYPE *PCOLORTYPE, *LPCOLORTYPE;
typedef enum {
    CPT_ICC,
    CPT_DMP,
    CPT_CAMP,
    CPT_GMMP
} COLORPROFILETYPE;
typedef COLORPROFILETYPE *PCOLORPROFILETYPE, *LPCOLORPROFILETYPE;
typedef enum {
    CPST_PERCEPTUAL = INTENT_PERCEPTUAL,
    CPST_RELATIVE_COLORIMETRIC = INTENT_RELATIVE_COLORIMETRIC,
    CPST_SATURATION = INTENT_SATURATION,
    CPST_ABSOLUTE_COLORIMETRIC = INTENT_ABSOLUTE_COLORIMETRIC,
    CPST_NONE,
    CPST_RGB_WORKING_SPACE,
    CPST_CUSTOM_WORKING_SPACE,
    CPST_STANDARD_DISPLAY_COLOR_MODE,
    CPST_EXTENDED_DISPLAY_COLOR_MODE
} COLORPROFILESUBTYPE;
typedef COLORPROFILESUBTYPE *PCOLORPROFILESUBTYPE, *LPCOLORPROFILESUBTYPE;
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum {
    COLOR_BYTE = 1,
    COLOR_WORD,
    COLOR_FLOAT,
    COLOR_S2DOT13FIXED,
    COLOR_10b_R10G10B10A2,
    COLOR_10b_R10G10B10A2_XR,
    COLOR_FLOAT16
} COLORDATATYPE;
typedef COLORDATATYPE *PCOLORDATATYPE, *LPCOLORDATATYPE;
#endif
typedef enum {
    BM_x555RGB = 0x0000,
    BM_x555XYZ = 0x0101,
    BM_x555Yxy,
    BM_x555Lab,
    BM_x555G3CH,
    BM_RGBTRIPLETS = 0x0002,
    BM_BGRTRIPLETS = 0x0004,
    BM_XYZTRIPLETS = 0x0201,
    BM_YxyTRIPLETS,
    BM_LabTRIPLETS,
    BM_G3CHTRIPLETS,
    BM_5CHANNEL,
    BM_6CHANNEL,
    BM_7CHANNEL,
    BM_8CHANNEL,
    BM_GRAY,
    BM_xRGBQUADS = 0x0008,
    BM_xBGRQUADS = 0x0010,
    BM_xG3CHQUADS = 0x0304,
    BM_KYMCQUADS,
    BM_CMYKQUADS = 0x0020,
    BM_10b_RGB = 0x0009,
    BM_10b_XYZ = 0x0401,
    BM_10b_Yxy,
    BM_10b_Lab,
    BM_10b_G3CH,
    BM_NAMED_INDEX,
    BM_16b_RGB = 0x000A,
    BM_16b_XYZ = 0x0501,
    BM_16b_Yxy,
    BM_16b_Lab,
    BM_16b_G3CH,
    BM_16b_GRAY,
    BM_565RGB = 0x0001,
    BM_32b_scRGB = 0x0601,
    BM_32b_scARGB = 0x0602,
    BM_S2DOT13FIXED_scRGB = 0x0603,
    BM_S2DOT13FIXED_scARGB = 0x0604,
    BM_R10G10B10A2 = 0x0701,
    BM_R10G10B10A2_XR = 0x0702,
    BM_R16G16B16A16_FLOAT = 0x0703
} BMFORMAT;
typedef BMFORMAT *PBMFORMAT, *LPBMFORMAT;
typedef BOOL (WINAPI *PBMCALLBACKFN)(ULONG, ULONG, LPARAM);
typedef PBMCALLBACKFN LPBMCALLBACKFN;
typedef struct tagPROFILEHEADER {
    DWORD phSize;
    DWORD phCMMType;
    DWORD phVersion;
    DWORD phClass;
    DWORD phDataColorSpace;
    DWORD phConnectionSpace;
    DWORD phDateTime[3];
    DWORD phSignature;
    DWORD phPlatform;
    DWORD phProfileFlags;
    DWORD phManufacturer;
    DWORD phModel;
    DWORD phAttributes[2];
    DWORD phRenderingIntent;
    CIEXYZ phIlluminant;
    DWORD phCreator;
    BYTE phReserved[44];
} PROFILEHEADER;
typedef PROFILEHEADER *PPROFILEHEADER, *LPPROFILEHEADER;
typedef struct tagPROFILE {
    DWORD dwType;
    PVOID pProfileData;
    DWORD cbDataSize;
} PROFILE;
typedef PROFILE *PPROFILE, *LPPROFILE;
typedef HANDLE HPROFILE;
typedef HPROFILE *PHPROFILE;
typedef HANDLE HTRANSFORM;
typedef DWORD TAGTYPE;
typedef TAGTYPE *PTAGTYPE, *LPTAGTYPE;
typedef struct tagENUMTYPEA {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFields;
    PCSTR pDeviceName;
    DWORD dwMediaType;
    DWORD dwDitheringMode;
    DWORD dwResolution[2];
    DWORD dwCMMType;
    DWORD dwClass;
    DWORD dwDataColorSpace;
    DWORD dwConnectionSpace;
    DWORD dwSignature;
    DWORD dwPlatform;
    DWORD dwProfileFlags;
    DWORD dwManufacturer;
    DWORD dwModel;
    DWORD dwAttributes[2];
    DWORD dwRenderingIntent;
    DWORD dwCreator;
    DWORD dwDeviceClass;
} ENUMTYPEA, *PENUMTYPEA, *LPENUMTYPEA;
typedef struct tagENUMTYPEW {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFields;
    PCWSTR pDeviceName;
    DWORD dwMediaType;
    DWORD dwDitheringMode;
    DWORD dwResolution[2];
    DWORD dwCMMType;
    DWORD dwClass;
    DWORD dwDataColorSpace;
    DWORD dwConnectionSpace;
    DWORD dwSignature;
    DWORD dwPlatform;
    DWORD dwProfileFlags;
    DWORD dwManufacturer;
    DWORD dwModel;
    DWORD dwAttributes[2];
    DWORD dwRenderingIntent;
    DWORD dwCreator;
    DWORD dwDeviceClass;
} ENUMTYPEW, *PENUMTYPEW, *LPENUMTYPEW;
#pragma endregion
#pragma region Modern Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef enum
{
    WCS_PROFILE_MANAGEMENT_SCOPE_SYSTEM_WIDE,
    WCS_PROFILE_MANAGEMENT_SCOPE_CURRENT_USER
} WCS_PROFILE_MANAGEMENT_SCOPE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
struct _tagCOLORMATCHSETUPW;
struct _tagCOLORMATCHSETUPA;
typedef BOOL (WINAPI *PCMSCALLBACKW)(struct _tagCOLORMATCHSETUPW *,LPARAM);
typedef BOOL (WINAPI *PCMSCALLBACKA)(struct _tagCOLORMATCHSETUPA *,LPARAM);
typedef struct _tagCOLORMATCHSETUPW {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFlags;
    HWND hwndOwner;
    PCWSTR pSourceName;
    PCWSTR pDisplayName;
    PCWSTR pPrinterName;
    DWORD dwRenderIntent;
    DWORD dwProofingIntent;
    PWSTR pMonitorProfile;
    DWORD ccMonitorProfile;
    PWSTR pPrinterProfile;
    DWORD ccPrinterProfile;
    PWSTR pTargetProfile;
    DWORD ccTargetProfile;
    DLGPROC lpfnHook;
    LPARAM lParam;
    PCMSCALLBACKW lpfnApplyCallback;
    LPARAM lParamApplyCallback;
} COLORMATCHSETUPW, *PCOLORMATCHSETUPW, *LPCOLORMATCHSETUPW;
typedef struct _tagCOLORMATCHSETUPA {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFlags;
    HWND hwndOwner;
    PCSTR pSourceName;
    PCSTR pDisplayName;
    PCSTR pPrinterName;
    DWORD dwRenderIntent;
    DWORD dwProofingIntent;
    PSTR pMonitorProfile;
    DWORD ccMonitorProfile;
    PSTR pPrinterProfile;
    DWORD ccPrinterProfile;
    PSTR pTargetProfile;
    DWORD ccTargetProfile;
    DLGPROC lpfnHook;
    LPARAM lParam;
    PCMSCALLBACKA lpfnApplyCallback;
    LPARAM lParamApplyCallback;
} COLORMATCHSETUPA, *PCOLORMATCHSETUPA, *LPCOLORMATCHSETUPA;
HPROFILE WINAPI OpenColorProfileA(_In_ PPROFILE pProfile, DWORD dwDesiredAccess, DWORD dwShareMode, DWORD dwCreationMode);
HPROFILE WINAPI OpenColorProfileW(_In_ PPROFILE pProfile, DWORD dwDesiredAccess, DWORD dwShareMode, DWORD dwCreationMode);
BOOL WINAPI CloseColorProfile(_In_opt_ HPROFILE hProfile);
BOOL WINAPI GetColorProfileFromHandle(_In_ HPROFILE hProfile, _Out_writes_bytes_opt_(*pcbProfile) PBYTE pProfile, _Inout_ PDWORD pcbProfile);
BOOL WINAPI IsColorProfileValid(_In_ HPROFILE hProfile, _Out_ PBOOL pbValid);
BOOL WINAPI CreateProfileFromLogColorSpaceA(_In_ LPLOGCOLORSPACEA pLogColorSpace, _Outptr_result_buffer_(_Inexpressible_(GlobalSize(*pProfile))) PBYTE* pProfile);
BOOL WINAPI CreateProfileFromLogColorSpaceW(_In_ LPLOGCOLORSPACEW pLogColorSpace, _Outptr_result_buffer_(_Inexpressible_(GlobalSize(*pProfile))) PBYTE* pProfile);
BOOL WINAPI GetCountColorProfileElements(_In_ HPROFILE hProfile, _Out_ PDWORD pnElementCount);
BOOL WINAPI GetColorProfileHeader(_In_ HPROFILE hProfile, _Out_ PPROFILEHEADER pHeader);
BOOL WINAPI GetColorProfileElementTag(_In_ HPROFILE hProfile, DWORD dwIndex, _Out_ PTAGTYPE pTag);
BOOL WINAPI IsColorProfileTagPresent(_In_ HPROFILE hProfile, TAGTYPE tag, _Out_ PBOOL pbPresent);
BOOL WINAPI GetColorProfileElement(_In_ HPROFILE hProfile, TAGTYPE tag, DWORD dwOffset, _Inout_ PDWORD pcbElement, _Out_writes_bytes_opt_(*pcbElement) PVOID pElement, _Out_ PBOOL pbReference);
BOOL WINAPI SetColorProfileHeader(_In_ HPROFILE hProfile, _In_reads_bytes_(sizeof(PROFILEHEADER)) PPROFILEHEADER pHeader);
BOOL WINAPI SetColorProfileElementSize(_In_ HPROFILE hProfile, TAGTYPE tagType, DWORD pcbElement);
BOOL WINAPI SetColorProfileElement(_In_ HPROFILE hProfile, TAGTYPE tag, DWORD dwOffset, _In_ PDWORD pcbElement, _In_reads_(*pcbElement) PVOID pElement);
BOOL WINAPI SetColorProfileElementReference(_In_ HPROFILE hProfile, TAGTYPE newTag, TAGTYPE refTag);
BOOL WINAPI GetPS2ColorSpaceArray(_In_ HPROFILE hProfile, DWORD dwIntent, DWORD dwCSAType, _Out_writes_bytes_opt_(*pcbPS2ColorSpaceArray) PBYTE pPS2ColorSpaceArray, _Inout_ PDWORD pcbPS2ColorSpaceArray, _Out_ PBOOL pbBinary);
BOOL WINAPI GetPS2ColorRenderingIntent(_In_ HPROFILE hProfile, DWORD dwIntent, _Out_writes_bytes_opt_(*pcbPS2ColorRenderingIntent) PBYTE pBuffer, _Inout_ PDWORD pcbPS2ColorRenderingIntent);
BOOL WINAPI GetPS2ColorRenderingDictionary(_In_ HPROFILE hProfile, DWORD dwIntent, _Out_writes_bytes_opt_(*pcbPS2ColorRenderingDictionary) PBYTE pPS2ColorRenderingDictionary, _Inout_ PDWORD pcbPS2ColorRenderingDictionary, _Inout_ PBOOL pbBinary);
BOOL WINAPI GetNamedProfileInfo(_In_ HPROFILE hProfile, _Inout_updates_bytes_(sizeof(NAMED_PROFILE_INFO)) PNAMED_PROFILE_INFO pNamedProfileInfo);
BOOL WINAPI ConvertColorNameToIndex(_In_ HPROFILE hProfile, _In_reads_(dwCount) PCOLOR_NAME paColorName, _Out_writes_(dwCount) PDWORD paIndex, DWORD dwCount);
BOOL WINAPI ConvertIndexToColorName(_In_ HPROFILE hProfile, _In_reads_(dwCount) PDWORD paIndex, _Out_writes_(dwCount) PCOLOR_NAME paColorName, DWORD dwCount);
BOOL WINAPI CreateDeviceLinkProfile(_In_reads_(nProfiles) PHPROFILE hProfile, DWORD nProfiles, _In_reads_(nIntents) PDWORD padwIntent, DWORD nIntents, DWORD dwFlags, _Outptr_result_buffer_(_Inexpressible_(GlobalSize(*pProfileData))) PBYTE* pProfileData, DWORD indexPreferredCMM);
HTRANSFORM WINAPI CreateColorTransformA(_In_ LPLOGCOLORSPACEA pLogColorSpace, _In_ HPROFILE hDestProfile, _In_ HPROFILE hTargetProfile, DWORD dwFlags);
HTRANSFORM WINAPI CreateColorTransformW(_In_ LPLOGCOLORSPACEW pLogColorSpace, _In_ HPROFILE hDestProfile, _In_ HPROFILE hTargetProfile, DWORD dwFlags);
HTRANSFORM WINAPI CreateMultiProfileTransform(_In_reads_(nProfiles) PHPROFILE pahProfiles, DWORD nProfiles, _In_reads_(nIntents) PDWORD padwIntent, DWORD nIntents, DWORD dwFlags, DWORD indexPreferredCMM);
BOOL WINAPI DeleteColorTransform(_Inout_ HTRANSFORM hxform);
BOOL WINAPI TranslateBitmapBits(_In_ HTRANSFORM hColorTransform, _In_ PVOID pSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwInputStride, _Out_ PVOID pDestBits, BMFORMAT bmOutput, DWORD dwOutputStride, _In_opt_ __callback PBMCALLBACKFN pfnCallBack, _In_opt_ LPARAM ulCallbackData);
BOOL WINAPI CheckBitmapBits(_In_ HTRANSFORM hColorTransform, _In_ PVOID pSrcBits, BMFORMAT bmInput, DWORD dwWidth, DWORD dwHeight, DWORD dwStride, _Out_writes_(dwWidth * dwHeight) PBYTE paResult, _In_opt_ __callback PBMCALLBACKFN pfnCallback, _In_opt_ LPARAM lpCallbackData);
BOOL WINAPI TranslateColors(_In_ HTRANSFORM hColorTransform, _In_reads_(nColors) PCOLOR paInputColors, DWORD nColors, COLORTYPE ctInput, _Out_writes_(nColors) PCOLOR paOutputColors, COLORTYPE ctOutput);
BOOL WINAPI CheckColors(_In_ HTRANSFORM hColorTransform, _In_reads_(nColors) PCOLOR paInputColors, DWORD nColors, COLORTYPE ctInput, _Out_writes_(nColors) PBYTE paResult);
DWORD WINAPI GetCMMInfo(_In_ HTRANSFORM hColorTransform, _In_ DWORD);
BOOL WINAPI RegisterCMMA(_In_opt_ PCSTR pMachineName, _In_ DWORD cmmID, _In_ PCSTR pCMMdll);
BOOL WINAPI RegisterCMMW(_In_opt_ PCWSTR pMachineName, _In_ DWORD cmmID, _In_ PCWSTR pCMMdll);
BOOL WINAPI UnregisterCMMA(_In_opt_ PCSTR pMachineName, _In_ DWORD cmmID);
BOOL WINAPI UnregisterCMMW(_In_opt_ PCWSTR pMachineName, _In_ DWORD cmmID);
BOOL WINAPI SelectCMM(DWORD dwCMMType);
BOOL
WINAPI
GetColorDirectoryA(
    _In_opt_ PCSTR pMachineName,
    _Out_writes_bytes_to_opt_(*pdwSize, *pdwSize) PSTR pBuffer,
    _Inout_ PDWORD pdwSize
    );
BOOL
WINAPI
GetColorDirectoryW(
    _In_opt_ PCWSTR pMachineName,
    _Out_writes_bytes_to_opt_(*pdwSize, *pdwSize) PWSTR pBuffer,
    _Inout_ PDWORD pdwSize
    );
#endif
#pragma endregion
#pragma region Modern Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
BOOL WINAPI InstallColorProfileA(_In_opt_ PCSTR pMachineName, _In_ PCSTR pProfileName);
BOOL WINAPI InstallColorProfileW(_In_opt_ PCWSTR pMachineName, _In_ PCWSTR pProfileName);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOL WINAPI UninstallColorProfileA(_In_opt_ PCSTR pMachineName, _In_ PCSTR pProfileName, BOOL bDelete);
BOOL WINAPI UninstallColorProfileW(_In_opt_ PCWSTR pMachineName, _In_ PCWSTR pProfileName, BOOL bDelete);
BOOL WINAPI EnumColorProfilesA(_In_opt_ PCSTR pMachineName, _In_ PENUMTYPEA pEnumRecord, _Out_writes_bytes_opt_(*pdwSizeOfEnumerationBuffer) PBYTE pEnumerationBuffer, _Inout_ PDWORD pdwSizeOfEnumerationBuffer, _Out_opt_ PDWORD pnProfiles);
BOOL WINAPI EnumColorProfilesW(_In_opt_ PCWSTR pMachineName, _In_ PENUMTYPEW pEnumRecord, _Out_writes_bytes_opt_(*pdwSizeOfEnumerationBuffer) PBYTE pEnumerationBuffer, _Inout_ PDWORD pdwSizeOfEnumerationBuffer, _Out_opt_ PDWORD pnProfiles);
BOOL WINAPI SetStandardColorSpaceProfileA(_In_opt_ PCSTR pMachineName, DWORD dwProfileID, _In_ PCSTR pProfilename);
BOOL WINAPI SetStandardColorSpaceProfileW(_In_opt_ PCWSTR pMachineName, DWORD dwProfileID, _In_ PCWSTR pProfileName);
_Success_(return != FALSE)
BOOL
WINAPI
GetStandardColorSpaceProfileA(
    _In_opt_ PCSTR pMachineName,
    _In_ DWORD dwSCS,
    _Out_writes_bytes_to_opt_(*pcbSize, *pcbSize) PSTR pBuffer,
    _Inout_ PDWORD pcbSize
    );
_Success_(return != FALSE)
BOOL
WINAPI
GetStandardColorSpaceProfileW(
    _In_opt_ PCWSTR pMachineName,
    _In_ DWORD dwSCS,
    _Out_writes_bytes_to_opt_(*pcbSize, *pcbSize) PWSTR pBuffer,
    _Inout_ PDWORD pcbSize
    );
BOOL WINAPI AssociateColorProfileWithDeviceA(_In_opt_ PCSTR pMachineName, _In_ PCSTR pProfileName, _In_ PCSTR pDeviceName);
BOOL WINAPI AssociateColorProfileWithDeviceW(_In_opt_ PCWSTR pMachineName, _In_ PCWSTR pProfileName, _In_ PCWSTR pDeviceName);
BOOL WINAPI DisassociateColorProfileFromDeviceA(_In_opt_ PCSTR pMachineName, _In_ PCSTR pProfileName, _In_ PCSTR pDeviceName);
BOOL WINAPI DisassociateColorProfileFromDeviceW(_In_opt_ PCWSTR pMachineName, _In_ PCWSTR pProfileName, _In_ PCWSTR pDeviceName);
BOOL WINAPI SetupColorMatchingW(_Inout_updates_bytes_(sizeof(COLORMATCHSETUPW)) PCOLORMATCHSETUPW pcms);
BOOL WINAPI SetupColorMatchingA(_Inout_updates_bytes_(sizeof(COLORMATCHSETUPA)) PCOLORMATCHSETUPA pcms);
BOOL
WINAPI
WcsAssociateColorProfileWithDevice(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PCWSTR pProfileName,
    _In_ PCWSTR pDeviceName
    );
BOOL
WINAPI
WcsDisassociateColorProfileFromDevice(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PCWSTR pProfileName,
    _In_ PCWSTR pDeviceName
    );
BOOL
WINAPI
WcsEnumColorProfilesSize(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PENUMTYPEW pEnumRecord,
    _Out_ PDWORD pdwSize
    );
BOOL
WINAPI
WcsEnumColorProfiles(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PENUMTYPEW pEnumRecord,
    _Out_writes_bytes_(dwSize) PBYTE pBuffer,
    _In_ DWORD dwSize,
    _Out_opt_ PDWORD pnProfiles
    );
BOOL
WINAPI
WcsGetDefaultColorProfileSize(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_opt_ PCWSTR pDeviceName,
    _In_ COLORPROFILETYPE cptColorProfileType,
    _In_ COLORPROFILESUBTYPE cpstColorProfileSubType,
    _In_ DWORD dwProfileID,
    _Out_ PDWORD pcbProfileName
    );
BOOL
WINAPI
WcsGetDefaultColorProfile(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_opt_ PCWSTR pDeviceName,
    _In_ COLORPROFILETYPE cptColorProfileType,
    _In_ COLORPROFILESUBTYPE cpstColorProfileSubType,
    _In_ DWORD dwProfileID,
    _In_ DWORD cbProfileName,
    _Out_writes_bytes_(cbProfileName) LPWSTR pProfileName
    );
BOOL
WINAPI
WcsSetDefaultColorProfile(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_opt_ PCWSTR pDeviceName,
    _In_ COLORPROFILETYPE cptColorProfileType,
    _In_ COLORPROFILESUBTYPE cpstColorProfileSubType,
    _In_ DWORD dwProfileID,
    _In_opt_ LPCWSTR pProfileName
    );
BOOL
WINAPI
WcsSetDefaultRenderingIntent(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ DWORD dwRenderingIntent
    );
BOOL
WINAPI
WcsGetDefaultRenderingIntent(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _Out_ PDWORD pdwRenderingIntent
    );
BOOL
WINAPI
WcsGetUsePerUserProfiles(
    _In_ LPCWSTR pDeviceName,
    _In_ DWORD dwDeviceClass,
    _Out_ PBOOL pUsePerUserProfiles
    );
BOOL
WINAPI
WcsSetUsePerUserProfiles(
    _In_ LPCWSTR pDeviceName,
    _In_ DWORD dwDeviceClass,
    _In_ BOOL usePerUserProfiles
    );
BOOL
WINAPI
WcsTranslateColors(
    _In_ HTRANSFORM hColorTransform,
    _In_ DWORD nColors,
    _In_ DWORD nInputChannels,
    _In_ COLORDATATYPE cdtInput,
    _In_ DWORD cbInput,
    _In_reads_bytes_(cbInput) PVOID pInputData,
    _In_ DWORD nOutputChannels,
    _In_ COLORDATATYPE cdtOutput,
    _In_ DWORD cbOutput,
    _Out_writes_bytes_(cbOutput) PVOID pOutputData
    );
BOOL
WINAPI
WcsCheckColors(
    _In_ HTRANSFORM hColorTransform,
    _In_ DWORD nColors,
    _In_ DWORD nInputChannels,
    _In_ COLORDATATYPE cdtInput,
    _In_ DWORD cbInput,
    _In_reads_bytes_(cbInput) PVOID pInputData,
    _Out_writes_(nColors) PBYTE paResult
    );
#pragma deprecated (SetupColorMatchingA)
#pragma deprecated (SetupColorMatchingW)
typedef HANDLE HCMTRANSFORM;
typedef PVOID LPDEVCHARACTER;
BOOL WINAPI CMCheckColors(
    _In_ HCMTRANSFORM hcmTransform,
    _In_reads_(nColors) LPCOLOR lpaInputColors,
                            DWORD nColors,
                            COLORTYPE ctInput,
    _Out_writes_(nColors) LPBYTE lpaResult
    );
BOOL WINAPI CMCheckRGBs(
    _In_ HCMTRANSFORM hcmTransform,
    _In_ LPVOID lpSrcBits,
                                        BMFORMAT bmInput,
                                        DWORD dwWidth,
                                        DWORD dwHeight,
                                        DWORD dwStride,
    _Out_writes_(dwWidth * dwHeight) LPBYTE lpaResult,
    __callback PBMCALLBACKFN pfnCallback,
                                        LPARAM ulCallbackData
    );
BOOL WINAPI CMConvertColorNameToIndex(
    _In_ HPROFILE hProfile,
    _In_reads_(dwCount) PCOLOR_NAME paColorName,
    _Out_writes_(dwCount) PDWORD paIndex,
                          DWORD dwCount
    );
BOOL WINAPI CMConvertIndexToColorName(
    _In_ HPROFILE hProfile,
    _In_reads_(dwCount) PDWORD paIndex,
    _Out_writes_(dwCount) PCOLOR_NAME paColorName,
                          DWORD dwCount
    );
BOOL WINAPI CMCreateDeviceLinkProfile(
    _In_reads_(nProfiles) PHPROFILE pahProfiles,
                                                    DWORD nProfiles,
    _In_reads_(nIntents) PDWORD padwIntents,
                                                    DWORD nIntents,
                                                    DWORD dwFlags,
    _Outptr_result_buffer_(_Inexpressible_(GlobalSize(*lpProfileData))) LPBYTE *lpProfileData
    );
HCMTRANSFORM WINAPI CMCreateMultiProfileTransform(
    _In_reads_(nProfiles) PHPROFILE pahProfiles,
                           DWORD nProfiles,
    _In_reads_(nIntents) PDWORD padwIntents,
                           DWORD nIntents,
                           DWORD dwFlags
    );
BOOL WINAPI CMCreateProfileW(
    _Inout_ LPLOGCOLORSPACEW lpColorSpace,
    _Out_ LPDEVCHARACTER *lpProfileData
    );
HCMTRANSFORM WINAPI CMCreateTransform(
    _In_ LPLOGCOLORSPACEA lpColorSpace,
    _In_ LPDEVCHARACTER lpDevCharacter,
    _In_ LPDEVCHARACTER lpTargetDevCharacter
    );
HCMTRANSFORM WINAPI CMCreateTransformW(
    _In_ LPLOGCOLORSPACEW lpColorSpace,
    _In_ LPDEVCHARACTER lpDevCharacter,
    _In_ LPDEVCHARACTER lpTargetDevCharacter
    );
HCMTRANSFORM WINAPI CMCreateTransformExt(
    _In_ LPLOGCOLORSPACEA lpColorSpace,
    _In_ LPDEVCHARACTER lpDevCharacter,
    _In_ LPDEVCHARACTER lpTargetDevCharacter,
    _In_ DWORD dwFlags
    );
BOOL WINAPI CMCheckColorsInGamut(
    _In_ HCMTRANSFORM hcmTransform,
    _In_reads_(nCount) RGBTRIPLE *lpaRGBTriple,
    _Out_writes_bytes_(nCount) LPBYTE lpaResult,
                         UINT nCount
    );
BOOL WINAPI CMCreateProfile(
    _Inout_ LPLOGCOLORSPACEA lpColorSpace,
    _Out_ LPDEVCHARACTER *lpProfileData
    );
BOOL WINAPI CMTranslateRGB(
    _In_ HCMTRANSFORM hcmTransform,
          COLORREF ColorRef,
    _Out_ LPCOLORREF lpColorRef,
          DWORD dwFlags
    );
BOOL WINAPI CMTranslateRGBs(
    _In_ HCMTRANSFORM hcmTransform,
    _In_ LPVOID lpSrcBits,
          BMFORMAT bmInput,
          DWORD dwWidth,
          DWORD dwHeight,
          DWORD dwStride,
    _Out_ LPVOID lpDestBits,
          BMFORMAT bmOutput,
          DWORD dwTranslateDirection
    );
#pragma deprecated (CMCreateTransform)
#pragma deprecated (CMCreateTransformW)
#pragma deprecated (CMCreateTransformExt)
#pragma deprecated (CMCheckColorsInGamut)
#pragma deprecated (CMCreateProfile)
#pragma deprecated (CMTranslateRGB)
HCMTRANSFORM WINAPI CMCreateTransformExtW(
         _In_ LPLOGCOLORSPACEW lpColorSpace,
         _In_ LPDEVCHARACTER lpDevCharacter,
         _In_ LPDEVCHARACTER lpTargetDevCharacter,
         _In_ DWORD dwFlags
    );
BOOL WINAPI CMDeleteTransform(
    _Inout_ HCMTRANSFORM hcmTransform
    );
DWORD WINAPI CMGetInfo(
    DWORD dwInfo
    );
BOOL WINAPI CMGetNamedProfileInfo(
    _In_ HPROFILE hProfile,
    _Inout_ PNAMED_PROFILE_INFO pNamedProfileInfo
    );
BOOL WINAPI CMGetPS2ColorRenderingDictionary(
    _In_ HPROFILE hProfile,
                                DWORD dwIntent,
    _Out_writes_bytes_opt_(*lpcbSize) LPBYTE lpBuffer,
    _Inout_ LPDWORD lpcbSize,
    _Inout_ LPBOOL lpbBinary
    );
BOOL WINAPI CMGetPS2ColorRenderingIntent(
    _In_ HPROFILE hProfile,
                                DWORD dwIntent,
    _Out_writes_bytes_opt_(*lpcbSize) LPBYTE lpBuffer,
    _Inout_ LPDWORD lpcbSize
    );
BOOL WINAPI CMGetPS2ColorSpaceArray(
    _In_ HPROFILE hProfile,
                                DWORD dwIntent,
                                DWORD dwCSAType,
    _Out_writes_bytes_opt_(*lpcbSize) LPBYTE lpBuffer,
    _Inout_ LPDWORD lpcbSize,
    _Inout_ LPBOOL lpbBinary
    );
BOOL WINAPI CMIsProfileValid(
    _In_ HPROFILE hProfile,
    _Out_ LPBOOL lpbValid
    );
BOOL WINAPI CMTranslateColors(
    _In_ HCMTRANSFORM hcmTransform,
    _In_reads_(nColors) LPCOLOR lpaInputColors,
                          DWORD nColors,
                          COLORTYPE ctInput,
    _Out_writes_(nColors) LPCOLOR lpaOutputColors,
                          COLORTYPE ctOutput
    );
BOOL WINAPI CMTranslateRGBsExt(
    _In_ HCMTRANSFORM hcmTransform,
    _In_ LPVOID lpSrcBits,
               BMFORMAT bmInput,
               DWORD dwWidth,
               DWORD dwHeight,
               DWORD dwInputStride,
    _Out_ LPVOID lpDestBits,
               BMFORMAT bmOutput,
               DWORD dwOutputStride,
    __callback LPBMCALLBACKFN lpfnCallback,
               LPARAM ulCallbackData
    );
HPROFILE WINAPI WcsOpenColorProfileA(
    _In_ PPROFILE pCDMPProfile,
    _In_opt_ PPROFILE pCAMPProfile,
    _In_opt_ PPROFILE pGMMPProfile,
    _In_ DWORD dwDesireAccess,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwCreationMode,
    _In_ DWORD dwFlags
    );
HPROFILE WINAPI WcsOpenColorProfileW(
    _In_ PPROFILE pCDMPProfile,
    _In_opt_ PPROFILE pCAMPProfile,
    _In_opt_ PPROFILE pGMMPProfile,
    _In_ DWORD dwDesireAccess,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwCreationMode,
    _In_ DWORD dwFlags
    );
HPROFILE WINAPI WcsCreateIccProfile(
    _In_ HPROFILE hWcsProfile,
    _In_ DWORD dwOptions
    );
BOOL WINAPI WcsGetCalibrationManagementState (
    _Out_ BOOL *pbIsEnabled
    );
BOOL WINAPI WcsSetCalibrationManagementState (
    _In_ BOOL bIsEnabled
    );
#endif
#pragma endregion
#pragma region Modern Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct XYYPoint
{
    float x;
    float y;
    float Y;
} XYYPoint;
typedef struct WhitePoint
{
    enum {CHROMATICITY,TEMPERATURE,D65} type;
    union
    {
        XYYPoint xyY;
        float CCT;
    };
} WhitePoint;
typedef struct DisplayID
{
    LUID targetAdapterID;
    UINT32 sourceInfoID;
} DisplayID;
typedef struct DisplayStateID
{
    UINT32 profileID;
    UINT32 transformID;
    UINT32 whitepointID;
} DisplayStateID;
typedef struct DisplayTransformLut
{
    UINT16 red[256];
    UINT16 green[256];
    UINT16 blue[256];
} DisplayTransformLut;
HRESULT WINAPI ColorAdapterGetSystemModifyWhitePointCaps(
    _Out_ BOOL* whitePointAdjCapable,
    _Out_ BOOL* isColorOverrideActive
);
HRESULT WINAPI ColorAdapterUpdateDisplayGamma(
    _In_ DisplayID displayID,
    _In_ DisplayTransformLut* displayTransform,
    _In_ BOOL internal
);
HRESULT WINAPI ColorAdapterUpdateDeviceProfile(
    _In_ DisplayID displayID,
    _In_ LPWSTR profName
);
HRESULT WINAPI ColorAdapterGetDisplayCurrentStateID(
    _In_ DisplayID displayID,
    _Out_ DisplayStateID* displayStateID
);
HRESULT WINAPI ColorAdapterGetDisplayTransformData(
    _In_ DisplayID displayID,
    _Out_ DisplayTransformLut* displayTransformLut,
    _Out_ UINT32* transformID
);
HRESULT WINAPI ColorAdapterGetDisplayTargetWhitePoint(
    _In_ DisplayID displayID,
    _Out_ WhitePoint* wtpt,
    _Out_ UINT32* transitionTime,
    _Out_ UINT32* whitepointID
);
HRESULT WINAPI ColorAdapterGetDisplayProfile(
    _In_ DisplayID displayID,
    _Out_writes_(COLORADAPTER_PROFILE_NAME_MAX_LENGTH) LPWSTR displayProfile,
    _Out_ UINT32* profileID,
    _Out_ BOOL* bUseAccurate
);
HRESULT WINAPI ColorAdapterGetCurrentProfileCalibration(
    _In_ DisplayID displayID,
    _In_ DWORD maxCalibrationBlobSize,
    _Out_ UINT32* blobSize,
    _Out_writes_bytes_(*blobSize) BYTE* calibrationBlob
);
HRESULT WINAPI ColorAdapterRegisterOEMColorService(
    _Out_ HANDLE* registration
);
HRESULT WINAPI ColorAdapterUnregisterOEMColorService(
    _In_ HANDLE registration
);
HRESULT WINAPI ColorProfileAddDisplayAssociation(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PCWSTR profileName,
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID,
    _In_ BOOL setAsDefault,
    _In_ BOOL associateAsAdvancedColor
);
HRESULT WINAPI ColorProfileRemoveDisplayAssociation(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PCWSTR profileName,
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID,
    _In_ BOOL dissociateAdvancedColor
);
HRESULT WINAPI ColorProfileSetDisplayDefaultAssociation(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ PCWSTR profileName,
    _In_ COLORPROFILETYPE profileType,
    _In_ COLORPROFILESUBTYPE profileSubType,
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID
);
HRESULT WINAPI ColorProfileGetDisplayList(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID,
    _Outptr_ LPWSTR** profileList,
    _Out_ PDWORD profileCount
);
HRESULT WINAPI ColorProfileGetDisplayDefault(
    _In_ WCS_PROFILE_MANAGEMENT_SCOPE scope,
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID,
    _In_ COLORPROFILETYPE profileType,
    _In_ COLORPROFILESUBTYPE profileSubType,
    _Outptr_ LPWSTR* profileName
);
HRESULT WINAPI ColorProfileGetDisplayUserScope(
    _In_ LUID targetAdapterID,
    _In_ UINT32 sourceID,
    _Out_ WCS_PROFILE_MANAGEMENT_SCOPE *scope
);
#endif
#pragma endregion
}

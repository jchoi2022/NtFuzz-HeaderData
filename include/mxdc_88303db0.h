#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum tagMxdcLandscapeRotationEnums
{
    MXDC_LANDSCAPE_ROTATE_COUNTERCLOCKWISE_90_DEGREES = 90,
    MXDC_LANDSCAPE_ROTATE_NONE = 0,
    MXDC_LANDSCAPE_ROTATE_COUNTERCLOCKWISE_270_DEGREES = -90
} MXDC_LANDSCAPE_ROTATION_ENUMS;
typedef enum tagMxdcImageTypeEnums
{
    MXDC_IMAGETYPE_JPEGHIGH_COMPRESSION = 1,
    MXDC_IMAGETYPE_JPEGMEDIUM_COMPRESSION = 2,
    MXDC_IMAGETYPE_JPEGLOW_COMPRESSION = 3,
    MXDC_IMAGETYPE_PNG = 4
} MXDC_IMAGE_TYPE_ENUMS;
HRESULT WINAPI
MxdcGetPDEVAdjustment(
    _In_ HANDLE hPrinter,
    ULONG cbDevMode,
    _In_reads_bytes_(cbDevMode) const DEVMODE *pDevMode,
    ULONG cbIn,
    _In_reads_bytes_opt_(cbIn) const VOID *pvIn,
    ULONG cbPrintPropertiesCollection,
    _Inout_updates_bytes_(cbPrintPropertiesCollection) PrintPropertiesCollection *pPrintPropertiesCollection
    );
#pragma pack(1)
typedef struct tagMxdcEscapeHeader
{
    ULONG cbInput;
    ULONG cbOutput;
    ULONG opCode;
} MXDC_ESCAPE_HEADER_T, * P_MXDC_ESCAPE_HEADER_T;
typedef struct tagMxdcGetFileNameData
{
    ULONG cbOutput;
    wchar_t wszData[1];
} MXDC_GET_FILENAME_DATA_T, * P_MXDC_GET_FILENAME_DATA_T;
typedef struct tagMxdcS0PageData
{
    DWORD dwSize;
    BYTE bData[1];
} MXDC_S0PAGE_DATA_T, * P_MXDC_S0PAGE_DATA_T;
typedef enum tagMxdcS0PageEnums
{
    MXDC_RESOURCE_TTF = 0,
    MXDC_RESOURCE_JPEG = 1,
    MXDC_RESOURCE_PNG = 2,
    MXDC_RESOURCE_TIFF = 3,
    MXDC_RESOURCE_WDP = 4,
    MXDC_RESOURCE_DICTIONARY = 5,
    MXDC_RESOURCE_ICC_PROFILE = 6,
    MXDC_RESOURCE_JPEG_THUMBNAIL = 7,
    MXDC_RESOURCE_PNG_THUMBNAIL = 8,
    MXDC_RESOURCE_MAX
} MXDC_S0_PAGE_ENUMS;
typedef struct tagMxdcXpsS0PageResource
{
    DWORD dwSize;
    DWORD dwResourceType;
    BYTE szUri[MAX_PATH];
    DWORD dwDataSize;
    BYTE bData[1];
} MXDC_XPS_S0PAGE_RESOURCE_T, * P_MXDC_XPS_S0PAGE_RESOURCE_T;
typedef struct tagMxdcPrintTicketPassthrough
{
    DWORD dwDataSize;
    BYTE bData[1];
} MXDC_PRINTTICKET_DATA_T, * P_MXDC_PRINTTICKET_DATA_T;
typedef struct tagMxdcPrintTicketEscape
{
    MXDC_ESCAPE_HEADER_T mxdcEscape;
    MXDC_PRINTTICKET_DATA_T printTicketData;
} MXDC_PRINTTICKET_ESCAPE_T, * P_MXDC_PRINTTICKET_ESCAPE_T;
typedef struct tagMxdcS0PagePassthroughEscape
{
    MXDC_ESCAPE_HEADER_T mxdcEscape;
    MXDC_S0PAGE_DATA_T xpsS0PageData;
} MXDC_S0PAGE_PASSTHROUGH_ESCAPE_T, * P_MXDC_S0PAGE_PASSTHROUGH_ESCAPE_T;
typedef struct tagMxdcS0PageResourceEscape
{
    MXDC_ESCAPE_HEADER_T mxdcEscape;
    MXDC_XPS_S0PAGE_RESOURCE_T xpsS0PageResourcePassthrough;
} MXDC_S0PAGE_RESOURCE_ESCAPE_T, * P_MXDC_S0PAGE_RESOURCE_ESCAPE_T;
#pragma pack()
}
#endif
#pragma endregion

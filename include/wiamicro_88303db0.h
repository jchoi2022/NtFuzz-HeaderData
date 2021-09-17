       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <SCSISCAN.H>
#include <pshpack8.h>
typedef struct _RANGEVALUE {
    LONG lMin;
    LONG lMax;
    LONG lStep;
} RANGEVALUE, *PRANGEVALUE;
typedef struct _SCANWINDOW {
    LONG xPos;
    LONG yPos;
    LONG xExtent;
    LONG yExtent;
} SCANWINDOW, *PSCANWINDOW;
typedef struct _SCANINFO {
    LONG ADF;
    LONG TPA;
    LONG Endorser;
    LONG OpticalXResolution;
    LONG OpticalYResolution;
    LONG BedWidth;
    LONG BedHeight;
    RANGEVALUE IntensityRange;
    RANGEVALUE ContrastRange;
    LONG SupportedCompressionType;
    LONG SupportedDataTypes;
    LONG WidthPixels;
    LONG WidthBytes;
    LONG Lines;
    LONG DataType;
    LONG PixelBits;
    LONG Intensity;
    LONG Contrast;
    LONG Xresolution;
    LONG Yresolution;
    SCANWINDOW Window;
    LONG DitherPattern;
    LONG Negative;
    LONG Mirror;
    LONG AutoBack;
    LONG ColorDitherPattern;
    LONG ToneMap;
    LONG Compression;
    LONG RawDataFormat;
    LONG RawPixelOrder;
    LONG bNeedDataAlignment;
    LONG DelayBetweenRead;
    LONG MaxBufferSize;
    HANDLE DeviceIOHandles[MAX_IO_HANDLES];
    LONG lReserved[MAX_RESERVED];
    VOID *pMicroDriverContext;
}SCANINFO, *PSCANINFO;
typedef struct VAL {
        LONG lVal;
        double dblVal;
        GUID *pGuid;
        PSCANINFO pScanInfo;
        HGLOBAL handle;
        WCHAR **ppButtonNames;
        HANDLE *pHandle;
        LONG lReserved;
        CHAR szVal[MAX_ANSI_CHAR];
}VAL, *PVAL;
WIAMICRO_API HRESULT MicroEntry(LONG lCommand, _Inout_ PVAL pValue);
WIAMICRO_API HRESULT Scan(_Inout_ PSCANINFO pScanInfo, LONG lPhase, _Out_writes_bytes_(lLength) PBYTE pBuffer, LONG lLength, _Out_ LONG *plReceived);
WIAMICRO_API HRESULT SetPixelWindow(_Inout_ PSCANINFO pScanInfo, LONG x, LONG y, LONG xExtent, LONG yExtent);
VOID Trace(_In_ LPCTSTR Format, ...);
#include <poppack.h>
#endif
#pragma endregion

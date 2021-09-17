#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef int DCIRVAL;
typedef struct _DCICMD {
        DWORD dwCommand;
        DWORD dwParam1;
        DWORD dwParam2;
        DWORD dwVersion;
        DWORD dwReserved;
} DCICMD;
typedef struct _DCICREATEINPUT {
        DCICMD cmd;
        DWORD dwCompression;
        DWORD dwMask[3];
        DWORD dwWidth;
        DWORD dwHeight;
        DWORD dwDCICaps;
        DWORD dwBitCount;
        LPVOID lpSurface;
} DCICREATEINPUT, FAR *LPDCICREATEINPUT;
 typedef struct _DCISURFACEINFO {
        DWORD dwSize;
        DWORD dwDCICaps;
        DWORD dwCompression;
        DWORD dwMask[3];
        DWORD dwWidth;
        DWORD dwHeight;
        LONG lStride;
        DWORD dwBitCount;
        ULONG_PTR dwOffSurface;
        WORD wSelSurface;
        WORD wReserved;
        DWORD dwReserved1;
        DWORD dwReserved2;
        DWORD dwReserved3;
        DCIRVAL (CALLBACK *BeginAccess) (LPVOID, LPRECT);
        void (CALLBACK *EndAccess) (LPVOID);
        void (CALLBACK *DestroySurface) (LPVOID);
} DCISURFACEINFO, FAR *LPDCISURFACEINFO;
typedef
void
(*ENUM_CALLBACK) (
    LPDCISURFACEINFO lpSurfaceInfo,
    LPVOID lpContext
    );
typedef struct _DCIENUMINPUT {
        DCICMD cmd;
        RECT rSrc;
        RECT rDst;
        void (CALLBACK *EnumCallback)(LPDCISURFACEINFO, LPVOID);
        LPVOID lpContext;
} DCIENUMINPUT, FAR *LPDCIENUMINPUT;
 typedef DCISURFACEINFO DCIPRIMARY, FAR *LPDCIPRIMARY;
 typedef struct _DCIOFFSCREEN {
        DCISURFACEINFO dciInfo;
        DCIRVAL (CALLBACK *Draw) (LPVOID);
        DCIRVAL (CALLBACK *SetClipList) (LPVOID, LPRGNDATA);
        DCIRVAL (CALLBACK *SetDestination) (LPVOID, LPRECT, LPRECT);
} DCIOFFSCREEN, FAR *LPDCIOFFSCREEN;
 typedef struct _DCIOVERLAY{
        DCISURFACEINFO dciInfo;
        DWORD dwChromakeyValue;
        DWORD dwChromakeyMask;
} DCIOVERLAY, FAR *LPDCIOVERLAY;
#endif
#pragma endregion
}

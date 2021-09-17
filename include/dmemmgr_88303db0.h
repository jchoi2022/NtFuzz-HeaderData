#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef ULONG_PTR FLATPTR;
typedef struct _VIDMEM *LPVIDMEM;
typedef struct _SURFACEALIGNMENT
{
    union
    {
        struct
        {
            DWORD dwStartAlignment;
            DWORD dwPitchAlignment;
            DWORD dwFlags;
            DWORD dwReserved2;
        } Linear;
        struct
        {
            DWORD dwXAlignment;
            DWORD dwYAlignment;
            DWORD dwFlags;
            DWORD dwReserved2;
        } Rectangular;
    };
} SURFACEALIGNMENT;
typedef struct _SURFACEALIGNMENT FAR *LPSURFACEALIGNMENT;
typedef struct _HEAPALIGNMENT
{
    DWORD dwSize;
    DDSCAPS ddsCaps;
    DWORD dwReserved;
    SURFACEALIGNMENT ExecuteBuffer;
    SURFACEALIGNMENT Overlay;
    SURFACEALIGNMENT Texture;
    SURFACEALIGNMENT ZBuffer;
    SURFACEALIGNMENT AlphaBuffer;
    SURFACEALIGNMENT Offscreen;
    SURFACEALIGNMENT FlipTarget;
} HEAPALIGNMENT;
typedef struct _HEAPALIGNMENT FAR *LPHEAPALIGNMENT;
typedef struct _DD_GETHEAPALIGNMENTDATA
{
    ULONG_PTR dwInstance;
    DWORD dwHeap;
    HRESULT ddRVal;
    VOID* GetHeapAlignment;
    HEAPALIGNMENT Alignment;
} DD_GETHEAPALIGNMENTDATA;
typedef struct _DD_GETHEAPALIGNMENTDATA *PDD_GETHEAPALIGNMENTDATA;
typedef struct _VMEML
{
    struct _VMEML FAR *next;
    FLATPTR ptr;
    DWORD size;
    BOOL bDiscardable;
} VMEML, FAR *LPVMEML, FAR * FAR *LPLPVMEML;
typedef struct _VMEMR
{
    struct _VMEMR FAR *next;
    struct _VMEMR FAR *prev;
    struct _VMEMR FAR *pUp;
    struct _VMEMR FAR *pDown;
    struct _VMEMR FAR *pLeft;
    struct _VMEMR FAR *pRight;
    FLATPTR ptr;
    DWORD size;
    DWORD x;
    DWORD y;
    DWORD cx;
    DWORD cy;
    DWORD flags;
    FLATPTR pBits;
    BOOL bDiscardable;
} VMEMR, FAR *LPVMEMR, FAR * FAR *LPLPVMEMR;
typedef struct _VMEMHEAP
{
    DWORD dwFlags;
    DWORD stride;
    LPVOID freeList;
    LPVOID allocList;
    DWORD dwTotalSize;
    FLATPTR fpGARTLin;
    FLATPTR fpGARTDev;
    DWORD dwCommitedSize;
    DWORD dwCoalesceCount;
    HEAPALIGNMENT Alignment;
    DDSCAPSEX ddsCapsEx;
    DDSCAPSEX ddsCapsExAlt;
    LARGE_INTEGER liPhysAGPBase;
    HANDLE hdevAGP;
    LPVOID pvPhysRsrv;
    BYTE* pAgpCommitMask;
    DWORD dwAgpCommitMaskSize;
} VMEMHEAP;
typedef VMEMHEAP FAR *LPVMEMHEAP;
extern FLATPTR WINAPI VidMemAlloc( LPVMEMHEAP pvmh, DWORD width, DWORD height );
extern FLATPTR WINAPI HeapVidMemAllocAligned(
                LPVIDMEM lpVidMem,
                DWORD dwWidth,
                DWORD dwHeight,
                LPSURFACEALIGNMENT lpAlignment ,
                LPLONG lpNewPitch );
extern void WINAPI VidMemFree( LPVMEMHEAP pvmh, FLATPTR ptr );
};
#endif
#pragma endregion

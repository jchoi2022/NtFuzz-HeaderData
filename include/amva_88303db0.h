#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _tag_AMVAUncompBufferInfo
{
 DWORD dwMinNumSurfaces;
 DWORD dwMaxNumSurfaces;
 DDPIXELFORMAT ddUncompPixelFormat;
} AMVAUncompBufferInfo, *LPAMVAUncompBufferInfo;
typedef struct _tag_AMVAUncompDataInfo
{
    DWORD dwUncompWidth;
    DWORD dwUncompHeight;
    DDPIXELFORMAT ddUncompPixelFormat;
} AMVAUncompDataInfo, *LPAMVAUncompDataInfo;
typedef struct _tag_AMVAInternalMemInfo
{
    DWORD dwScratchMemAlloc;
} AMVAInternalMemInfo, *LPAMVAInternalMemInfo;
typedef struct _tag_AMVACompBufferInfo
{
    DWORD dwNumCompBuffers;
    DWORD dwWidthToCreate;
    DWORD dwHeightToCreate;
    DWORD dwBytesToAllocate;
    DDSCAPS2 ddCompCaps;
    DDPIXELFORMAT ddPixelFormat;
} AMVACompBufferInfo, *LPAMVACompBufferInfo;
typedef struct _tag_AMVABeginFrameInfo
{
    DWORD dwDestSurfaceIndex;
    LPVOID pInputData;
    DWORD dwSizeInputData;
    LPVOID pOutputData;
    DWORD dwSizeOutputData;
} AMVABeginFrameInfo, *LPAMVABeginFrameInfo;
typedef struct _tag_AMVAEndFrameInfo
{
    DWORD dwSizeMiscData;
    LPVOID pMiscData;
} AMVAEndFrameInfo, *LPAMVAEndFrameInfo;
typedef struct _tag_AMVABUFFERINFO
{
    DWORD dwTypeIndex;
    DWORD dwBufferIndex;
    DWORD dwDataOffset;
    DWORD dwDataSize;
} AMVABUFFERINFO, *LPAMVABUFFERINFO;
};
#endif
#pragma endregion

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct IDirectDrawKernel FAR *LPDIRECTDRAWKERNEL;
typedef struct IDirectDrawSurfaceKernel FAR *LPDIRECTDRAWSURFACEKERNEL;
typedef struct _DDKERNELCAPS FAR *LPDDKERNELCAPS;
typedef struct _DDKERNELCAPS
{
    DWORD dwSize;
    DWORD dwCaps;
    DWORD dwIRQCaps;
} DDKERNELCAPS, FAR *LPDDKERNELCAPS;
};
#endif
#pragma endregion

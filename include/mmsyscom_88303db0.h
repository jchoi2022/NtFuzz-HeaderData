#include <winapifamily.h>
#pragma warning(disable:4201)
#include <pshpack1.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <macwin32.h>
typedef UINT MMVERSION;
typedef _Return_type_success_( return == 0) UINT MMRESULT;
typedef UINT FAR *LPUINT;
typedef struct mmtime_tag
{
    UINT wType;
    union
    {
        DWORD ms;
        DWORD sample;
        DWORD cb;
        DWORD ticks;
        struct
        {
            BYTE hour;
            BYTE min;
            BYTE sec;
            BYTE frame;
            BYTE fps;
            BYTE dummy;
            BYTE pad[2];
        } smpte;
        struct
        {
            DWORD songptrpos;
        } midi;
    } u;
} MMTIME, *PMMTIME, NEAR *NPMMTIME, FAR *LPMMTIME;
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
 #define MM_DRVM_OPEN 0x3D0
 #define MM_DRVM_CLOSE 0x3D1
 #define MM_DRVM_DATA 0x3D2
 #define MM_DRVM_ERROR 0x3D3
 #define MM_MCISIGNAL 0x3CB
typedef void (CALLBACK DRVCALLBACK)(HDRVR hdrvr, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2);
typedef DRVCALLBACK FAR *LPDRVCALLBACK;
typedef DRVCALLBACK *PDRVCALLBACK;
#endif
#pragma endregion
}
#include <poppack.h>

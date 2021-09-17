       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                 JOY_RETURNR | JOY_RETURNU | JOY_RETURNV | \
                                 JOY_RETURNPOV | JOY_RETURNBUTTONS)
typedef struct tagJOYCAPSA {
    WORD wMid;
    WORD wPid;
    CHAR szPname[MAXPNAMELEN];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    CHAR szRegKey[MAXPNAMELEN];
    CHAR szOEMVxD[MAX_JOYSTICKOEMVXDNAME];
} JOYCAPSA, *PJOYCAPSA, *NPJOYCAPSA, *LPJOYCAPSA;
typedef struct tagJOYCAPSW {
    WORD wMid;
    WORD wPid;
    WCHAR szPname[MAXPNAMELEN];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    WCHAR szRegKey[MAXPNAMELEN];
    WCHAR szOEMVxD[MAX_JOYSTICKOEMVXDNAME];
} JOYCAPSW, *PJOYCAPSW, *NPJOYCAPSW, *LPJOYCAPSW;
typedef JOYCAPSW JOYCAPS;
typedef PJOYCAPSW PJOYCAPS;
typedef NPJOYCAPSW NPJOYCAPS;
typedef LPJOYCAPSW LPJOYCAPS;
typedef struct tagJOYCAPS2A {
    WORD wMid;
    WORD wPid;
    CHAR szPname[MAXPNAMELEN];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    CHAR szRegKey[MAXPNAMELEN];
    CHAR szOEMVxD[MAX_JOYSTICKOEMVXDNAME];
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} JOYCAPS2A, *PJOYCAPS2A, *NPJOYCAPS2A, *LPJOYCAPS2A;
typedef struct tagJOYCAPS2W {
    WORD wMid;
    WORD wPid;
    WCHAR szPname[MAXPNAMELEN];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    WCHAR szRegKey[MAXPNAMELEN];
    WCHAR szOEMVxD[MAX_JOYSTICKOEMVXDNAME];
    GUID ManufacturerGuid;
    GUID ProductGuid;
    GUID NameGuid;
} JOYCAPS2W, *PJOYCAPS2W, *NPJOYCAPS2W, *LPJOYCAPS2W;
typedef JOYCAPS2W JOYCAPS2;
typedef PJOYCAPS2W PJOYCAPS2;
typedef NPJOYCAPS2W NPJOYCAPS2;
typedef LPJOYCAPS2W LPJOYCAPS2;
typedef struct joyinfo_tag {
    UINT wXpos;
    UINT wYpos;
    UINT wZpos;
    UINT wButtons;
} JOYINFO, *PJOYINFO, NEAR *NPJOYINFO, FAR *LPJOYINFO;
typedef struct joyinfoex_tag {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwXpos;
    DWORD dwYpos;
    DWORD dwZpos;
    DWORD dwRpos;
    DWORD dwUpos;
    DWORD dwVpos;
    DWORD dwButtons;
    DWORD dwButtonNumber;
    DWORD dwPOV;
    DWORD dwReserved1;
    DWORD dwReserved2;
} JOYINFOEX, *PJOYINFOEX, NEAR *NPJOYINFOEX, FAR *LPJOYINFOEX;
WINMMAPI
MMRESULT
WINAPI
joyGetPosEx(
    _In_ UINT uJoyID,
    _Out_ LPJOYINFOEX pji
    );
WINMMAPI
UINT
WINAPI
joyGetNumDevs(
    void
    );
WINMMAPI
MMRESULT
WINAPI
joyGetDevCapsA(
    _In_ UINT_PTR uJoyID,
    _Out_writes_bytes_(cbjc) LPJOYCAPSA pjc,
    _In_ UINT cbjc
    );
WINMMAPI
MMRESULT
WINAPI
joyGetDevCapsW(
    _In_ UINT_PTR uJoyID,
    _Out_writes_bytes_(cbjc) LPJOYCAPSW pjc,
    _In_ UINT cbjc
    );
WINMMAPI
MMRESULT
WINAPI
joyGetPos(
    _In_ UINT uJoyID,
    _Out_ LPJOYINFO pji
    );
WINMMAPI
MMRESULT
WINAPI
joyGetThreshold(
    _In_ UINT uJoyID,
    _Out_ LPUINT puThreshold
    );
WINMMAPI
MMRESULT
WINAPI
joyReleaseCapture(
    _In_ UINT uJoyID
    );
WINMMAPI
MMRESULT
WINAPI
joySetCapture(
    _In_ HWND hwnd,
    _In_ UINT uJoyID,
    _In_ UINT uPeriod,
    _In_ BOOL fChanged
    );
WINMMAPI
MMRESULT
WINAPI
joySetThreshold(
    _In_ UINT uJoyID,
    _In_ UINT uThreshold
    );
WINMMAPI
MMRESULT
WINAPI
joyConfigChanged(
    _In_ DWORD dwFlags
    );
#endif
#pragma endregion
}

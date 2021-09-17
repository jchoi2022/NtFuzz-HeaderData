       
#include <apiset.h>
#include <apisetcconv.h>
#include <mmsyscom.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD MCIERROR;
typedef UINT MCIDEVICEID;
typedef UINT (CALLBACK *YIELDPROC)(MCIDEVICEID mciId, DWORD dwYieldData);
WINMMAPI
MCIERROR
WINAPI
mciSendCommandA(
    _In_ MCIDEVICEID mciId,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dwParam1,
    _In_opt_ DWORD_PTR dwParam2
    );
WINMMAPI
MCIERROR
WINAPI
mciSendCommandW(
    _In_ MCIDEVICEID mciId,
    _In_ UINT uMsg,
    _In_opt_ DWORD_PTR dwParam1,
    _In_opt_ DWORD_PTR dwParam2
    );
WINMMAPI
MCIERROR
WINAPI
mciSendStringA(
    _In_ LPCSTR lpstrCommand,
    _Out_writes_opt_(uReturnLength) LPSTR lpstrReturnString,
    _In_ UINT uReturnLength,
    _In_opt_ HWND hwndCallback
    );
WINMMAPI
MCIERROR
WINAPI
mciSendStringW(
    _In_ LPCWSTR lpstrCommand,
    _Out_writes_opt_(uReturnLength) LPWSTR lpstrReturnString,
    _In_ UINT uReturnLength,
    _In_opt_ HWND hwndCallback
    );
WINMMAPI
MCIDEVICEID
WINAPI
mciGetDeviceIDA(
    _In_ LPCSTR pszDevice
    );
WINMMAPI
MCIDEVICEID
WINAPI
mciGetDeviceIDW(
    _In_ LPCWSTR pszDevice
    );
WINMMAPI
MCIDEVICEID
WINAPI
mciGetDeviceIDFromElementIDA(
    _In_ DWORD dwElementID,
    _In_ LPCSTR lpstrType
    );
WINMMAPI
MCIDEVICEID
WINAPI
mciGetDeviceIDFromElementIDW(
    _In_ DWORD dwElementID,
    _In_ LPCWSTR lpstrType
    );
WINMMAPI
BOOL
WINAPI
mciGetErrorStringA(
    _In_ MCIERROR mcierr,
    _Out_writes_(cchText) LPSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
BOOL
WINAPI
mciGetErrorStringW(
    _In_ MCIERROR mcierr,
    _Out_writes_(cchText) LPWSTR pszText,
    _In_ UINT cchText
    );
WINMMAPI
BOOL
WINAPI
mciSetYieldProc(
    _In_ MCIDEVICEID mciId,
    _In_opt_ YIELDPROC fpYieldProc,
    _In_ DWORD dwYieldData
    );
WINMMAPI
HTASK
WINAPI
mciGetCreatorTask(
    _In_ MCIDEVICEID mciId
    );
WINMMAPI
YIELDPROC
WINAPI
mciGetYieldProc(
    _In_ MCIDEVICEID mciId,
    _In_ LPDWORD pdwYieldData
    );
                                                  ((WORD)(s)<<8)) | \
                                                 (((DWORD)(BYTE)(f))<<16)))
                                                  ((WORD)(m)<<8)) | \
                                                 (((DWORD)(BYTE)(s) | \
                                                   ((WORD)(f)<<8))<<16)))
                                                  ((WORD)(m)<<8)) | \
                                                 (((DWORD)(BYTE)(s))<<16)))
typedef struct tagMCI_GENERIC_PARMS {
    DWORD_PTR dwCallback;
} MCI_GENERIC_PARMS, *PMCI_GENERIC_PARMS, FAR *LPMCI_GENERIC_PARMS;
typedef struct tagMCI_OPEN_PARMSA {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCSTR lpstrDeviceType;
    LPCSTR lpstrElementName;
    LPCSTR lpstrAlias;
} MCI_OPEN_PARMSA, *PMCI_OPEN_PARMSA, *LPMCI_OPEN_PARMSA;
typedef struct tagMCI_OPEN_PARMSW {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCWSTR lpstrDeviceType;
    LPCWSTR lpstrElementName;
    LPCWSTR lpstrAlias;
} MCI_OPEN_PARMSW, *PMCI_OPEN_PARMSW, *LPMCI_OPEN_PARMSW;
typedef MCI_OPEN_PARMSW MCI_OPEN_PARMS;
typedef PMCI_OPEN_PARMSW PMCI_OPEN_PARMS;
typedef LPMCI_OPEN_PARMSW LPMCI_OPEN_PARMS;
typedef struct tagMCI_PLAY_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
} MCI_PLAY_PARMS, *PMCI_PLAY_PARMS, FAR *LPMCI_PLAY_PARMS;
typedef struct tagMCI_SEEK_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwTo;
} MCI_SEEK_PARMS, *PMCI_SEEK_PARMS, FAR *LPMCI_SEEK_PARMS;
typedef struct tagMCI_STATUS_PARMS {
    DWORD_PTR dwCallback;
    DWORD_PTR dwReturn;
    DWORD dwItem;
    DWORD dwTrack;
} MCI_STATUS_PARMS, *PMCI_STATUS_PARMS, FAR * LPMCI_STATUS_PARMS;
typedef struct tagMCI_INFO_PARMSA {
    DWORD_PTR dwCallback;
    LPSTR lpstrReturn;
    DWORD dwRetSize;
} MCI_INFO_PARMSA, * LPMCI_INFO_PARMSA;
typedef struct tagMCI_INFO_PARMSW {
    DWORD_PTR dwCallback;
    LPWSTR lpstrReturn;
    DWORD dwRetSize;
} MCI_INFO_PARMSW, * LPMCI_INFO_PARMSW;
typedef MCI_INFO_PARMSW MCI_INFO_PARMS;
typedef LPMCI_INFO_PARMSW LPMCI_INFO_PARMS;
typedef struct tagMCI_GETDEVCAPS_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwReturn;
    DWORD dwItem;
} MCI_GETDEVCAPS_PARMS, *PMCI_GETDEVCAPS_PARMS, FAR * LPMCI_GETDEVCAPS_PARMS;
typedef struct tagMCI_SYSINFO_PARMSA {
    DWORD_PTR dwCallback;
    LPSTR lpstrReturn;
    DWORD dwRetSize;
    DWORD dwNumber;
    UINT wDeviceType;
} MCI_SYSINFO_PARMSA, *PMCI_SYSINFO_PARMSA, * LPMCI_SYSINFO_PARMSA;
typedef struct tagMCI_SYSINFO_PARMSW {
    DWORD_PTR dwCallback;
    LPWSTR lpstrReturn;
    DWORD dwRetSize;
    DWORD dwNumber;
    UINT wDeviceType;
} MCI_SYSINFO_PARMSW, *PMCI_SYSINFO_PARMSW, * LPMCI_SYSINFO_PARMSW;
typedef MCI_SYSINFO_PARMSW MCI_SYSINFO_PARMS;
typedef PMCI_SYSINFO_PARMSW PMCI_SYSINFO_PARMS;
typedef LPMCI_SYSINFO_PARMSW LPMCI_SYSINFO_PARMS;
typedef struct tagMCI_SET_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwTimeFormat;
    DWORD dwAudio;
} MCI_SET_PARMS, *PMCI_SET_PARMS, FAR *LPMCI_SET_PARMS;
typedef struct tagMCI_BREAK_PARMS {
    DWORD_PTR dwCallback;
    int nVirtKey;
    HWND hwndBreak;
} MCI_BREAK_PARMS, *PMCI_BREAK_PARMS, FAR * LPMCI_BREAK_PARMS;
typedef struct tagMCI_SAVE_PARMSA {
    DWORD_PTR dwCallback;
    LPCSTR lpfilename;
} MCI_SAVE_PARMSA, *PMCI_SAVE_PARMSA, * LPMCI_SAVE_PARMSA;
typedef struct tagMCI_SAVE_PARMSW {
    DWORD_PTR dwCallback;
    LPCWSTR lpfilename;
} MCI_SAVE_PARMSW, *PMCI_SAVE_PARMSW, * LPMCI_SAVE_PARMSW;
typedef MCI_SAVE_PARMSW MCI_SAVE_PARMS;
typedef PMCI_SAVE_PARMSW PMCI_SAVE_PARMS;
typedef LPMCI_SAVE_PARMSW LPMCI_SAVE_PARMS;
typedef struct tagMCI_LOAD_PARMSA {
    DWORD_PTR dwCallback;
    LPCSTR lpfilename;
} MCI_LOAD_PARMSA, *PMCI_LOAD_PARMSA, * LPMCI_LOAD_PARMSA;
typedef struct tagMCI_LOAD_PARMSW {
    DWORD_PTR dwCallback;
    LPCWSTR lpfilename;
} MCI_LOAD_PARMSW, *PMCI_LOAD_PARMSW, * LPMCI_LOAD_PARMSW;
typedef MCI_LOAD_PARMSW MCI_LOAD_PARMS;
typedef PMCI_LOAD_PARMSW PMCI_LOAD_PARMS;
typedef LPMCI_LOAD_PARMSW LPMCI_LOAD_PARMS;
typedef struct tagMCI_RECORD_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
} MCI_RECORD_PARMS, FAR *LPMCI_RECORD_PARMS;
typedef struct tagMCI_VD_PLAY_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    DWORD dwSpeed;
} MCI_VD_PLAY_PARMS, *PMCI_VD_PLAY_PARMS, FAR *LPMCI_VD_PLAY_PARMS;
typedef struct tagMCI_VD_STEP_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrames;
} MCI_VD_STEP_PARMS, *PMCI_VD_STEP_PARMS, FAR *LPMCI_VD_STEP_PARMS;
typedef struct tagMCI_VD_ESCAPE_PARMSA {
    DWORD_PTR dwCallback;
    LPCSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSA, *PMCI_VD_ESCAPE_PARMSA, *LPMCI_VD_ESCAPE_PARMSA;
typedef struct tagMCI_VD_ESCAPE_PARMSW {
    DWORD_PTR dwCallback;
    LPCWSTR lpstrCommand;
} MCI_VD_ESCAPE_PARMSW, *PMCI_VD_ESCAPE_PARMSW, *LPMCI_VD_ESCAPE_PARMSW;
typedef MCI_VD_ESCAPE_PARMSW MCI_VD_ESCAPE_PARMS;
typedef PMCI_VD_ESCAPE_PARMSW PMCI_VD_ESCAPE_PARMS;
typedef LPMCI_VD_ESCAPE_PARMSW LPMCI_VD_ESCAPE_PARMS;
typedef struct tagMCI_WAVE_OPEN_PARMSA {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCSTR lpstrDeviceType;
    LPCSTR lpstrElementName;
    LPCSTR lpstrAlias;
    DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSA, *PMCI_WAVE_OPEN_PARMSA, *LPMCI_WAVE_OPEN_PARMSA;
typedef struct tagMCI_WAVE_OPEN_PARMSW {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCWSTR lpstrDeviceType;
    LPCWSTR lpstrElementName;
    LPCWSTR lpstrAlias;
    DWORD dwBufferSeconds;
} MCI_WAVE_OPEN_PARMSW, *PMCI_WAVE_OPEN_PARMSW, *LPMCI_WAVE_OPEN_PARMSW;
typedef MCI_WAVE_OPEN_PARMSW MCI_WAVE_OPEN_PARMS;
typedef PMCI_WAVE_OPEN_PARMSW PMCI_WAVE_OPEN_PARMS;
typedef LPMCI_WAVE_OPEN_PARMSW LPMCI_WAVE_OPEN_PARMS;
typedef struct tagMCI_WAVE_DELETE_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
} MCI_WAVE_DELETE_PARMS, *PMCI_WAVE_DELETE_PARMS, FAR *LPMCI_WAVE_DELETE_PARMS;
typedef struct tagMCI_WAVE_SET_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwTimeFormat;
    DWORD dwAudio;
    UINT wInput;
    UINT wOutput;
    WORD wFormatTag;
    WORD wReserved2;
    WORD nChannels;
    WORD wReserved3;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wReserved4;
    WORD wBitsPerSample;
    WORD wReserved5;
} MCI_WAVE_SET_PARMS, *PMCI_WAVE_SET_PARMS, FAR * LPMCI_WAVE_SET_PARMS;
typedef struct tagMCI_SEQ_SET_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwTimeFormat;
    DWORD dwAudio;
    DWORD dwTempo;
    DWORD dwPort;
    DWORD dwSlave;
    DWORD dwMaster;
    DWORD dwOffset;
} MCI_SEQ_SET_PARMS, *PMCI_SEQ_SET_PARMS, FAR * LPMCI_SEQ_SET_PARMS;
typedef struct tagMCI_ANIM_OPEN_PARMSA {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCSTR lpstrDeviceType;
    LPCSTR lpstrElementName;
    LPCSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
} MCI_ANIM_OPEN_PARMSA, *PMCI_ANIM_OPEN_PARMSA, *LPMCI_ANIM_OPEN_PARMSA;
typedef struct tagMCI_ANIM_OPEN_PARMSW {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCWSTR lpstrDeviceType;
    LPCWSTR lpstrElementName;
    LPCWSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
} MCI_ANIM_OPEN_PARMSW, *PMCI_ANIM_OPEN_PARMSW, *LPMCI_ANIM_OPEN_PARMSW;
typedef MCI_ANIM_OPEN_PARMSW MCI_ANIM_OPEN_PARMS;
typedef PMCI_ANIM_OPEN_PARMSW PMCI_ANIM_OPEN_PARMS;
typedef LPMCI_ANIM_OPEN_PARMSW LPMCI_ANIM_OPEN_PARMS;
typedef struct tagMCI_ANIM_PLAY_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    DWORD dwSpeed;
} MCI_ANIM_PLAY_PARMS, *PMCI_ANIM_PLAY_PARMS, FAR *LPMCI_ANIM_PLAY_PARMS;
typedef struct tagMCI_ANIM_STEP_PARMS {
    DWORD_PTR dwCallback;
    DWORD dwFrames;
} MCI_ANIM_STEP_PARMS, *PMCI_ANIM_STEP_PARMS, FAR *LPMCI_ANIM_STEP_PARMS;
typedef struct tagMCI_ANIM_WINDOW_PARMSA {
    DWORD_PTR dwCallback;
    HWND hWnd;
    UINT nCmdShow;
    LPCSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSA, *PMCI_ANIM_WINDOW_PARMSA, * LPMCI_ANIM_WINDOW_PARMSA;
typedef struct tagMCI_ANIM_WINDOW_PARMSW {
    DWORD_PTR dwCallback;
    HWND hWnd;
    UINT nCmdShow;
    LPCWSTR lpstrText;
} MCI_ANIM_WINDOW_PARMSW, *PMCI_ANIM_WINDOW_PARMSW, * LPMCI_ANIM_WINDOW_PARMSW;
typedef MCI_ANIM_WINDOW_PARMSW MCI_ANIM_WINDOW_PARMS;
typedef PMCI_ANIM_WINDOW_PARMSW PMCI_ANIM_WINDOW_PARMS;
typedef LPMCI_ANIM_WINDOW_PARMSW LPMCI_ANIM_WINDOW_PARMS;
typedef struct tagMCI_ANIM_RECT_PARMS {
    DWORD_PTR dwCallback;
    POINT ptOffset;
    POINT ptExtent;
} MCI_ANIM_RECT_PARMS;
typedef MCI_ANIM_RECT_PARMS * PMCI_ANIM_RECT_PARMS;
typedef MCI_ANIM_RECT_PARMS FAR * LPMCI_ANIM_RECT_PARMS;
typedef struct tagMCI_ANIM_UPDATE_PARMS {
    DWORD_PTR dwCallback;
    RECT rc;
    HDC hDC;
} MCI_ANIM_UPDATE_PARMS, *PMCI_ANIM_UPDATE_PARMS, FAR * LPMCI_ANIM_UPDATE_PARMS;
typedef struct tagMCI_OVLY_OPEN_PARMSA {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCSTR lpstrDeviceType;
    LPCSTR lpstrElementName;
    LPCSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
} MCI_OVLY_OPEN_PARMSA, *PMCI_OVLY_OPEN_PARMSA, *LPMCI_OVLY_OPEN_PARMSA;
typedef struct tagMCI_OVLY_OPEN_PARMSW {
    DWORD_PTR dwCallback;
    MCIDEVICEID wDeviceID;
    LPCWSTR lpstrDeviceType;
    LPCWSTR lpstrElementName;
    LPCWSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
} MCI_OVLY_OPEN_PARMSW, *PMCI_OVLY_OPEN_PARMSW, *LPMCI_OVLY_OPEN_PARMSW;
typedef MCI_OVLY_OPEN_PARMSW MCI_OVLY_OPEN_PARMS;
typedef PMCI_OVLY_OPEN_PARMSW PMCI_OVLY_OPEN_PARMS;
typedef LPMCI_OVLY_OPEN_PARMSW LPMCI_OVLY_OPEN_PARMS;
typedef struct tagMCI_OVLY_WINDOW_PARMSA {
    DWORD_PTR dwCallback;
    HWND hWnd;
    UINT nCmdShow;
    LPCSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSA, *PMCI_OVLY_WINDOW_PARMSA, * LPMCI_OVLY_WINDOW_PARMSA;
typedef struct tagMCI_OVLY_WINDOW_PARMSW {
    DWORD_PTR dwCallback;
    HWND hWnd;
    UINT nCmdShow;
    LPCWSTR lpstrText;
} MCI_OVLY_WINDOW_PARMSW, *PMCI_OVLY_WINDOW_PARMSW, * LPMCI_OVLY_WINDOW_PARMSW;
typedef MCI_OVLY_WINDOW_PARMSW MCI_OVLY_WINDOW_PARMS;
typedef PMCI_OVLY_WINDOW_PARMSW PMCI_OVLY_WINDOW_PARMS;
typedef LPMCI_OVLY_WINDOW_PARMSW LPMCI_OVLY_WINDOW_PARMS;
typedef struct tagMCI_OVLY_RECT_PARMS {
    DWORD_PTR dwCallback;
    POINT ptOffset;
    POINT ptExtent;
} MCI_OVLY_RECT_PARMS, *PMCI_OVLY_RECT_PARMS, FAR * LPMCI_OVLY_RECT_PARMS;
typedef struct tagMCI_OVLY_SAVE_PARMSA {
    DWORD_PTR dwCallback;
    LPCSTR lpfilename;
    RECT rc;
} MCI_OVLY_SAVE_PARMSA, *PMCI_OVLY_SAVE_PARMSA, * LPMCI_OVLY_SAVE_PARMSA;
typedef struct tagMCI_OVLY_SAVE_PARMSW {
    DWORD_PTR dwCallback;
    LPCWSTR lpfilename;
    RECT rc;
} MCI_OVLY_SAVE_PARMSW, *PMCI_OVLY_SAVE_PARMSW, * LPMCI_OVLY_SAVE_PARMSW;
typedef MCI_OVLY_SAVE_PARMSW MCI_OVLY_SAVE_PARMS;
typedef PMCI_OVLY_SAVE_PARMSW PMCI_OVLY_SAVE_PARMS;
typedef LPMCI_OVLY_SAVE_PARMSW LPMCI_OVLY_SAVE_PARMS;
typedef struct tagMCI_OVLY_LOAD_PARMSA {
    DWORD_PTR dwCallback;
    LPCSTR lpfilename;
    RECT rc;
} MCI_OVLY_LOAD_PARMSA, *PMCI_OVLY_LOAD_PARMSA, * LPMCI_OVLY_LOAD_PARMSA;
typedef struct tagMCI_OVLY_LOAD_PARMSW {
    DWORD_PTR dwCallback;
    LPCWSTR lpfilename;
    RECT rc;
} MCI_OVLY_LOAD_PARMSW, *PMCI_OVLY_LOAD_PARMSW, * LPMCI_OVLY_LOAD_PARMSW;
typedef MCI_OVLY_LOAD_PARMSW MCI_OVLY_LOAD_PARMS;
typedef PMCI_OVLY_LOAD_PARMSW PMCI_OVLY_LOAD_PARMS;
typedef LPMCI_OVLY_LOAD_PARMSW LPMCI_OVLY_LOAD_PARMS;
DWORD_PTR
APIENTRY
mciGetDriverData(
    MCIDEVICEID wDeviceID
    );
UINT
APIENTRY
mciLoadCommandResource(
    HANDLE hInstance,
    LPCWSTR lpResName,
    UINT wType
    );
BOOL
APIENTRY
mciSetDriverData(
    MCIDEVICEID wDeviceID,
    DWORD_PTR dwData
    );
UINT
APIENTRY
mciDriverYield(
    MCIDEVICEID wDeviceID
    );
BOOL
APIENTRY
mciDriverNotify(
    HANDLE hwndCallback,
    MCIDEVICEID wDeviceID,
    UINT uStatus
    );
BOOL
APIENTRY
mciFreeCommandResource(
    UINT wTable
    );
#endif
#pragma endregion
}

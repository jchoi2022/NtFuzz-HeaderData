#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack1.h>
extern "C" {
  DriverCallback( (dwCallback), DCB_WINDOW, (HANDLE)(wDeviceID), MM_MCISIGNAL,\
  hDriver, ((dwFlags) & MCI_DGV_SIGNAL_POSITION) ? (dwPos):(dwUser),\
  ((dwFlags) & MCI_DGV_SIGNAL_POSITION) ? (dwUser):(dwPos))
typedef struct {
    DWORD_PTR dwCallback;
    POINT ptOffset;
    POINT ptExtent;
} MCI_DGV_RECT_PARMS;
typedef MCI_DGV_RECT_PARMS FAR * LPMCI_DGV_RECT_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrFileName;
    POINT ptOffset;
    POINT ptExtent;
} MCI_DGV_CAPTURE_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrFileName;
    POINT ptOffset;
    POINT ptExtent;
} MCI_DGV_CAPTURE_PARMSW;
typedef MCI_DGV_CAPTURE_PARMSW MCI_DGV_CAPTURE_PARMS;
typedef MCI_DGV_CAPTURE_PARMSA FAR * LPMCI_DGV_CAPTURE_PARMSA;
typedef MCI_DGV_CAPTURE_PARMSW FAR * LPMCI_DGV_CAPTURE_PARMSW;
typedef LPMCI_DGV_CAPTURE_PARMSW LPMCI_DGV_CAPTURE_PARMS;
typedef MCI_GENERIC_PARMS MCI_CLOSE_PARMS;
typedef MCI_CLOSE_PARMS FAR * LPMCI_CLOSE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    POINT ptOffset;
    POINT ptExtent;
    DWORD dwAudioStream;
    DWORD dwVideoStream;
} MCI_DGV_COPY_PARMS;
typedef MCI_DGV_COPY_PARMS FAR * LPMCI_DGV_COPY_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwTo;
} MCI_DGV_CUE_PARMS;
typedef MCI_DGV_CUE_PARMS FAR * LPMCI_DGV_CUE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    POINT ptOffset;
    POINT ptExtent;
    DWORD dwAudioStream;
    DWORD dwVideoStream;
} MCI_DGV_CUT_PARMS;
typedef MCI_DGV_CUT_PARMS FAR * LPMCI_DGV_CUT_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    POINT ptOffset;
    POINT ptExtent;
    DWORD dwAudioStream;
    DWORD dwVideoStream;
} MCI_DGV_DELETE_PARMS;
typedef MCI_DGV_DELETE_PARMS FAR * LPMCI_DGV_DELETE_PARMS;
typedef MCI_DGV_RECT_PARMS MCI_DGV_FREEZE_PARMS;
typedef MCI_DGV_FREEZE_PARMS FAR * LPMCI_DGV_FREEZE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrReturn;
    DWORD dwRetSize;
    DWORD dwItem;
} MCI_DGV_INFO_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrReturn;
    DWORD dwRetSize;
    DWORD dwItem;
} MCI_DGV_INFO_PARMSW;
typedef MCI_DGV_INFO_PARMSW MCI_DGV_INFO_PARMS;
typedef MCI_DGV_INFO_PARMSA FAR * LPMCI_DGV_INFO_PARMSA;
typedef MCI_DGV_INFO_PARMSW FAR * LPMCI_DGV_INFO_PARMSW;
typedef LPMCI_DGV_INFO_PARMSW LPMCI_DGV_INFO_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrReturn;
    DWORD dwLength;
    DWORD dwNumber;
    DWORD dwItem;
    LPSTR lpstrAlgorithm;
} MCI_DGV_LIST_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrReturn;
    DWORD dwLength;
    DWORD dwNumber;
    DWORD dwItem;
    LPWSTR lpstrAlgorithm;
} MCI_DGV_LIST_PARMSW;
typedef MCI_DGV_LIST_PARMSW MCI_DGV_LIST_PARMS;
typedef MCI_DGV_LIST_PARMSA FAR * LPMCI_DGV_LIST_PARMSA;
typedef MCI_DGV_LIST_PARMSW FAR * LPMCI_DGV_LIST_PARMSW;
typedef LPMCI_DGV_LIST_PARMSW LPMCI_DGV_LIST_PARMS;
typedef MCI_LOAD_PARMS MCI_DGV_LOAD_PARMS;
typedef MCI_DGV_LOAD_PARMS FAR * LPMCI_DGV_LOAD_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwSource;
    DWORD dwMethod;
} MCI_DGV_MONITOR_PARMS;
typedef MCI_DGV_MONITOR_PARMS FAR * LPMCI_DGV_MONITOR_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    UINT wDeviceID;
    WORD wReserved0;
    LPSTR lpstrDeviceType;
    LPSTR lpstrElementName;
    LPSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
    WORD wReserved1;
} MCI_DGV_OPEN_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    UINT wDeviceID;
    WORD wReserved0;
    LPWSTR lpstrDeviceType;
    LPWSTR lpstrElementName;
    LPWSTR lpstrAlias;
    DWORD dwStyle;
    HWND hWndParent;
    WORD wReserved1;
} MCI_DGV_OPEN_PARMSW;
typedef MCI_DGV_OPEN_PARMSW MCI_DGV_OPEN_PARMS;
typedef MCI_DGV_OPEN_PARMSA FAR * LPMCI_DGV_OPEN_PARMSA;
typedef MCI_DGV_OPEN_PARMSW FAR * LPMCI_DGV_OPEN_PARMSW;
typedef LPMCI_DGV_OPEN_PARMSW LPMCI_DGV_OPEN_PARMS;
typedef MCI_GENERIC_PARMS MCI_DGV_PAUSE_PARMS;
typedef MCI_DGV_PAUSE_PARMS FAR * LPMCI_DGV_PAUSE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwTo;
    POINT ptOffset;
    POINT ptExtent;
    DWORD dwAudioStream;
    DWORD dwVideoStream;
} MCI_DGV_PASTE_PARMS;
typedef MCI_DGV_PASTE_PARMS FAR * LPMCI_DGV_PASTE_PARMS;
typedef MCI_PLAY_PARMS MCI_DGV_PLAY_PARMS;
typedef MCI_DGV_PLAY_PARMS FAR * LPMCI_DGV_PLAY_PARMS;
typedef MCI_DGV_RECT_PARMS MCI_DGV_PUT_PARMS;
typedef MCI_DGV_PUT_PARMS FAR * LPMCI_DGV_PUT_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    LPSTR lpstrName;
    DWORD lpstrAlgorithm;
    DWORD dwHandle;
} MCI_DGV_QUALITY_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    LPWSTR lpstrName;
    DWORD lpstrAlgorithm;
    DWORD dwHandle;
} MCI_DGV_QUALITY_PARMSW;
typedef MCI_DGV_QUALITY_PARMSW MCI_DGV_QUALITY_PARMS;
typedef MCI_DGV_QUALITY_PARMSA FAR * LPMCI_DGV_QUALITY_PARMSA;
typedef MCI_DGV_QUALITY_PARMSW FAR * LPMCI_DGV_QUALITY_PARMSW;
typedef LPMCI_DGV_QUALITY_PARMSW LPMCI_DGV_QUALITY_PARMS;
typedef MCI_GENERIC_PARMS MCI_REALIZE_PARMS;
typedef MCI_REALIZE_PARMS FAR * LPMCI_REALIZE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwFrom;
    DWORD dwTo;
    POINT ptOffset;
    POINT ptExtent;
    DWORD dwAudioStream;
    DWORD dwVideoStream;
} MCI_DGV_RECORD_PARMS;
typedef MCI_DGV_RECORD_PARMS FAR * LPMCI_DGV_RECORD_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrPath;
    DWORD dwSize;
} MCI_DGV_RESERVE_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrPath;
    DWORD dwSize;
} MCI_DGV_RESERVE_PARMSW;
typedef MCI_DGV_RESERVE_PARMSW MCI_DGV_RESERVE_PARMS;
typedef MCI_DGV_RESERVE_PARMSA FAR * LPMCI_DGV_RESERVE_PARMSA;
typedef MCI_DGV_RESERVE_PARMSW FAR * LPMCI_DGV_RESERVE_PARMSW;
typedef LPMCI_DGV_RESERVE_PARMSW LPMCI_DGV_RESERVE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrFileName;
    POINT ptOffset;
    POINT ptExtent;
} MCI_DGV_RESTORE_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrFileName;
    POINT ptOffset;
    POINT ptExtent;
} MCI_DGV_RESTORE_PARMSW;
typedef MCI_DGV_RESTORE_PARMSW MCI_DGV_RESTORE_PARMS;
typedef MCI_DGV_RESTORE_PARMSA FAR * LPMCI_DGV_RESTORE_PARMSA;
typedef MCI_DGV_RESTORE_PARMSW FAR * LPMCI_DGV_RESTORE_PARMSW;
typedef LPMCI_DGV_RESTORE_PARMSW LPMCI_DGV_RESTORE_PARMS;
typedef MCI_GENERIC_PARMS MCI_DGV_RESUME_PARMS;
typedef MCI_DGV_RESUME_PARMS FAR * LPMCI_DGV_RESUME_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    LPSTR lpstrFileName;
    RECT rc;
} MCI_DGV_SAVE_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    LPWSTR lpstrFileName;
    RECT rc;
} MCI_DGV_SAVE_PARMSW;
typedef MCI_DGV_SAVE_PARMSW MCI_DGV_SAVE_PARMS;
typedef MCI_DGV_SAVE_PARMSA FAR * LPMCI_DGV_SAVE_PARMSA;
typedef MCI_DGV_SAVE_PARMSW FAR * LPMCI_DGV_SAVE_PARMSW;
typedef LPMCI_DGV_SAVE_PARMSW LPMCI_DGV_SAVE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwTimeFormat;
    DWORD dwAudio;
    DWORD dwFileFormat;
    DWORD dwSpeed;
} MCI_DGV_SET_PARMS;
typedef MCI_DGV_SET_PARMS FAR * LPMCI_DGV_SET_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    DWORD dwValue;
    DWORD dwOver;
    LPSTR lpstrAlgorithm;
    LPSTR lpstrQuality;
} MCI_DGV_SETAUDIO_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    DWORD dwValue;
    DWORD dwOver;
    LPWSTR lpstrAlgorithm;
    LPWSTR lpstrQuality;
} MCI_DGV_SETAUDIO_PARMSW;
typedef MCI_DGV_SETAUDIO_PARMSW MCI_DGV_SETAUDIO_PARMS;
typedef MCI_DGV_SETAUDIO_PARMSA FAR * LPMCI_DGV_SETAUDIO_PARMSA;
typedef MCI_DGV_SETAUDIO_PARMSW FAR * LPMCI_DGV_SETAUDIO_PARMSW;
typedef LPMCI_DGV_SETAUDIO_PARMSW LPMCI_DGV_SETAUDIO_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwPosition;
    DWORD dwPeriod;
    DWORD dwUserParm;
} MCI_DGV_SIGNAL_PARMS;
typedef MCI_DGV_SIGNAL_PARMS FAR * LPMCI_DGV_SIGNAL_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    DWORD dwValue;
    DWORD dwOver;
    LPSTR lpstrAlgorithm;
    LPSTR lpstrQuality;
    DWORD dwSourceNumber;
} MCI_DGV_SETVIDEO_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwItem;
    DWORD dwValue;
    DWORD dwOver;
    LPWSTR lpstrAlgorithm;
    LPWSTR lpstrQuality;
    DWORD dwSourceNumber;
} MCI_DGV_SETVIDEO_PARMSW;
typedef MCI_DGV_SETVIDEO_PARMSW MCI_DGV_SETVIDEO_PARMS;
typedef MCI_DGV_SETVIDEO_PARMSA FAR * LPMCI_DGV_SETVIDEO_PARMSA;
typedef MCI_DGV_SETVIDEO_PARMSW FAR * LPMCI_DGV_SETVIDEO_PARMSW;
typedef LPMCI_DGV_SETVIDEO_PARMSW LPMCI_DGV_SETVIDEO_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD_PTR dwReturn;
    DWORD dwItem;
    DWORD dwTrack;
    LPSTR lpstrDrive;
    DWORD dwReference;
} MCI_DGV_STATUS_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD_PTR dwReturn;
    DWORD dwItem;
    DWORD dwTrack;
    LPWSTR lpstrDrive;
    DWORD dwReference;
} MCI_DGV_STATUS_PARMSW;
typedef MCI_DGV_STATUS_PARMSW MCI_DGV_STATUS_PARMS;
typedef MCI_DGV_STATUS_PARMSA FAR * LPMCI_DGV_STATUS_PARMSA;
typedef MCI_DGV_STATUS_PARMSW FAR * LPMCI_DGV_STATUS_PARMSW;
typedef LPMCI_DGV_STATUS_PARMSW LPMCI_DGV_STATUS_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    DWORD dwFrames;
} MCI_DGV_STEP_PARMS;
typedef MCI_DGV_STEP_PARMS FAR *LPMCI_DGV_STEP_PARMS;
typedef MCI_GENERIC_PARMS MCI_DGV_STOP_PARMS;
typedef MCI_DGV_STOP_PARMS FAR * LPMCI_DGV_STOP_PARMS;
typedef MCI_DGV_RECT_PARMS MCI_DGV_UNFREEZE_PARMS;
typedef MCI_DGV_UNFREEZE_PARMS FAR * LPMCI_DGV_UNFREEZE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    POINT ptOffset;
    POINT ptExtent;
    HDC hDC;
    WORD wReserved0;
} MCI_DGV_UPDATE_PARMS;
typedef MCI_DGV_UPDATE_PARMS FAR * LPMCI_DGV_UPDATE_PARMS;
typedef MCI_DGV_RECT_PARMS MCI_DGV_WHERE_PARMS;
typedef MCI_DGV_WHERE_PARMS FAR * LPMCI_DGV_WHERE_PARMS;
typedef struct {
    DWORD_PTR dwCallback;
    HWND hWnd;
    WORD wReserved1;
    UINT nCmdShow;
    WORD wReserved2;
    LPSTR lpstrText;
} MCI_DGV_WINDOW_PARMSA;
typedef struct {
    DWORD_PTR dwCallback;
    HWND hWnd;
    WORD wReserved1;
    UINT nCmdShow;
    WORD wReserved2;
    LPWSTR lpstrText;
} MCI_DGV_WINDOW_PARMSW;
typedef MCI_DGV_WINDOW_PARMSW MCI_DGV_WINDOW_PARMS;
typedef MCI_DGV_WINDOW_PARMSA FAR * LPMCI_DGV_WINDOW_PARMSA;
typedef MCI_DGV_WINDOW_PARMSW FAR * LPMCI_DGV_WINDOW_PARMSW;
typedef LPMCI_DGV_WINDOW_PARMSW LPMCI_DGV_WINDOW_PARMS;
}
#include <poppack.h>
#endif
#pragma endregion

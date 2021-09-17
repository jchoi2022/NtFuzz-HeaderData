#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef unsigned int UINT;
LRESULT WINAPI SendIMEMessageExA( IN HWND, IN LPARAM);
LRESULT WINAPI SendIMEMessageExW( IN HWND, IN LPARAM);
typedef struct tagIMESTRUCT {
    UINT fnc;
    WPARAM wParam;
    UINT wCount;
    UINT dchSource;
    UINT dchDest;
    LPARAM lParam1;
    LPARAM lParam2;
    LPARAM lParam3;
} IMESTRUCT,*PIMESTRUCT,NEAR *NPIMESTRUCT,FAR *LPIMESTRUCT;
typedef struct tagUNDETERMINESTRUCT {
    DWORD dwSize;
    UINT uDefIMESize;
    UINT uDefIMEPos;
    UINT uUndetTextLen;
    UINT uUndetTextPos;
    UINT uUndetAttrPos;
    UINT uCursorPos;
    UINT uDeltaStart;
    UINT uDetermineTextLen;
    UINT uDetermineTextPos;
    UINT uDetermineDelimPos;
    UINT uYomiTextLen;
    UINT uYomiTextPos;
    UINT uYomiDelimPos;
} UNDETERMINESTRUCT,*PUNDETERMINESTRUCT,NEAR *NPUNDETERMINESTRUCT,FAR *LPUNDETERMINESTRUCT;
typedef struct tagSTRINGEXSTRUCT {
    DWORD dwSize;
    UINT uDeterminePos;
    UINT uDetermineDelimPos;
    UINT uYomiPos;
    UINT uYomiDelimPos;
} STRINGEXSTRUCT,NEAR *NPSTRINGEXSTRUCT,FAR *LPSTRINGEXSTRUCT;
}
#endif
#pragma endregion

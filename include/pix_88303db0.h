       
inline UINT PIX_COLOR(BYTE r, BYTE g, BYTE b) { return 0xff000000 | (r << 16) | (g << 8) | b; }
inline UINT PIX_COLOR_INDEX(BYTE i) { return 0x00000000 | i; }
const UINT PIX_COLOR_DEFAULT = PIX_COLOR_INDEX(0);
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_TV_TITLE)
#include "pix_xbox.h"
#else
#include "pix_win.h"
#endif

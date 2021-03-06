#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _AM_LINE21_CCLEVEL {
    AM_L21_CCLEVEL_TC2 = 0
} AM_LINE21_CCLEVEL, *PAM_LINE21_CCLEVEL ;
typedef enum _AM_LINE21_CCSERVICE {
    AM_L21_CCSERVICE_None = 0,
    AM_L21_CCSERVICE_Caption1,
    AM_L21_CCSERVICE_Caption2,
    AM_L21_CCSERVICE_Text1,
    AM_L21_CCSERVICE_Text2,
    AM_L21_CCSERVICE_XDS,
    AM_L21_CCSERVICE_DefChannel = 10,
    AM_L21_CCSERVICE_Invalid
} AM_LINE21_CCSERVICE, *PAM_LINE21_CCSERVICE ;
typedef enum _AM_LINE21_CCSTATE {
    AM_L21_CCSTATE_Off = 0,
    AM_L21_CCSTATE_On
} AM_LINE21_CCSTATE, *PAM_LINE21_CCSTATE ;
typedef enum _AM_LINE21_CCSTYLE {
    AM_L21_CCSTYLE_None = 0,
    AM_L21_CCSTYLE_PopOn,
    AM_L21_CCSTYLE_PaintOn,
    AM_L21_CCSTYLE_RollUp
} AM_LINE21_CCSTYLE, *PAM_LINE21_CCSTYLE ;
typedef enum _AM_LINE21_DRAWBGMODE {
    AM_L21_DRAWBGMODE_Opaque,
    AM_L21_DRAWBGMODE_Transparent
} AM_LINE21_DRAWBGMODE, *PAM_LINE21_DRAWBGMODE ;
extern "C" {
DECLARE_INTERFACE_(IAMLine21Decoder, IUnknown)
{
    public:
        STDMETHOD(GetDecoderLevel)(THIS_ AM_LINE21_CCLEVEL *lpLevel) PURE ;
        STDMETHOD(GetCurrentService)(THIS_ AM_LINE21_CCSERVICE *lpService) PURE ;
        STDMETHOD(SetCurrentService)(THIS_ AM_LINE21_CCSERVICE Service) PURE ;
        STDMETHOD(GetServiceState)(THIS_ AM_LINE21_CCSTATE *lpState) PURE ;
        STDMETHOD(SetServiceState)(THIS_ AM_LINE21_CCSTATE State) PURE ;
        STDMETHOD(GetOutputFormat)(THIS_ LPBITMAPINFOHEADER lpbmih) PURE ;
        STDMETHOD(SetOutputFormat)(THIS_ LPBITMAPINFO lpbmi) PURE ;
        STDMETHOD(GetBackgroundColor)(THIS_ DWORD *pdwPhysColor) PURE ;
        STDMETHOD(SetBackgroundColor)(THIS_ DWORD dwPhysColor) PURE ;
        STDMETHOD(GetRedrawAlways)(THIS_ LPBOOL lpbOption) PURE ;
        STDMETHOD(SetRedrawAlways)(THIS_ BOOL bOption) PURE ;
        STDMETHOD(GetDrawBackgroundMode)(THIS_ AM_LINE21_DRAWBGMODE *lpMode) PURE ;
        STDMETHOD(SetDrawBackgroundMode)(THIS_ AM_LINE21_DRAWBGMODE Mode) PURE ;
} ;
}
#endif
#pragma endregion

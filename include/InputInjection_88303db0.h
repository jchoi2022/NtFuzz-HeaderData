       
#include "WinPhoneInput.h"
EXTERN_C HRESULT WINAPI
ApiInjectInitialize();
EXTERN_C HRESULT WINAPI
ApiInjectUninitialize();
EXTERN_C HRESULT WINAPI
ApiInjectEnableExclusive(
    IN WORD wInputDeviceType,
    IN bool fEnabled);
EXTERN_C HRESULT WINAPI
ApiInjectButtonEvent(
    IN WORD wEventFlag,
    IN WORD wButtonType);
EXTERN_C HRESULT WINAPI
ApiInjectTouchEvent(
    IN const TouchInfo * pTouchInfo);

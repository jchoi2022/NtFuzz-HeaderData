#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <VFWMSGS.H>
typedef BOOL (WINAPI* AMGETERRORTEXTPROCA)(HRESULT, char *, DWORD);
typedef BOOL (WINAPI* AMGETERRORTEXTPROCW)(HRESULT, WCHAR *, DWORD);
AMOVIEAPI DWORD WINAPI AMGetErrorTextA( HRESULT hr , _Out_writes_(MaxLen) LPSTR pbuffer , DWORD MaxLen);
AMOVIEAPI DWORD WINAPI AMGetErrorTextW( HRESULT hr , _Out_writes_(MaxLen) LPWSTR pbuffer , DWORD MaxLen);
typedef AMGETERRORTEXTPROCW AMGETERRORTEXTPROC;
}
#endif
#pragma endregion

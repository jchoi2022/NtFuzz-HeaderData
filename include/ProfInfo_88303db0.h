#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _PROFILEINFOA {
    DWORD dwSize;
    DWORD dwFlags;
    MIDL_STRING LPSTR lpUserName;
    MIDL_STRING LPSTR lpProfilePath;
    MIDL_STRING LPSTR lpDefaultPath;
    MIDL_STRING LPSTR lpServerName;
    MIDL_STRING LPSTR lpPolicyPath;
    ULONG_PTR hProfile;
    } PROFILEINFOA, FAR * LPPROFILEINFOA;
typedef struct _PROFILEINFOW {
    DWORD dwSize;
    DWORD dwFlags;
    MIDL_STRING LPWSTR lpUserName;
    MIDL_STRING LPWSTR lpProfilePath;
    MIDL_STRING LPWSTR lpDefaultPath;
    MIDL_STRING LPWSTR lpServerName;
    MIDL_STRING LPWSTR lpPolicyPath;
    ULONG_PTR hProfile;
    } PROFILEINFOW, FAR * LPPROFILEINFOW;
typedef PROFILEINFOW PROFILEINFO;
typedef LPPROFILEINFOW LPPROFILEINFO;
#endif
#pragma endregion

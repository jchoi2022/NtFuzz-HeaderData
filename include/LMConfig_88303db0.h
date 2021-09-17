#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#pragma warning(push)
#pragma warning(disable:28740)
NET_API_STATUS NET_API_FUNCTION
NetConfigGet (
    IN LPCWSTR server OPTIONAL,
    IN LPCWSTR component,
    IN LPCWSTR parameter,
    OUT LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetConfigGetAll (
    IN LPCWSTR server OPTIONAL,
    IN LPCWSTR component,
    OUT LPBYTE *bufptr
    );
NET_API_STATUS NET_API_FUNCTION
NetConfigSet (
    IN LPCWSTR server OPTIONAL,
    IN LPCWSTR reserved1 OPTIONAL,
    IN LPCWSTR component,
    IN DWORD level,
    IN DWORD reserved2,
    IN LPBYTE buf,
    IN DWORD reserved3
    );
#pragma warning(pop)
typedef struct _CONFIG_INFO_0 {
     LPWSTR cfgi0_key;
     LPWSTR cfgi0_data;
} CONFIG_INFO_0, *PCONFIG_INFO_0, *LPCONFIG_INFO_0;
}
#endif
#pragma endregion

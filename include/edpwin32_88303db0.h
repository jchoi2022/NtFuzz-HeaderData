       
#include <winnt.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
STDAPI ProtectFileToEnterpriseIdentity(
    _In_ PCWSTR fileOrFolderPath,
    _In_ PCWSTR identity
    );
typedef struct
{
    bool audit;
}FILE_UNPROTECT_OPTIONS;
STDAPI UnprotectFile(
    _In_ PCWSTR fileOrFolderPath,
    _In_opt_ const FILE_UNPROTECT_OPTIONS* options
    );
#endif
#pragma endregion

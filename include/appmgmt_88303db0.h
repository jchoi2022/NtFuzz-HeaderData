#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum _INSTALLSPECTYPE
{
    APPNAME = 1,
    FILEEXT,
    PROGID,
    COMCLASS
} INSTALLSPECTYPE;
typedef union _INSTALLSPEC
{
    struct
    {
        WCHAR * Name;
        GUID GPOId;
    } AppName;
    WCHAR * FileExt;
    WCHAR * ProgId;
    struct
    {
        GUID Clsid;
        DWORD ClsCtx;
    } COMClass;
} INSTALLSPEC;
typedef struct _INSTALLDATA
{
    INSTALLSPECTYPE Type;
    INSTALLSPEC Spec;
} INSTALLDATA, *PINSTALLDATA;
typedef enum
{
    ABSENT,
    ASSIGNED,
    PUBLISHED
} APPSTATE;
typedef struct _LOCALMANAGEDAPPLICATION
{
    LPWSTR pszDeploymentName;
    LPWSTR pszPolicyName;
    LPWSTR pszProductId;
    DWORD dwState;
} LOCALMANAGEDAPPLICATION, *PLOCALMANAGEDAPPLICATION;
typedef struct _MANAGEDAPPLICATION
{
    LPWSTR pszPackageName;
    LPWSTR pszPublisher;
    DWORD dwVersionHi;
    DWORD dwVersionLo;
    DWORD dwRevision;
    GUID GpoId;
    LPWSTR pszPolicyName;
    GUID ProductId;
    LANGID Language;
    LPWSTR pszOwner;
    LPWSTR pszCompany;
    LPWSTR pszComments;
    LPWSTR pszContact;
    LPWSTR pszSupportUrl;
    DWORD dwPathType;
    BOOL bInstalled;
} MANAGEDAPPLICATION, *PMANAGEDAPPLICATION;
typedef struct _APPCATEGORYINFO
{
    LCID Locale;
    LPWSTR pszDescription;
    GUID AppCategoryId;
} APPCATEGORYINFO;
typedef struct _APPCATEGORYINFOLIST
{
    DWORD cCategory;
    [size_is(cCategory)]
    APPCATEGORYINFO * pCategoryInfo;
} APPCATEGORYINFOLIST;
DWORD WINAPI
InstallApplication(
    _In_
 PINSTALLDATA pInstallInfo
    );
DWORD WINAPI
UninstallApplication(
    _In_
    LPWSTR ProductCode,
    _In_
 DWORD dwStatus
    );
DWORD WINAPI
CommandLineFromMsiDescriptor(
    _In_
    LPWSTR Descriptor,
    _Out_writes_( *CommandLineLength )
    LPWSTR CommandLine,
    DWORD * CommandLineLength
    );
DWORD WINAPI
GetManagedApplications(
    _In_
    GUID * pCategory,
    _In_
    DWORD dwQueryFlags,
    _In_
 DWORD dwInfoLevel,
    _Out_
 LPDWORD pdwApps,
    _Out_
 PMANAGEDAPPLICATION* prgManagedApps
    );
DWORD WINAPI
GetLocalManagedApplications(
    _In_
 BOOL bUserApps,
    _Out_
 LPDWORD pdwApps,
    _Out_
 PLOCALMANAGEDAPPLICATION* prgLocalApps
    );
void WINAPI
GetLocalManagedApplicationData(
    _In_
 LPWSTR ProductCode,
    _Outptr_
 LPWSTR * DisplayName,
    _Outptr_
 LPWSTR * SupportUrl
    );
DWORD WINAPI
GetManagedApplicationCategories(
    _Reserved_
 DWORD dwReserved,
    _Out_
 APPCATEGORYINFOLIST* pAppCategory
    );
}
#endif
#pragma endregion

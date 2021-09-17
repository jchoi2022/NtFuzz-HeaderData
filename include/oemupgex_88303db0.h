#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef enum {
    UNKNOWN,
    NT_WORKSTATION,
    NT_SERVER
} PRODUCTTYPE;
typedef struct
{
    PRODUCTTYPE ProductType;
    DWORD dwBuildNumber;
} ProductInfo;
typedef struct
{
    ProductInfo From;
    ProductInfo To;
} NetUpgradeInfo;
typedef struct
{
    WCHAR szCompanyName[256];
    WCHAR szSupportNumber[256];
    WCHAR szSupportUrl[256];
    WCHAR szInstructionsToUser[1024];
} VENDORINFO;
const DWORD c_dwMaxProductIdLen = 255;
const DWORD NUA_LOAD_POST_UPGRADE = 0x0001;
const DWORD NUA_REQUEST_ABORT_UPGRADE = 0x0002;
const DWORD NUA_ABORT_UPGRADE = 0x0004;
const DWORD NUA_SKIP_INSTALL_IN_GUI_MODE = 0x80000L;
typedef struct
{
    LPTSTR mszServicesNotToBeDeleted;
} NetUpgradeData;
__drv_preferredFunction("(see documentation)", "Obsolete")
LONG __stdcall
PreUpgradeInitialize(_In_ LPCTSTR szWorkingDir,
                     _In_ NetUpgradeInfo* pNetUpgradeInfo,
                     _Out_ VENDORINFO* pviVendorInfo,
                     _Out_ DWORD* pdwFlags,
                     _Out_ NetUpgradeData* pNetUpgradeData);
typedef LONG
(__stdcall *PreUpgradeInitializePrototype)
     (_In_ LPCTSTR szWorkingDir,
      _In_ NetUpgradeInfo* pNetUpgradeInfo,
      _Out_ VENDORINFO* pviVendorInfo,
      _Out_ DWORD* pdwFlags,
      _Out_ NetUpgradeData* pNetUpgradeData);
LONG __stdcall
DoPreUpgradeProcessing(_In_ HWND hParentWindow,
                       _In_ HKEY hkeyParams,
                       _In_ LPCTSTR szPreNT5InfId,
                       _In_ LPCTSTR szPreNT5Instance,
                       _In_ LPCTSTR szNT5InfId,
                       _In_ LPCTSTR szSectionName,
                       _Out_ VENDORINFO* pviVendorInfo,
                       _Out_ DWORD* pdwFlags,
                       _In_ LPVOID pvReserved);
typedef LONG
(__stdcall *DoPreUpgradeProcessingPrototype)
     (IN HWND hParentWindow,
      IN HKEY hkeyParams,
      IN LPCTSTR szPreNT5InfId,
      IN LPCTSTR szPreNT5Instance,
      IN LPCTSTR szNT5InfId,
      IN LPCTSTR szSectionName,
      OUT VENDORINFO* pviVendorInfo,
      OUT DWORD* pdwFlags,
      IN LPVOID pvReserved);
__drv_preferredFunction("(see documentation)", "Obsolete")
LONG __stdcall
PostUpgradeInitialize(IN LPCTSTR szWorkingDir,
                      _In_ NetUpgradeInfo* pNetUpgradeInfo,
                      _Out_ VENDORINFO* pviVendorInfo,
                      _Out_ LPVOID pvReserved);
typedef LONG
(__stdcall *PostUpgradeInitializePrototype)
     (IN LPCTSTR szWorkingDir,
      IN NetUpgradeInfo* pNetUpgradeInfo,
      OUT VENDORINFO* pviVendorInfo,
      OUT LPVOID pvReserved);
LONG __stdcall
DoPostUpgradeProcessing(_In_ HWND hParentWindow,
                        _In_ HKEY hkeyParams,
                        _In_ LPCTSTR szPreNT5Instance,
                        _In_ LPCTSTR szNT5InfId,
                        _In_ HINF hinfAnswerFile,
                        _In_ LPCTSTR szSectionName,
                        _Out_ VENDORINFO* pviVendorInfo,
                        _In_ LPVOID pvReserved);
typedef LONG
(__stdcall *DoPostUpgradeProcessingPrototype)
     (IN HWND hParentWindow,
      IN HKEY hkeyParams,
      IN LPCTSTR szPreNT5Instance,
      IN LPCTSTR szNT5InfId,
      IN HINF hinfAnswerFile,
      IN LPCTSTR szSectionName,
      OUT VENDORINFO* pviVendorInfo,
      IN LPVOID pvReserved);
__drv_preferredFunction("(see documentation)", "Obsolete")
LONG __stdcall
NetUpgradeAddSection(_In_ LPCTSTR szSectionName);
typedef LONG
(__stdcall *NetUpgradeAddSectionPrototype) (IN LPCTSTR szSectionName);
__drv_preferredFunction("(see documentation)", "Obsolete")
LONG __stdcall
NetUpgradeAddLineToSection(_In_ LPCTSTR szSectionName,
                           _In_ LPCTSTR szLine);
typedef LONG
(__stdcall *NetUpgradeAddLineToSectionPrototype) (IN LPCTSTR szSectionName,
                                                  IN LPCTSTR szLine);
}
#endif
#pragma endregion

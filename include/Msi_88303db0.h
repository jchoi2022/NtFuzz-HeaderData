#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
  #define _WIN32_MSI 500
#include "specstrings.h"
#include "wincrypt.h"
typedef unsigned long MSIHANDLE;
extern "C" {
UINT WINAPI MsiCloseHandle(MSIHANDLE hAny);
UINT WINAPI MsiCloseAllHandles();
}
class PMSIHANDLE
{
 MSIHANDLE m_h;
 public:
 PMSIHANDLE():m_h(0){}
 PMSIHANDLE(MSIHANDLE h):m_h(h){}
  ~PMSIHANDLE(){if (m_h!=0) MsiCloseHandle(m_h);}
 void operator =(MSIHANDLE h) {if (m_h) MsiCloseHandle(m_h); m_h=h;}
 operator MSIHANDLE() {return m_h;}
 MSIHANDLE* operator &() {if (m_h) MsiCloseHandle(m_h); m_h = 0; return &m_h;}
};
typedef enum tagINSTALLMESSAGE
{
 INSTALLMESSAGE_FATALEXIT = 0x00000000L,
 INSTALLMESSAGE_ERROR = 0x01000000L,
 INSTALLMESSAGE_WARNING = 0x02000000L,
 INSTALLMESSAGE_USER = 0x03000000L,
 INSTALLMESSAGE_INFO = 0x04000000L,
 INSTALLMESSAGE_FILESINUSE = 0x05000000L,
 INSTALLMESSAGE_RESOLVESOURCE = 0x06000000L,
 INSTALLMESSAGE_OUTOFDISKSPACE = 0x07000000L,
 INSTALLMESSAGE_ACTIONSTART = 0x08000000L,
 INSTALLMESSAGE_ACTIONDATA = 0x09000000L,
 INSTALLMESSAGE_PROGRESS = 0x0A000000L,
 INSTALLMESSAGE_COMMONDATA = 0x0B000000L,
 INSTALLMESSAGE_INITIALIZE = 0x0C000000L,
 INSTALLMESSAGE_TERMINATE = 0x0D000000L,
 INSTALLMESSAGE_SHOWDIALOG = 0x0E000000L,
 INSTALLMESSAGE_PERFORMANCE = 0x0F000000L,
 INSTALLMESSAGE_RMFILESINUSE = 0x19000000L,
 INSTALLMESSAGE_INSTALLSTART = 0x1A000000L,
 INSTALLMESSAGE_INSTALLEND = 0x1B000000L,
} INSTALLMESSAGE;
typedef int (WINAPI *INSTALLUI_HANDLERA)(LPVOID pvContext, UINT iMessageType, LPCSTR szMessage);
typedef int (WINAPI *INSTALLUI_HANDLERW)(LPVOID pvContext, UINT iMessageType, LPCWSTR szMessage);
typedef int (WINAPI *INSTALLUI_HANDLER_RECORD)(LPVOID pvContext, UINT iMessageType, MSIHANDLE hRecord);
typedef INSTALLUI_HANDLER_RECORD* PINSTALLUI_HANDLER_RECORD;
typedef enum tagINSTALLUILEVEL
{
 INSTALLUILEVEL_NOCHANGE = 0,
 INSTALLUILEVEL_DEFAULT = 1,
 INSTALLUILEVEL_NONE = 2,
 INSTALLUILEVEL_BASIC = 3,
 INSTALLUILEVEL_REDUCED = 4,
 INSTALLUILEVEL_FULL = 5,
 INSTALLUILEVEL_ENDDIALOG = 0x80,
 INSTALLUILEVEL_PROGRESSONLY = 0x40,
 INSTALLUILEVEL_HIDECANCEL = 0x20,
 INSTALLUILEVEL_SOURCERESONLY = 0x100,
 INSTALLUILEVEL_UACONLY = 0x200,
} INSTALLUILEVEL;
typedef enum tagINSTALLSTATE
{
 INSTALLSTATE_NOTUSED = -7,
 INSTALLSTATE_BADCONFIG = -6,
 INSTALLSTATE_INCOMPLETE = -5,
 INSTALLSTATE_SOURCEABSENT = -4,
 INSTALLSTATE_MOREDATA = -3,
 INSTALLSTATE_INVALIDARG = -2,
 INSTALLSTATE_UNKNOWN = -1,
 INSTALLSTATE_BROKEN = 0,
 INSTALLSTATE_ADVERTISED = 1,
 INSTALLSTATE_REMOVED = 1,
 INSTALLSTATE_ABSENT = 2,
 INSTALLSTATE_LOCAL = 3,
 INSTALLSTATE_SOURCE = 4,
 INSTALLSTATE_DEFAULT = 5,
} INSTALLSTATE;
typedef enum tagUSERINFOSTATE
{
 USERINFOSTATE_MOREDATA = -3,
 USERINFOSTATE_INVALIDARG = -2,
 USERINFOSTATE_UNKNOWN = -1,
 USERINFOSTATE_ABSENT = 0,
 USERINFOSTATE_PRESENT = 1,
} USERINFOSTATE;
typedef enum tagINSTALLLEVEL
{
 INSTALLLEVEL_DEFAULT = 0,
 INSTALLLEVEL_MINIMUM = 1,
 INSTALLLEVEL_MAXIMUM = 0xFFFF,
} INSTALLLEVEL;
typedef enum tagREINSTALLMODE
{
 REINSTALLMODE_REPAIR = 0x00000001,
 REINSTALLMODE_FILEMISSING = 0x00000002,
 REINSTALLMODE_FILEOLDERVERSION = 0x00000004,
 REINSTALLMODE_FILEEQUALVERSION = 0x00000008,
 REINSTALLMODE_FILEEXACT = 0x00000010,
 REINSTALLMODE_FILEVERIFY = 0x00000020,
 REINSTALLMODE_FILEREPLACE = 0x00000040,
 REINSTALLMODE_MACHINEDATA = 0x00000080,
 REINSTALLMODE_USERDATA = 0x00000100,
 REINSTALLMODE_SHORTCUT = 0x00000200,
 REINSTALLMODE_PACKAGE = 0x00000400,
} REINSTALLMODE;
typedef enum tagINSTALLOGMODE
{
 INSTALLLOGMODE_FATALEXIT = (1 << (INSTALLMESSAGE_FATALEXIT >> 24)),
 INSTALLLOGMODE_ERROR = (1 << (INSTALLMESSAGE_ERROR >> 24)),
 INSTALLLOGMODE_WARNING = (1 << (INSTALLMESSAGE_WARNING >> 24)),
 INSTALLLOGMODE_USER = (1 << (INSTALLMESSAGE_USER >> 24)),
 INSTALLLOGMODE_INFO = (1 << (INSTALLMESSAGE_INFO >> 24)),
 INSTALLLOGMODE_RESOLVESOURCE = (1 << (INSTALLMESSAGE_RESOLVESOURCE >> 24)),
 INSTALLLOGMODE_OUTOFDISKSPACE = (1 << (INSTALLMESSAGE_OUTOFDISKSPACE >> 24)),
 INSTALLLOGMODE_ACTIONSTART = (1 << (INSTALLMESSAGE_ACTIONSTART >> 24)),
 INSTALLLOGMODE_ACTIONDATA = (1 << (INSTALLMESSAGE_ACTIONDATA >> 24)),
 INSTALLLOGMODE_COMMONDATA = (1 << (INSTALLMESSAGE_COMMONDATA >> 24)),
 INSTALLLOGMODE_PROPERTYDUMP = (1 << (INSTALLMESSAGE_PROGRESS >> 24)),
 INSTALLLOGMODE_VERBOSE = (1 << (INSTALLMESSAGE_INITIALIZE >> 24)),
 INSTALLLOGMODE_EXTRADEBUG = (1 << (INSTALLMESSAGE_TERMINATE >> 24)),
 INSTALLLOGMODE_LOGONLYONERROR = (1 << (INSTALLMESSAGE_SHOWDIALOG >> 24)),
 INSTALLLOGMODE_LOGPERFORMANCE = (1 << (INSTALLMESSAGE_PERFORMANCE >> 24)),
 INSTALLLOGMODE_PROGRESS = (1 << (INSTALLMESSAGE_PROGRESS >> 24)),
 INSTALLLOGMODE_INITIALIZE = (1 << (INSTALLMESSAGE_INITIALIZE >> 24)),
 INSTALLLOGMODE_TERMINATE = (1 << (INSTALLMESSAGE_TERMINATE >> 24)),
 INSTALLLOGMODE_SHOWDIALOG = (1 << (INSTALLMESSAGE_SHOWDIALOG >> 24)),
 INSTALLLOGMODE_FILESINUSE = (1 << (INSTALLMESSAGE_FILESINUSE >> 24)),
 INSTALLLOGMODE_RMFILESINUSE = (1 << (INSTALLMESSAGE_RMFILESINUSE >> 24)),
 INSTALLLOGMODE_INSTALLSTART = (1 << (INSTALLMESSAGE_INSTALLSTART >> 24)),
 INSTALLLOGMODE_INSTALLEND = (1 << (INSTALLMESSAGE_INSTALLEND >> 24)),
} INSTALLLOGMODE;
typedef enum tagINSTALLLOGATTRIBUTES
{
 INSTALLLOGATTRIBUTES_APPEND = (1 << 0),
 INSTALLLOGATTRIBUTES_FLUSHEACHLINE = (1 << 1),
} INSTALLLOGATTRIBUTES;
typedef enum tagINSTALLFEATUREATTRIBUTE
{
 INSTALLFEATUREATTRIBUTE_FAVORLOCAL = 1 << 0,
 INSTALLFEATUREATTRIBUTE_FAVORSOURCE = 1 << 1,
 INSTALLFEATUREATTRIBUTE_FOLLOWPARENT = 1 << 2,
 INSTALLFEATUREATTRIBUTE_FAVORADVERTISE = 1 << 3,
 INSTALLFEATUREATTRIBUTE_DISALLOWADVERTISE = 1 << 4,
 INSTALLFEATUREATTRIBUTE_NOUNSUPPORTEDADVERTISE = 1 << 5,
} INSTALLFEATUREATTRIBUTE;
typedef enum tagINSTALLMODE
{
 INSTALLMODE_NODETECTION_ANY = -4,
 INSTALLMODE_NOSOURCERESOLUTION = -3,
 INSTALLMODE_NODETECTION = -2,
 INSTALLMODE_EXISTING = -1,
 INSTALLMODE_DEFAULT = 0,
} INSTALLMODE;
typedef enum tagMSIPATCHSTATE
{
 MSIPATCHSTATE_INVALID = 0,
 MSIPATCHSTATE_APPLIED = 1,
 MSIPATCHSTATE_SUPERSEDED = 2,
 MSIPATCHSTATE_OBSOLETED = 4,
 MSIPATCHSTATE_REGISTERED = 8,
 MSIPATCHSTATE_ALL = (MSIPATCHSTATE_APPLIED | MSIPATCHSTATE_SUPERSEDED | MSIPATCHSTATE_OBSOLETED | MSIPATCHSTATE_REGISTERED)
} MSIPATCHSTATE;
typedef enum tagMSIINSTALLCONTEXT
{
        MSIINSTALLCONTEXT_FIRSTVISIBLE = 0,
        MSIINSTALLCONTEXT_NONE = 0,
        MSIINSTALLCONTEXT_USERMANAGED = 1,
        MSIINSTALLCONTEXT_USERUNMANAGED = 2,
        MSIINSTALLCONTEXT_MACHINE = 4,
        MSIINSTALLCONTEXT_ALL = (MSIINSTALLCONTEXT_USERMANAGED | MSIINSTALLCONTEXT_USERUNMANAGED | MSIINSTALLCONTEXT_MACHINE),
        MSIINSTALLCONTEXT_ALLUSERMANAGED = 8,
} MSIINSTALLCONTEXT;
typedef enum tagMSIPATCHDATATYPE
{
 MSIPATCH_DATATYPE_PATCHFILE = 0,
 MSIPATCH_DATATYPE_XMLPATH = 1,
 MSIPATCH_DATATYPE_XMLBLOB = 2,
} MSIPATCHDATATYPE, * PMSIPATCHDATATYPE;
typedef struct tagMSIPATCHSEQUENCEINFOA
{
 LPCSTR szPatchData;
 MSIPATCHDATATYPE ePatchDataType;
 DWORD dwOrder;
 UINT uStatus;
} MSIPATCHSEQUENCEINFOA, * PMSIPATCHSEQUENCEINFOA;
typedef struct tagMSIPATCHSEQUENCEINFOW
{
 LPCWSTR szPatchData;
 MSIPATCHDATATYPE ePatchDataType;
 DWORD dwOrder;
 UINT uStatus;
} MSIPATCHSEQUENCEINFOW, * PMSIPATCHSEQUENCEINFOW;
typedef MSIPATCHSEQUENCEINFOW MSIPATCHSEQUENCEINFO;
typedef PMSIPATCHSEQUENCEINFOW PMSIPATCHSEQUENCEINFO;
typedef enum tagSCRIPTFLAGS
{
 SCRIPTFLAGS_CACHEINFO = 0x00000001L,
 SCRIPTFLAGS_SHORTCUTS = 0x00000004L,
 SCRIPTFLAGS_MACHINEASSIGN = 0x00000008L,
 SCRIPTFLAGS_REGDATA_CNFGINFO = 0x00000020L,
 SCRIPTFLAGS_VALIDATE_TRANSFORMS_LIST = 0x00000040L,
 SCRIPTFLAGS_REGDATA_CLASSINFO = 0x00000080L,
 SCRIPTFLAGS_REGDATA_EXTENSIONINFO = 0x00000100L,
 SCRIPTFLAGS_REGDATA_APPINFO = SCRIPTFLAGS_REGDATA_CLASSINFO | SCRIPTFLAGS_REGDATA_EXTENSIONINFO,
 SCRIPTFLAGS_REGDATA = SCRIPTFLAGS_REGDATA_APPINFO | SCRIPTFLAGS_REGDATA_CNFGINFO,
}SCRIPTFLAGS;
typedef enum tagADVERTISEFLAGS
{
 ADVERTISEFLAGS_MACHINEASSIGN = 0,
 ADVERTISEFLAGS_USERASSIGN = 1,
}ADVERTISEFLAGS;
typedef enum tagINSTALLTYPE
{
 INSTALLTYPE_DEFAULT = 0,
 INSTALLTYPE_NETWORK_IMAGE = 1,
 INSTALLTYPE_SINGLE_INSTANCE = 2,
}INSTALLTYPE;
typedef struct _MSIFILEHASHINFO {
 ULONG dwFileHashInfoSize;
 ULONG dwData [ 4 ];
} MSIFILEHASHINFO, *PMSIFILEHASHINFO;
typedef enum tagMSIARCHITECTUREFLAGS
{
 MSIARCHITECTUREFLAGS_X86 = 0x00000001L,
 MSIARCHITECTUREFLAGS_IA64 = 0x00000002L,
 MSIARCHITECTUREFLAGS_AMD64 = 0x00000004L,
 MSIARCHITECTUREFLAGS_ARM = 0x00000008L
}MSIARCHITECTUREFLAGS;
typedef enum tagMSIOPENPACKAGEFLAGS
{
 MSIOPENPACKAGEFLAGS_IGNOREMACHINESTATE = 0x00000001L,
}MSIOPENPACKAGEFLAGS;
typedef enum tagMSIADVERTISEOPTIONFLAGS
{
 MSIADVERTISEOPTIONFLAGS_INSTANCE = 0x00000001L,
}MSIADVERTISEOPTIONFLAGS;
typedef enum tagMSISOURCETYPE
{
 MSISOURCETYPE_UNKNOWN = 0x00000000L,
 MSISOURCETYPE_NETWORK = 0x00000001L,
 MSISOURCETYPE_URL = 0x00000002L,
 MSISOURCETYPE_MEDIA = 0x00000004L
}MSISOURCETYPE;
typedef enum tagMSICODE
{
 MSICODE_PRODUCT = 0x00000000L,
 MSICODE_PATCH = 0x40000000L
}MSICODE;
typedef enum tagMSITRANSACTION
{
 MSITRANSACTION_CHAIN_EMBEDDEDUI = 0x00000001L,
 MSITRANSACTION_JOIN_EXISTING_EMBEDDEDUI = 0x00000002L,
}MSITRANSACTION;
typedef enum tagMSITRANSACTIONSTATE
{
 MSITRANSACTIONSTATE_ROLLBACK = 0x00000000L,
 MSITRANSACTIONSTATE_COMMIT = 0x00000001L,
}MSITRANSACTIONSTATE;
extern "C" {
INSTALLUILEVEL WINAPI MsiSetInternalUI(
 _In_ INSTALLUILEVEL dwUILevel,
 _Inout_opt_ HWND *phWnd);
INSTALLUI_HANDLERA WINAPI MsiSetExternalUIA(
 _In_opt_ INSTALLUI_HANDLERA puiHandler,
 _In_ DWORD dwMessageFilter,
 _In_opt_ LPVOID pvContext);
INSTALLUI_HANDLERW WINAPI MsiSetExternalUIW(
 _In_opt_ INSTALLUI_HANDLERW puiHandler,
 _In_ DWORD dwMessageFilter,
 _In_opt_ LPVOID pvContext);
UINT WINAPI MsiSetExternalUIRecord(
 _In_opt_ INSTALLUI_HANDLER_RECORD puiHandler,
 _In_ DWORD dwMessageFilter,
 _In_opt_ LPVOID pvContext,
 _Out_opt_ PINSTALLUI_HANDLER_RECORD ppuiPrevHandler);
UINT WINAPI MsiEnableLogA(
 _In_ DWORD dwLogMode,
 _In_opt_ LPCSTR szLogFile,
 _In_ DWORD dwLogAttributes);
UINT WINAPI MsiEnableLogW(
 _In_ DWORD dwLogMode,
 _In_opt_ LPCWSTR szLogFile,
 _In_ DWORD dwLogAttributes);
INSTALLSTATE WINAPI MsiQueryProductStateA(
 _In_ LPCSTR szProduct);
INSTALLSTATE WINAPI MsiQueryProductStateW(
 _In_ LPCWSTR szProduct);
UINT WINAPI MsiGetProductInfoA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szAttribute,
 _Out_writes_opt_(*pcchValueBuf) LPSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiGetProductInfoW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szAttribute,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiGetProductInfoExA(
  _In_ LPCSTR szProductCode,
  _In_opt_ LPCSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCSTR szProperty,
  _Out_writes_opt_(*pcchValue) LPSTR szValue,
  _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiGetProductInfoExW(
  _In_ LPCWSTR szProductCode,
  _In_opt_ LPCWSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCWSTR szProperty,
  _Out_writes_opt_(*pcchValue) LPWSTR szValue,
  _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiInstallProductA(
 _In_ LPCSTR szPackagePath,
 _In_opt_ LPCSTR szCommandLine);
UINT WINAPI MsiInstallProductW(
 _In_ LPCWSTR szPackagePath,
 _In_opt_ LPCWSTR szCommandLine);
UINT WINAPI MsiConfigureProductA(
 _In_ LPCSTR szProduct,
 _In_ int iInstallLevel,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiConfigureProductW(
 _In_ LPCWSTR szProduct,
 _In_ int iInstallLevel,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiConfigureProductExA(
 _In_ LPCSTR szProduct,
 _In_ int iInstallLevel,
 _In_ INSTALLSTATE eInstallState,
 _In_opt_ LPCSTR szCommandLine);
UINT WINAPI MsiConfigureProductExW(
 _In_ LPCWSTR szProduct,
 _In_ int iInstallLevel,
 _In_ INSTALLSTATE eInstallState,
 _In_opt_ LPCWSTR szCommandLine);
UINT WINAPI MsiReinstallProductA(
 _In_ LPCSTR szProduct,
 _In_ DWORD szReinstallMode);
UINT WINAPI MsiReinstallProductW(
 _In_ LPCWSTR szProduct,
 _In_ DWORD szReinstallMode);
UINT WINAPI MsiAdvertiseProductExA(
 _In_ LPCSTR szPackagePath,
 _In_opt_ LPCSTR szScriptfilePath,
 _In_opt_ LPCSTR szTransforms,
 _In_ LANGID lgidLanguage,
 _In_ DWORD dwPlatform,
 _In_ DWORD dwOptions);
UINT WINAPI MsiAdvertiseProductExW(
 _In_ LPCWSTR szPackagePath,
 _In_opt_ LPCWSTR szScriptfilePath,
 _In_opt_ LPCWSTR szTransforms,
 _In_ LANGID lgidLanguage,
 _In_ DWORD dwPlatform,
 _In_ DWORD dwOptions);
UINT WINAPI MsiAdvertiseProductA(
 _In_ LPCSTR szPackagePath,
 _In_opt_ LPCSTR szScriptfilePath,
 _In_opt_ LPCSTR szTransforms,
 _In_ LANGID lgidLanguage);
UINT WINAPI MsiAdvertiseProductW(
 _In_ LPCWSTR szPackagePath,
 _In_opt_ LPCWSTR szScriptfilePath,
 _In_opt_ LPCWSTR szTransforms,
 _In_ LANGID lgidLanguage);
UINT WINAPI MsiProcessAdvertiseScriptA(
 _In_ LPCSTR szScriptFile,
 _In_opt_ LPCSTR szIconFolder,
 _In_opt_ HKEY hRegData,
 _In_ BOOL fShortcuts,
 _In_ BOOL fRemoveItems);
UINT WINAPI MsiProcessAdvertiseScriptW(
 _In_ LPCWSTR szScriptFile,
 _In_opt_ LPCWSTR szIconFolder,
 _In_opt_ HKEY hRegData,
 _In_ BOOL fShortcuts,
 _In_ BOOL fRemoveItems);
UINT WINAPI MsiAdvertiseScriptA(
 _In_ LPCSTR szScriptFile,
 _In_ DWORD dwFlags,
 _In_opt_ PHKEY phRegData,
 _In_ BOOL fRemoveItems);
UINT WINAPI MsiAdvertiseScriptW(
 _In_ LPCWSTR szScriptFile,
 _In_ DWORD dwFlags,
 _In_opt_ PHKEY phRegData,
 _In_ BOOL fRemoveItems);
UINT WINAPI MsiGetProductInfoFromScriptA(
 _In_ LPCSTR szScriptFile,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPSTR lpProductBuf39,
 _Out_opt_ LANGID *plgidLanguage,
 _Out_opt_ LPDWORD pdwVersion,
 _Out_writes_opt_(*pcchNameBuf) LPSTR lpNameBuf,
 _Inout_opt_ LPDWORD pcchNameBuf,
 _Out_writes_opt_(*pcchPackageBuf) LPSTR lpPackageBuf,
 _Inout_opt_ LPDWORD pcchPackageBuf);
UINT WINAPI MsiGetProductInfoFromScriptW(
 _In_ LPCWSTR szScriptFile,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPWSTR lpProductBuf39,
 _Out_opt_ LANGID *plgidLanguage,
 _Out_opt_ LPDWORD pdwVersion,
 _Out_writes_opt_(*pcchNameBuf) LPWSTR lpNameBuf,
 _Inout_opt_ LPDWORD pcchNameBuf,
 _Out_writes_opt_(*pcchPackageBuf) LPWSTR lpPackageBuf,
 _Inout_opt_ LPDWORD pcchPackageBuf);
UINT WINAPI MsiGetProductCodeA(
 _In_ LPCSTR szComponent,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpBuf39);
UINT WINAPI MsiGetProductCodeW(
 _In_ LPCWSTR szComponent,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpBuf39);
USERINFOSTATE WINAPI MsiGetUserInfoA(
 _In_ LPCSTR szProduct,
 _Out_writes_opt_(*pcchUserNameBuf) LPSTR lpUserNameBuf,
 _Inout_opt_ LPDWORD pcchUserNameBuf,
 _Out_writes_opt_(*pcchOrgNameBuf) LPSTR lpOrgNameBuf,
 _Inout_opt_ LPDWORD pcchOrgNameBuf,
 _Out_writes_opt_(*pcchSerialBuf) LPSTR lpSerialBuf,
 _Inout_opt_ LPDWORD pcchSerialBuf);
USERINFOSTATE WINAPI MsiGetUserInfoW(
 _In_ LPCWSTR szProduct,
 _Out_writes_opt_(*pcchUserNameBuf) LPWSTR lpUserNameBuf,
 _Inout_opt_ LPDWORD pcchUserNameBuf,
 _Out_writes_opt_(*pcchOrgNameBuf) LPWSTR lpOrgNameBuf,
 _Inout_opt_ LPDWORD pcchOrgNameBuf,
 _Out_writes_opt_(*pcchSerialBuf) LPWSTR lpSerialBuf,
 _Inout_opt_ LPDWORD pcchSerialBuf);
UINT WINAPI MsiCollectUserInfoA(
 _In_ LPCSTR szProduct);
UINT WINAPI MsiCollectUserInfoW(
 _In_ LPCWSTR szProduct);
UINT WINAPI MsiApplyPatchA(
 _In_ LPCSTR szPatchPackage,
 _In_opt_ LPCSTR szInstallPackage,
 _In_ INSTALLTYPE eInstallType,
 _In_opt_ LPCSTR szCommandLine);
UINT WINAPI MsiApplyPatchW(
 _In_ LPCWSTR szPatchPackage,
 _In_opt_ LPCWSTR szInstallPackage,
 _In_ INSTALLTYPE eInstallType,
 _In_opt_ LPCWSTR szCommandLine);
UINT WINAPI MsiGetPatchInfoA(
 _In_ LPCSTR szPatch,
 _In_ LPCSTR szAttribute,
 _Out_writes_opt_(*pcchValueBuf) LPSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiGetPatchInfoW(
 _In_ LPCWSTR szPatch,
 _In_ LPCWSTR szAttribute,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiEnumPatchesA(
 _In_ LPCSTR szProduct,
 _In_ DWORD iPatchIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpPatchBuf,
 _Out_writes_(*pcchTransformsBuf) LPSTR lpTransformsBuf,
 _Inout_ LPDWORD pcchTransformsBuf);
UINT WINAPI MsiEnumPatchesW(
 _In_ LPCWSTR szProduct,
 _In_ DWORD iPatchIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpPatchBuf,
 _Out_writes_(*pcchTransformsBuf) LPWSTR lpTransformsBuf,
 _Inout_ LPDWORD pcchTransformsBuf);
UINT WINAPI MsiRemovePatchesA(
 _In_ LPCSTR szPatchList,
 _In_ LPCSTR szProductCode,
 _In_ INSTALLTYPE eUninstallType,
 _In_opt_ LPCSTR szPropertyList);
UINT WINAPI MsiRemovePatchesW(
 _In_ LPCWSTR szPatchList,
 _In_ LPCWSTR szProductCode,
 _In_ INSTALLTYPE eUninstallType,
 _In_opt_ LPCWSTR szPropertyList);
UINT WINAPI MsiExtractPatchXMLDataA(
 _In_ LPCSTR szPatchPath,
 _Reserved_ DWORD dwReserved,
 _Out_writes_opt_(*pcchXMLData) LPSTR szXMLData,
 _Inout_opt_ LPDWORD pcchXMLData);
UINT WINAPI MsiExtractPatchXMLDataW(
 _In_ LPCWSTR szPatchPath,
 _Reserved_ DWORD dwReserved,
 _Out_writes_opt_(*pcchXMLData) LPWSTR szXMLData,
 _Inout_opt_ LPDWORD pcchXMLData);
UINT WINAPI MsiGetPatchInfoExA(
        _In_ LPCSTR szPatchCode,
        _In_ LPCSTR szProductCode,
        _In_opt_ LPCSTR szUserSid,
        _In_ MSIINSTALLCONTEXT dwContext,
        _In_ LPCSTR szProperty,
        _Out_writes_opt_(*pcchValue) LPSTR lpValue,
        _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiGetPatchInfoExW(
        _In_ LPCWSTR szPatchCode,
        _In_ LPCWSTR szProductCode,
        _In_opt_ LPCWSTR szUserSid,
        _In_ MSIINSTALLCONTEXT dwContext,
        _In_ LPCWSTR szProperty,
        _Out_writes_opt_(*pcchValue) LPWSTR lpValue,
        _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiApplyMultiplePatchesA(
        _In_ LPCSTR szPatchPackages,
        _In_opt_ LPCSTR szProductCode,
        _In_opt_ LPCSTR szPropertiesList);
UINT WINAPI MsiApplyMultiplePatchesW(
        _In_ LPCWSTR szPatchPackages,
        _In_opt_ LPCWSTR szProductCode,
        _In_opt_ LPCWSTR szPropertiesList);
UINT WINAPI MsiDeterminePatchSequenceA(
 _In_ LPCSTR szProductCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD cPatchInfo,
 _Inout_updates_(cPatchInfo) PMSIPATCHSEQUENCEINFOA pPatchInfo);
UINT WINAPI MsiDeterminePatchSequenceW(
 _In_ LPCWSTR szProductCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD cPatchInfo,
 _Inout_updates_(cPatchInfo) PMSIPATCHSEQUENCEINFOW pPatchInfo);
UINT WINAPI MsiDetermineApplicablePatchesA(
 _In_ LPCSTR szProductPackagePath,
 _In_ DWORD cPatchInfo,
 _Inout_updates_(cPatchInfo) PMSIPATCHSEQUENCEINFOA pPatchInfo);
UINT WINAPI MsiDetermineApplicablePatchesW(
 _In_ LPCWSTR szProductPackagePath,
 _In_ DWORD cPatchInfo,
 _Inout_updates_(cPatchInfo) PMSIPATCHSEQUENCEINFOW pPatchInfo);
UINT WINAPI MsiEnumPatchesExA(
 _In_opt_ LPCSTR szProductCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwFilter,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) CHAR szPatchCode[39],
 _Out_writes_opt_(MAX_GUID_CHARS+1) CHAR szTargetProductCode[39],
 _Out_opt_ MSIINSTALLCONTEXT *pdwTargetProductContext,
 _Out_writes_opt_(*pcchTargetUserSid) LPSTR szTargetUserSid,
 _Inout_opt_ LPDWORD pcchTargetUserSid);
UINT WINAPI MsiEnumPatchesExW(
 _In_opt_ LPCWSTR szProductCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwFilter,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) WCHAR szPatchCode[39],
 _Out_writes_opt_(MAX_GUID_CHARS+1) WCHAR szTargetProductCode[39],
 _Out_opt_ MSIINSTALLCONTEXT *pdwTargetProductContext,
 _Out_writes_opt_(*pcchTargetUserSid) LPWSTR szTargetUserSid,
 _Inout_opt_ LPDWORD pcchTargetUserSid);
INSTALLSTATE WINAPI MsiQueryFeatureStateA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature);
INSTALLSTATE WINAPI MsiQueryFeatureStateW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature);
UINT WINAPI MsiQueryFeatureStateExA(
  _In_ LPCSTR szProductCode,
  _In_opt_ LPCSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCSTR szFeature,
  _Out_opt_ INSTALLSTATE *pdwState);
UINT WINAPI MsiQueryFeatureStateExW(
  _In_ LPCWSTR szProductCode,
  _In_opt_ LPCWSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCWSTR szFeature,
  _Out_opt_ INSTALLSTATE *pdwState);
INSTALLSTATE WINAPI MsiUseFeatureA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature);
INSTALLSTATE WINAPI MsiUseFeatureW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature);
INSTALLSTATE WINAPI MsiUseFeatureExA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature,
 _In_ DWORD dwInstallMode,
 _Reserved_ DWORD dwReserved);
INSTALLSTATE WINAPI MsiUseFeatureExW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature,
 _In_ DWORD dwInstallMode,
 _Reserved_ DWORD dwReserved);
UINT WINAPI MsiGetFeatureUsageA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature,
 _Out_opt_ LPDWORD pdwUseCount,
 _Out_opt_ LPWORD pwDateUsed);
UINT WINAPI MsiGetFeatureUsageW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature,
 _Out_opt_ LPDWORD pdwUseCount,
 _Out_opt_ LPWORD pwDateUsed);
UINT WINAPI MsiConfigureFeatureA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiConfigureFeatureW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiReinstallFeatureA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature,
 _In_ DWORD dwReinstallMode);
UINT WINAPI MsiReinstallFeatureW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature,
 _In_ DWORD dwReinstallMode);
UINT WINAPI MsiProvideComponentA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFeature,
 _In_ LPCSTR szComponent,
 _In_ DWORD dwInstallMode,
 _Out_writes_opt_(*pcchPathBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideComponentW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFeature,
 _In_ LPCWSTR szComponent,
 _In_ DWORD dwInstallMode,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentA(
 _In_ LPCSTR szCategory,
 _In_ LPCSTR szQualifier,
 _In_ DWORD dwInstallMode,
 _Out_writes_opt_(*pcchPathBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentW(
 _In_ LPCWSTR szCategory,
 _In_ LPCWSTR szQualifier,
 _In_ DWORD dwInstallMode,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentExA(
 _In_ LPCSTR szCategory,
 _In_ LPCSTR szQualifier,
 _In_ DWORD dwInstallMode,
 _In_opt_ LPCSTR szProduct,
 _Reserved_ DWORD dwUnused1,
 _Reserved_ DWORD dwUnused2,
 _Out_writes_opt_(*pcchPathBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideQualifiedComponentExW(
 _In_ LPCWSTR szCategory,
 _In_ LPCWSTR szQualifier,
 _In_ DWORD dwInstallMode,
 _In_opt_ LPCWSTR szProduct,
 _Reserved_ DWORD dwUnused1,
 _Reserved_ DWORD dwUnused2,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
INSTALLSTATE WINAPI MsiGetComponentPathA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szComponent,
 _Out_writes_opt_(*pcchBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchBuf);
INSTALLSTATE WINAPI MsiGetComponentPathW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szComponent,
 _Out_writes_opt_(*pcchBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchBuf);
INSTALLSTATE WINAPI MsiGetComponentPathExA(
 _In_ LPCSTR szProductCode,
 _In_ LPCSTR szComponentCode,
 _In_opt_ LPCSTR szUserSid,
 _In_opt_ MSIINSTALLCONTEXT dwContext,
 _Out_writes_opt_(*pcchOutPathBuffer) LPSTR lpOutPathBuffer,
 _Inout_opt_ LPDWORD pcchOutPathBuffer);
INSTALLSTATE WINAPI MsiGetComponentPathExW(
 _In_ LPCWSTR szProductCode,
 _In_ LPCWSTR szComponentCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_opt_ MSIINSTALLCONTEXT dwContext,
 _Out_writes_opt_(*pcchOutPathBuffer) LPWSTR lpOutPathBuffer,
 _Inout_opt_ LPDWORD pcchOutPathBuffer);
UINT WINAPI MsiProvideAssemblyA(
 _In_ LPCSTR szAssemblyName,
 _In_opt_ LPCSTR szAppContext,
 _In_ DWORD dwInstallMode,
 _In_ DWORD dwAssemblyInfo,
 _Out_writes_opt_(*pcchPathBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiProvideAssemblyW(
 _In_ LPCWSTR szAssemblyName,
 _In_opt_ LPCWSTR szAppContext,
 _In_ DWORD dwInstallMode,
 _In_ DWORD dwAssemblyInfo,
 _Out_writes_opt_(*pcchPathBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchPathBuf);
UINT WINAPI MsiQueryComponentStateA(
  _In_ LPCSTR szProductCode,
  _In_opt_ LPCSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCSTR szComponentCode,
  _Out_opt_ INSTALLSTATE *pdwState);
UINT WINAPI MsiQueryComponentStateW(
  _In_ LPCWSTR szProductCode,
  _In_opt_ LPCWSTR szUserSid,
  _In_ MSIINSTALLCONTEXT dwContext,
  _In_ LPCWSTR szComponentCode,
  _Out_opt_ INSTALLSTATE *pdwState);
UINT WINAPI MsiEnumProductsA(
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpProductBuf);
UINT WINAPI MsiEnumProductsW(
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpProductBuf);
UINT WINAPI MsiEnumProductsExA(
  _In_opt_ LPCSTR szProductCode,
  _In_opt_ LPCSTR szUserSid,
  _In_ DWORD dwContext,
  _In_ DWORD dwIndex,
  _Out_writes_opt_(MAX_GUID_CHARS+1) CHAR szInstalledProductCode[39],
  _Out_opt_ MSIINSTALLCONTEXT *pdwInstalledContext,
  _Out_writes_opt_(*pcchSid) LPSTR szSid,
  _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumProductsExW(
  _In_opt_ LPCWSTR szProductCode,
  _In_opt_ LPCWSTR szUserSid,
  _In_ DWORD dwContext,
  _In_ DWORD dwIndex,
  _Out_writes_opt_(MAX_GUID_CHARS+1) WCHAR szInstalledProductCode[39],
  _Out_opt_ MSIINSTALLCONTEXT *pdwInstalledContext,
  _Out_writes_opt_(*pcchSid) LPWSTR szSid,
  _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumRelatedProductsA(
 _In_ LPCSTR lpUpgradeCode,
 _Reserved_ DWORD dwReserved,
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpProductBuf);
UINT WINAPI MsiEnumRelatedProductsW(
 _In_ LPCWSTR lpUpgradeCode,
 _Reserved_ DWORD dwReserved,
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpProductBuf);
UINT WINAPI MsiEnumFeaturesA(
 _In_ LPCSTR szProduct,
 _In_ DWORD iFeatureIndex,
 _Out_writes_(MAX_FEATURE_CHARS+1) LPSTR lpFeatureBuf,
 _Out_writes_opt_(MAX_FEATURE_CHARS+1) LPSTR lpParentBuf);
UINT WINAPI MsiEnumFeaturesW(
 _In_ LPCWSTR szProduct,
 _In_ DWORD iFeatureIndex,
 _Out_writes_(MAX_FEATURE_CHARS+1) LPWSTR lpFeatureBuf,
 _Out_writes_opt_(MAX_FEATURE_CHARS+1) LPWSTR lpParentBuf);
UINT WINAPI MsiEnumComponentsA(
 _In_ DWORD iComponentIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpComponentBuf);
UINT WINAPI MsiEnumComponentsW(
 _In_ DWORD iComponentIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpComponentBuf);
UINT WINAPI MsiEnumComponentsExA(
 _In_opt_ LPCSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) CHAR szInstalledComponentCode[39],
 _Out_opt_ MSIINSTALLCONTEXT* pdwInstalledContext,
 _Out_writes_opt_(*pcchSid) LPSTR szSid,
 _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumComponentsExW(
 _In_opt_ LPCWSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) WCHAR szInstalledComponentCode[39],
 _Out_opt_ MSIINSTALLCONTEXT* pdwInstalledContext,
 _Out_writes_opt_(*pcchSid) LPWSTR szSid,
 _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumClientsA(
 _In_ LPCSTR szComponent,
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPSTR lpProductBuf);
UINT WINAPI MsiEnumClientsW(
 _In_ LPCWSTR szComponent,
 _In_ DWORD iProductIndex,
 _Out_writes_(MAX_GUID_CHARS+1) LPWSTR lpProductBuf);
UINT WINAPI MsiEnumClientsExA (
 _In_ LPCSTR szComponent,
 _In_opt_ LPCSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwProductIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) CHAR szProductBuf[39],
 _Out_opt_ MSIINSTALLCONTEXT *pdwInstalledContext,
 _Out_writes_opt_(*pcchSid) LPSTR szSid,
 _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumClientsExW (
 _In_ LPCWSTR szComponent,
 _In_opt_ LPCWSTR szUserSid,
 _In_ DWORD dwContext,
 _In_ DWORD dwProductIndex,
 _Out_writes_opt_(MAX_GUID_CHARS+1) WCHAR szProductBuf[39],
 _Out_opt_ MSIINSTALLCONTEXT *pdwInstalledContext,
 _Out_writes_opt_(*pcchSid) LPWSTR szSid,
 _Inout_opt_ LPDWORD pcchSid);
UINT WINAPI MsiEnumComponentQualifiersA(
 _In_ LPCSTR szComponent,
 _In_ DWORD iIndex,
 _Out_writes_(*pcchQualifierBuf) LPSTR lpQualifierBuf,
 _Inout_ LPDWORD pcchQualifierBuf,
 _Out_writes_opt_(*pcchApplicationDataBuf) LPSTR lpApplicationDataBuf,
 _Inout_opt_ LPDWORD pcchApplicationDataBuf);
UINT WINAPI MsiEnumComponentQualifiersW(
 _In_ LPCWSTR szComponent,
 _In_ DWORD iIndex,
 _Out_writes_(*pcchQualifierBuf) LPWSTR lpQualifierBuf,
 _Inout_ LPDWORD pcchQualifierBuf,
 _Out_writes_opt_(*pcchApplicationDataBuf) LPWSTR lpApplicationDataBuf,
 _Inout_opt_ LPDWORD pcchApplicationDataBuf);
UINT WINAPI MsiOpenProductA(
 _In_ LPCSTR szProduct,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiOpenProductW(
 _In_ LPCWSTR szProduct,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageA(
 _In_ LPCSTR szPackagePath,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageW(
 _In_ LPCWSTR szPackagePath,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageExA(
 _In_ LPCSTR szPackagePath,
 _In_ DWORD dwOptions,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiOpenPackageExW(
 _In_ LPCWSTR szPackagePath,
 _In_ DWORD dwOptions,
 _Out_ MSIHANDLE *hProduct);
UINT WINAPI MsiGetPatchFileListA(
 _In_ LPCSTR szProductCode,
 _In_ LPCSTR szPatchPackages,
 _Out_ LPDWORD pcFiles,
 _Outptr_result_buffer_maybenull_(*pcFiles)MSIHANDLE** pphFileRecords);
UINT WINAPI MsiGetPatchFileListW(
 _In_ LPCWSTR szProductCode,
 _In_ LPCWSTR szPatchPackages,
 _Out_ LPDWORD pcFiles,
 _Outptr_result_buffer_maybenull_(*pcFiles)MSIHANDLE** pphFileRecords);
UINT WINAPI MsiGetProductPropertyA(
 _In_ MSIHANDLE hProduct,
 _In_ LPCSTR szProperty,
 _Out_writes_opt_(*pcchValueBuf) LPSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiGetProductPropertyW(
 _In_ MSIHANDLE hProduct,
 _In_ LPCWSTR szProperty,
 _Out_writes_opt_(*pcchValueBuf) LPWSTR lpValueBuf,
 _Inout_opt_ LPDWORD pcchValueBuf);
UINT WINAPI MsiVerifyPackageA(
 _In_ LPCSTR szPackagePath);
UINT WINAPI MsiVerifyPackageW(
 _In_ LPCWSTR szPackagePath);
UINT WINAPI MsiGetFeatureInfoA(
 _In_ MSIHANDLE hProduct,
 _In_ LPCSTR szFeature,
 _Out_opt_ LPDWORD lpAttributes,
 _Out_writes_opt_(*pcchTitleBuf) LPSTR lpTitleBuf,
 _Inout_opt_ LPDWORD pcchTitleBuf,
 _Out_writes_opt_(*pcchHelpBuf) LPSTR lpHelpBuf,
 _Inout_opt_ LPDWORD pcchHelpBuf);
UINT WINAPI MsiGetFeatureInfoW(
 _In_ MSIHANDLE hProduct,
 _In_ LPCWSTR szFeature,
 _Out_opt_ LPDWORD lpAttributes,
 _Out_writes_opt_(*pcchTitleBuf) LPWSTR lpTitleBuf,
 _Inout_opt_ LPDWORD pcchTitleBuf,
 _Out_writes_opt_(*pcchHelpBuf) LPWSTR lpHelpBuf,
 _Inout_opt_ LPDWORD pcchHelpBuf);
UINT WINAPI MsiInstallMissingComponentA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szComponent,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiInstallMissingComponentW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szComponent,
 _In_ INSTALLSTATE eInstallState);
UINT WINAPI MsiInstallMissingFileA(
 _In_ LPCSTR szProduct,
 _In_ LPCSTR szFile);
UINT WINAPI MsiInstallMissingFileW(
 _In_ LPCWSTR szProduct,
 _In_ LPCWSTR szFile);
INSTALLSTATE WINAPI MsiLocateComponentA(
 _In_ LPCSTR szComponent,
 _Out_writes_opt_(*pcchBuf) LPSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchBuf);
INSTALLSTATE WINAPI MsiLocateComponentW(
 _In_ LPCWSTR szComponent,
 _Out_writes_opt_(*pcchBuf) LPWSTR lpPathBuf,
 _Inout_opt_ LPDWORD pcchBuf);
UINT WINAPI MsiSourceListClearAllA(
 _In_ LPCSTR szProduct,
 _In_opt_ LPCSTR szUserName,
 _Reserved_ DWORD dwReserved);
UINT WINAPI MsiSourceListClearAllW(
 _In_ LPCWSTR szProduct,
 _In_opt_ LPCWSTR szUserName,
 _Reserved_ DWORD dwReserved);
UINT WINAPI MsiSourceListAddSourceA(
 _In_ LPCSTR szProduct,
 _In_opt_ LPCSTR szUserName,
 _Reserved_ DWORD dwReserved,
 _In_ LPCSTR szSource);
UINT WINAPI MsiSourceListAddSourceW(
 _In_ LPCWSTR szProduct,
 _In_opt_ LPCWSTR szUserName,
 _Reserved_ DWORD dwReserved,
 _In_ LPCWSTR szSource);
UINT WINAPI MsiSourceListForceResolutionA(
 _In_ LPCSTR szProduct,
 _In_opt_ LPCSTR szUserName,
 _Reserved_ DWORD dwReserved);
UINT WINAPI MsiSourceListForceResolutionW(
 _In_ LPCWSTR szProduct,
 _In_opt_ LPCWSTR szUserName,
 _Reserved_ DWORD dwReserved);
UINT WINAPI MsiSourceListAddSourceExA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCSTR szSource,
 _In_ DWORD dwIndex);
UINT WINAPI MsiSourceListAddSourceExW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCWSTR szSource,
 _In_ DWORD dwIndex);
UINT WINAPI MsiSourceListAddMediaDiskA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwDiskId,
 _In_opt_ LPCSTR szVolumeLabel,
 _In_opt_ LPCSTR szDiskPrompt);
UINT WINAPI MsiSourceListAddMediaDiskW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwDiskId,
 _In_opt_ LPCWSTR szVolumeLabel,
 _In_opt_ LPCWSTR szDiskPrompt);
UINT WINAPI MsiSourceListClearSourceA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCSTR szSource);
UINT WINAPI MsiSourceListClearSourceW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCWSTR szSource);
UINT WINAPI MsiSourceListClearMediaDiskA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwDiskId);
UINT WINAPI MsiSourceListClearMediaDiskW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwDiskId);
UINT WINAPI MsiSourceListClearAllExA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions);
UINT WINAPI MsiSourceListClearAllExW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions);
UINT WINAPI MsiSourceListForceResolutionExA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions);
UINT WINAPI MsiSourceListForceResolutionExW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions);
UINT WINAPI MsiSourceListSetInfoA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCSTR szProperty,
 _In_ LPCSTR szValue);
UINT WINAPI MsiSourceListSetInfoW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCWSTR szProperty,
 _In_ LPCWSTR szValue);
UINT WINAPI MsiSourceListGetInfoA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCSTR szProperty,
 _Out_writes_opt_(*pcchValue) LPSTR szValue,
 _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiSourceListGetInfoW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ LPCWSTR szProperty,
 _Out_writes_opt_(*pcchValue) LPWSTR szValue,
 _Inout_opt_ LPDWORD pcchValue);
UINT WINAPI MsiSourceListEnumSourcesA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(*pcchSource) LPSTR szSource,
 _Inout_opt_ LPDWORD pcchSource);
UINT WINAPI MsiSourceListEnumSourcesW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwIndex,
 _Out_writes_opt_(*pcchSource) LPWSTR szSource,
 _Inout_opt_ LPDWORD pcchSource);
UINT WINAPI MsiSourceListEnumMediaDisksA(
 _In_ LPCSTR szProductCodeOrPatchCode,
 _In_opt_ LPCSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwIndex,
 _Out_opt_ LPDWORD pdwDiskId,
 _Out_writes_opt_(*pcchVolumeLabel) LPSTR szVolumeLabel,
 _Inout_opt_ LPDWORD pcchVolumeLabel,
 _Out_writes_opt_(*pcchDiskPrompt) LPSTR szDiskPrompt,
 _Inout_opt_ LPDWORD pcchDiskPrompt);
UINT WINAPI MsiSourceListEnumMediaDisksW(
 _In_ LPCWSTR szProductCodeOrPatchCode,
 _In_opt_ LPCWSTR szUserSid,
 _In_ MSIINSTALLCONTEXT dwContext,
 _In_ DWORD dwOptions,
 _In_ DWORD dwIndex,
 _Out_opt_ LPDWORD pdwDiskId,
 _Out_writes_opt_(*pcchVolumeLabel) LPWSTR szVolumeLabel,
 _Inout_opt_ LPDWORD pcchVolumeLabel,
 _Out_writes_opt_(*pcchDiskPrompt) LPWSTR szDiskPrompt,
 _Inout_opt_ LPDWORD pcchDiskPrompt);
UINT WINAPI MsiGetFileVersionA(
 _In_ LPCSTR szFilePath,
 _Out_writes_opt_(*pcchVersionBuf) LPSTR lpVersionBuf,
 _Inout_opt_ LPDWORD pcchVersionBuf,
 _Out_writes_opt_(*pcchLangBuf) LPSTR lpLangBuf,
 _Inout_opt_ LPDWORD pcchLangBuf);
UINT WINAPI MsiGetFileVersionW(
 _In_ LPCWSTR szFilePath,
 _Out_writes_opt_(*pcchVersionBuf) LPWSTR lpVersionBuf,
 _Inout_opt_ LPDWORD pcchVersionBuf,
 _Out_writes_opt_(*pcchLangBuf) LPWSTR lpLangBuf,
 _Inout_opt_ LPDWORD pcchLangBuf);
UINT WINAPI MsiGetFileHashA(
 _In_ LPCSTR szFilePath,
 _In_ DWORD dwOptions,
 _Inout_ PMSIFILEHASHINFO pHash);
UINT WINAPI MsiGetFileHashW(
 _In_ LPCWSTR szFilePath,
 _In_ DWORD dwOptions,
 _Inout_ PMSIFILEHASHINFO pHash);
HRESULT WINAPI MsiGetFileSignatureInformationA(
 _In_ LPCSTR szSignedObjectPath,
 _In_ DWORD dwFlags,
 _Outptr_ PCCERT_CONTEXT *ppcCertContext,
 _Out_writes_bytes_opt_(*pcbHashData) LPBYTE pbHashData,
 _Inout_opt_ LPDWORD pcbHashData);
HRESULT WINAPI MsiGetFileSignatureInformationW(
 _In_ LPCWSTR szSignedObjectPath,
 _In_ DWORD dwFlags,
 _Outptr_ PCCERT_CONTEXT *ppcCertContext,
 _Out_writes_bytes_opt_(*pcbHashData) LPBYTE pbHashData,
 _Inout_opt_ LPDWORD pcbHashData);
UINT WINAPI MsiGetShortcutTargetA(
 _In_ LPCSTR szShortcutPath,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPSTR szProductCode,
 _Out_writes_opt_(MAX_FEATURE_CHARS+1) LPSTR szFeatureId,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPSTR szComponentCode);
UINT WINAPI MsiGetShortcutTargetW(
 _In_ LPCWSTR szShortcutPath,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPWSTR szProductCode,
 _Out_writes_opt_(MAX_FEATURE_CHARS+1) LPWSTR szFeatureId,
 _Out_writes_opt_(MAX_GUID_CHARS+1) LPWSTR szComponentCode);
UINT WINAPI MsiIsProductElevatedA(
 _In_ LPCSTR szProduct,
 _Out_ BOOL *pfElevated);
UINT WINAPI MsiIsProductElevatedW(
 _In_ LPCWSTR szProduct,
 _Out_ BOOL *pfElevated);
UINT WINAPI MsiNotifySidChangeA(_In_ LPCSTR pOldSid,
                                _In_ LPCSTR pNewSid);
UINT WINAPI MsiNotifySidChangeW(_In_ LPCWSTR pOldSid,
                                _In_ LPCWSTR pNewSid);
UINT WINAPI MsiBeginTransactionA(
 _In_ LPCSTR szName,
 _In_ DWORD dwTransactionAttributes,
 _Out_ MSIHANDLE* phTransactionHandle,
 _Out_ HANDLE* phChangeOfOwnerEvent);
UINT WINAPI MsiBeginTransactionW(
 _In_ LPCWSTR szName,
 _In_ DWORD dwTransactionAttributes,
 _Out_ MSIHANDLE* phTransactionHandle,
 _Out_ HANDLE* phChangeOfOwnerEvent);
UINT WINAPI MsiEndTransaction(
 _In_ DWORD dwTransactionState);
UINT WINAPI MsiJoinTransaction(
 _In_ MSIHANDLE hTransactionHandle,
 _In_ DWORD dwTransactionAttributes,
 _Out_ HANDLE* phChangeOfOwnerEvent);
}
#endif
#pragma endregion
